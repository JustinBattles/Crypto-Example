#define _XOPEN_SOURCE
#include <stdio.h>
//#include <unistd.h>
#include <crypt.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 2) {
    printf("Usage: crypt <password>\n");
    exit(0);
  }
  
  printf("%s\n", crypt(argv[1], "$5$rounds=4000$somesalt"));
  return 0;
}
