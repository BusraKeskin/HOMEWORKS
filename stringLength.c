//Girilen herhangi bir stringin uzunluğunu bulan ve ekrana stringi tersten yazdıran program.

#include <stdio.h>

int uzunluk(char []);

int uzunluk(char s[]){
  int a;
  for(a=0;s[a]!='\0';a++){}
  printf("String uzunlugu: %d\n",a);
  return a;
  
}

int main(void) {
  char s[] = "Busra";
  int i;
  printf("Kelime giriniz\n");
  scanf("%s", s);
  for(i=uzunluk(s);i>=0;i--){
  printf("%c",s[i]);
  }

  return 0;
}
