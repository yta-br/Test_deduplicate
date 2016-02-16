#pragma once
#include "types.h"

class CBlock
{
	uint64 id;
	byte* block_data;
public:
	CBlock(void);
	~CBlock(void);
};

