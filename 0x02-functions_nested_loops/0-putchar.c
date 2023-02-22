#include <stdio.h>
#include "main.h"
#include "main.c"

int main(void)
{
  int i;

  for (i = 0; i < 8; i++) {
    putchar("_putchar"[i]);
  }
  putchar('\n');
  
  return 0;
}

