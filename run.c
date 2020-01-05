#include <stdio.h>
#include "sds.h"


int main(){
    sds mystring = sdsnew("Hello world!");
    printf("%s\n", mystring);
    sdsfree(mystring);
    return 0;
}
