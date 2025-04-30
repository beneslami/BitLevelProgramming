## Bit Level Programming

Usually, we must be careful with endianness when we're dealing with system programmin in bit level. 

** Memory Value (MV)

** Register Value (RV)

During programming, the value of variables are different when they reside in either registers of the CPU or in memory. 

```
uint32_t a = 0x01020304;
```
If we take a close look at this value in register and memory, we can see 

```
CPU register
00000001 00000010 00000011 00000100

Memory
00000100 00000011 00000010 00000001
```
We see that, **always** Register Value is mirror reflection of Memory Value.

We have two famous public API to convert VA to MA and vice versa 

1- hton(): comes with two flavour: 
```
uint16_t htons(uint16_t)

uint32_t htonl(uint32_t)

uint16_t ntohs(uint16_t)

uint32_t ntohl(uint32_t)
```
In the above APIs, the letter ```h``` stands for host which is the machine we are working with. It can be either Big Endian or Little Endian. On the other hand, the letter ```n``` stands for Network Byte Order which is always Big Endian. 