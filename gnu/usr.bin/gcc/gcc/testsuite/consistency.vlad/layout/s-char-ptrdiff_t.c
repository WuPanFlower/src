#include <stdio.h>
#include <stddef.h>

static struct sss{
  char f;
  ptrdiff_t snd;
} sss;

#define _offsetof(st,f) ((char *)&((st *) 16)->f - (char *) 16)

int main (void) {
  printf ("+++Struct char-ptrdiff_t:\n");
  printf ("size=%d,align=%d,offset-char=%d,offset-ptrdiff_t=%d,\nalign-char=%d,align-ptrdiff_t=%d\n",
          sizeof (sss), __alignof__ (sss),
          _offsetof (struct sss, f), _offsetof (struct sss, snd),
          __alignof__ (sss.f), __alignof__ (sss.snd));
  return 0;
}
