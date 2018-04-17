#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * mystrcat(char * dst, char * src){
  while(*dst != '\0'){

    dst++;
  }

  while(*src != '\0'){
    *dst = *src;
    src++;
    dst++;
  }

  *dst = '\0';

}

int main() {

  char str[100], str1[100];

  strcpy(str, "minha pomba");
  strcpy(str1, "meu pinto");

  printf("%s\n", str);

  printf("%s\n", str1);

  mystrcat(str, str1);

  printf("%s\n", str);

  return 0;
}
