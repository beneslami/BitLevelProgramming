#include <stdio.h>

int main() { 

    u_int32_t a = 0x01020304;   // Left Value is Register Value and the variable a is Memory Value
    u_int32_t *ptrl = &a;       // Now ptrl points to the location where the value a exisits

    u_int32_t read = *ptrl;     // Read from memory and transfer data to register. The value will be flipperd 
    
    u_int32_t *ptrl2 = a;       // Write from CPU register to memory. The value will be flipped. 
    


    u_int32_t VAR = 0x04030201;  // 0x01 0x02 0x03 0x04 -> 0x02 0x03 0x04 0x01
    u_int32_t *ptr = &VAR;

    u_int32_t temp = ntohl(*ptr);
    temp = temp << 8;
    temp = temp | 0x00000001;

    printf("%x\n", temp);
    return 0;
}