#include "btimap.h"

uint32_t bits_generate_ones(uint8_t start_offset, uint8_t end_offset) {
    assert(start_offset < 32);
    assert(end_offset < 32);
    assert(start_offset <= end_offset);
    uint32_t fourByte = 0x00000000;
    uint32_t num_bits = end_offset - start_offset + 1;
    uint64_t mask32 = ((1ULL << num_bits) - 1ULL) << start_offset;
    return (uint32_t)mask32;
}

bool bits_compare(uint32_t bits1, uint32_t bits2, uint8_t count) {
    uint32_t mask = bits_generate_ones(0, count - 1);
    return (bits1 & mask) == (bits2 & mask);
}