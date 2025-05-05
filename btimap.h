#ifndef __BITMAP__
#define __BITMAP__

#include <stdint.h>
#include <assert.h>
#include <stdbool.h>

#define ITERATE_BITMAP_BEGIN(btimapPtr, startIndex, index, boolout) \ 
	// do some stuff here

#define ITERATE_BITMAP_END \ 
	// do some stuff here

typedef enum {
	ZERO,
	ONE,
	DONT_CARE,
	BIT_TYPE_MAX
} bit_type_t;

typedef struct bitmap_ {
    u_int32_t *bits;
    u_int16_t tsize;
    u_int16_t next;
}bitmap_t;

void bitmap_init(bitmap_t *bitmap, uint16_t size) ;
void bitmap_free_internal(bitmap_t *bitmap);
void bitmap_free(bitmap_t *bitmap);
void bitmap_reset(bitmap_t *bitmap);
bool bitmap_at(bitmap_t *bitmap, uint16_t index);
void bitmap_set_bit_at(bitmap_t *bitmap, uint16_t index) ;
void bitmap_unset_bit_at(bitmap_t *bitmap, uint16_t index) ;
char *bitmap_print(bitmap_t *bitmap); 

uint32_t bits_generate_ones(uint8_t start_offset, uint8_t end_offset);
bool bits_compare(uint32_t bits1, uint32_t bits2, uint8_t count);

static inline uint32_t
LSHIFT (uint32_t N, uint16_t n) {
	/* Fn returns 0 if n == 32 else return a new uint32_t after performing left shift by n */
	if(n == 32) {
		return (uint32_t)0;
	}
	return N << n;
}

static inline uint32_t
RSHIFT (uint32_t N, uint16_t n) {
	/* Fn returns 0 if n == 32 else return a new uint32_t after performing right shift by n */
	if(n == 32) {
		return (uint32_t)0;
	}
	return N >> n;
}
#endif