#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char t[3]="az";
    char * t2="lololo";
    t=t2;
    printf("%s\n", t);
    exit(0);
}