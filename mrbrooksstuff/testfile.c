#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
  char a[] = "Hello\n\0";
  printf("%s",a);
  a[strlen(a)-1] = '\0';
  printf("%s",a);
}
