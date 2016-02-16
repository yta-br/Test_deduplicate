#include "types.h"
__declspec(dllexport) int init(uint64 block_size, uint32 blob_size);
__declspec(dllexport) int put_block(uint64 block_id, const byte* block_data);
__declspec(dllexport) int get_block(uint64 block_id, byte* block_data);

