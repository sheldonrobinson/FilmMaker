#ifndef _MRQ_RINGBUF_H
#define _MRQ_RINGBUF_H

#ifdef MRQ_RINGBUFFER_SHARED
#ifdef __cplusplus
#    if defined(_WIN32) && !defined(__MINGW32__)
#        ifdef MRQ_RINGBUFFER_BUILD
#            define MRQ_RINGBUFFER_API extern "C" __declspec(dllexport)
#        else
#            define MRQ_RINGBUFFER_API extern "C" __declspec(dllimport)
#        endif
#    else
#        define MRQ_RINGBUFFER_API extern "C" __attribute__((visibility("default"))) __attribute__((used))
#    endif
#else
#    if defined(_WIN32) && !defined(__MINGW32__)
#        ifdef MRQ_RINGBUFFER_BUILD
#            define MRQ_RINGBUFFER_API __declspec(dllexport)
#        else
#            define MRQ_RINGBUFFER_API __declspec(dllimport)
#        endif
#    else
#        define MRQ_RINGBUFFER_API __attribute__((visibility("default"))) __attribute__((used))
#    endif	
#endif
#else
#define MRQ_RINGBUFFER_API
#endif

#include "types.h"

MRQ_RINGBUFFER_API bool mrq_ringbuf_init(SharedMemoryHandle* handle, const char* name, size_t size, bool overwriteOldest);

MRQ_RINGBUFFER_API void mrq_ringbuf_close(SharedMemoryHandle* handle, size_t size);

MRQ_RINGBUFFER_API bool mrq_ringbuf_read(const SharedMemoryHandle* handle, const FrameActionBinary* outAction);

MRQ_RINGBUFFER_API bool mrq_ringbuf_write(SharedMemoryHandle* handle, FrameActionBinary* action);

MRQ_RINGBUFFER_API uint32_t mrq_ringbuf_read_batch(const SharedMemoryHandle* handle, const FrameActionBinary* outActions, uint32_t maxCount);

MRQ_RINGBUFFER_API uint32_t mrq_ringbuf_write_batch(SharedMemoryHandle* handle, FrameActionBinary* actions, uint32_t count);

#endif // _MRQ_RINGBUF_H
