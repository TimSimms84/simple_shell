#include "main.h"

int _strlen(const char *s) {
  size_t len = 0;
  // align
 for (;;) {
    unsigned x = *(unsigned*) s;
    #if UINT_MAX >> CHAR_BIT == UCHAR_MAX
      if(!(x & 0xFF) || !(x & 0xFF00)) break;
      s += 2, len += 2;
    #elif UINT_MAX >> CHAR_BIT*3 == UCHAR_MAX
      if (!(x & 0xFF) || !(x & 0xFF00) || !(x & 0xFF0000) || !(x & 0xFF000000)) break;
      s += 4, len += 4;
    #elif UINT_MAX >> CHAR_BIT*7 == UCHAR_MAX
      if (   !(x & 0xFF) || !(x & 0xFF00)
          || !(x & 0xFF0000) || !(x & 0xFF000000)
          || !(x & 0xFF00000000) || !(x & 0xFF0000000000)
          || !(x & 0xFF000000000000) || !(x & 0xFF00000000000000)) break;
      s += 8, len += 8;
    #else
      #error TBD code
    #endif
  }
  while (*s++) {
    len++;
  }
  return len;
}
