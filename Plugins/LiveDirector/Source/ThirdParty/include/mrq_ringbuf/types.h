#ifndef _MRQ_RINGBUF_TYPES_H
#define _MRQ_RINGBUF_TYPES_H

#ifdef __cplusplus
	#include <cstdint>
	#include <cstdbool>
	#include <atomic>
#else // __cplusplus - Objective-C or other C platform
	#include <stdint.h>
	#include <stdbool.h>
	#include <stdatomic.h> // C11 atomics
#endif

#define MRQ_MAGIC   0x4D525141 // 'MRQA'
#define MRQ_VERSION 1
#define SHM_NAME    "MRQActionRingBuffer"

#define SLOT_SIZE   1024
#define SLOT_COUNT  1024
#define SHM_SIZE    (sizeof(RingBufferHeader) + SLOT_SIZE * SLOT_COUNT)

#ifdef __cplusplus
extern "C" {
#endif

struct RingBufferHeader
{
    uint32_t Magic;
    uint32_t Version;
#ifdef __cplusplus
    std::atomic<uint32_t> Head;     // Atomic read index
	std::atomic<uint32_t> Tail;     // Atomic write index
#else
    atomic_uint32_t Head;     // Atomic read index
    atomic_uint32_t Tail;     // Atomic write index
#endif
    uint32_t SlotSize;
    uint32_t SlotCount;
    uint8_t  Overwrite;
    uint8_t  Reserved[31];     // Padding to 64 bytes
};

#pragma pack(push, 1)
struct FrameActionBinary
{
    int32_t StartFrame;
    int32_t EndFrame;
    uint8_t TargetMode; // 0 = ActorName, 1 = ActorTag, 2 = SequencerTrack
    char Target[64];    // Actor name, tag, or track name
    char Action[64];    // Function name, event name, or sequencer command
    uint8_t ParamCount;
    struct {
        char Key[32];
        char ValueStr[64];
        double ValueNum;
        uint8_t Type; // 0=number, 1=string, 2=bool, 3=vector
    } Params[8];
};
#pragma pack(pop)

struct SharedMemoryHandle
{
    void* Ptr;
#ifdef _WIN32
    void* MapFile;
#else
    int ShmFd;
#endif
};

#ifdef __cplusplus
}
#endif

#endif // _MRQ_RINGBUF_TYPES_H