// string.h kütüphanesini kullanmadan strcpy fonksiyonu ile aynı işi yapan manuel program:
#include <stdio.h>

void stringcpy(char [],char[]);
void stringcpy(char a[],char b[]){
  int i;
 
  for(i=0;b[i] != '\0';i++)
  a[i] = b[i];
  printf("%s \n", a);
  
}

int main(void) {
  char s1[10];
  char s2[10];

  printf("1. ismi giriniz:\n ");
  scanf("%s",s1);
  printf("2.ismi giriniz: \n");
  scanf("%s",s2);

  stringcpy(s1,s2);
  

  return 0;
}
