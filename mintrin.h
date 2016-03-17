#ifndef _MINTRIN
#define _MINTRIN

#define _rotl16(x, n) ((x)<<(n))&0xffff
#define _rotr16(x, n) ((x)>>(n))&0xffff
#define _rotl8(x, n)  ((x)<<(n))&0xff
#define _rotr8(x, n)  ((x)>>(n))&0xff
#define _countof(array) (sizeof(array)/sizeof(array[0]))


#endif
