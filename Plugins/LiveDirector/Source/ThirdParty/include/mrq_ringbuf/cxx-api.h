#pragma once

#include "c-api.h"


MRQ_RINGBUFFER_API bool MRQCreateOrOpenSharedMemoryLF(SharedMemoryHandle& handle, const char* name, size_t size, bool overwriteOldest);

MRQ_RINGBUFFER_API void MRQCloseSharedMemoryLF(SharedMemoryHandle& handle, size_t size);

MRQ_RINGBUFFER_API bool MRQReadActionLF(SharedMemoryHandle& handle, FrameActionBinary& outAction);

MRQ_RINGBUFFER_API bool MRQWriteActionLF(SharedMemoryHandle& handle, const FrameActionBinary& action);

MRQ_RINGBUFFER_API uint32_t MRQReadActionsBatchLF(SharedMemoryHandle& handle, FrameActionBinary* outActions, uint32_t maxCount);

MRQ_RINGBUFFER_API uint32_t MRQWriteActionsBatchLF(SharedMemoryHandle& handle, const FrameActionBinary* actions, uint32_t count);
