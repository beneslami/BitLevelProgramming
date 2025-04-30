#include <stdio.h>

int main(void) {
    unsigned short a = 2;           // 00000010 00000000 -> in Memory
    char *byte = (char*)&a;
    if(*byte == 2) { 
        printf("Little Endian - 0x02 0x00 -> in Memory\n");
    }
    else {
        printf("Big Endian - 0x00 0x02 -> in Memory\n");
    }
    return 0;
}