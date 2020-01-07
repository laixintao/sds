#include "sds.h"
#include <stdio.h>

void try_sdsnew() {
  sds mystring = sdsnew("Hello world!");
  printf("%s\n", mystring);
  sdsfree(mystring);
}

void try_sdslen() {
  sds s = sdsnewlen("A\0\0B", 4);
  printf("%d\n", (int)sdslen(s));
}

void try_sdsnewlen() {
  char buf[3];
  sds mystring;

  buf[0] = 'A';
  buf[1] = 'B';
  buf[2] = 'C';
  mystring = sdsnewlen(buf, 3);
  printf("%s of len %d\n", mystring, (int)sdslen(mystring));
}

void try_sdscopy() {
  sds s = sdsnew("Hello World!");
  s = sdscpylen(s, "Hello Superman!", 15);
  printf("new allocated string is: %s\n", s);
}

int main() {
  try_sdsnew();
  try_sdsnewlen();
  try_sdslen();
  try_sdscopy();

  return 0;
}


// TODO is https://github.com/antirez/sds#command-line-oriented-tokenization
// really works?
// like single quote in double quotes
