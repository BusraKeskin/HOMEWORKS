// string.h kütüphanesini kullanmadan strcmp fonksiyonu ile aynı işi yapan manuel program:
#include <stdio.h>

int stringlen(char []);
int stringcmp(char [],char []);

int stringlen(char s[]){
  int i=0;
  for(i=0;s[i]!='\0';i++)
  {}
  return i;
}


int stringcmp(char a1[],char a2[]){
  if(stringlen(a1) == stringlen(a2)){
    printf("uzunluklar ayni\n");
  return 0;
  }
  else if(stringlen(a1)<stringlen(a2)){
    printf("2. dizi 1. diziden buyuk\n");
  return -1;
  }
  else {
     printf("1. dizi 2. diziden buyuk\n");
     return 1;
  }
 
}


int main(void) {
 
char s1[] = {'a','b','x','\0'};
char s2[] = {'d','c','\0'};

printf("%d\n",stringlen(s1));
printf("%d\n",stringlen(s2));


stringcmp(s1,s2);


  return 0;
}
