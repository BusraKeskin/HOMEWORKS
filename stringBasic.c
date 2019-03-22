//Girilen herhangi bir stringin her bir karakterinin ASCII karşılığını yazdıran program.

#include <stdio.h>

int main(void) {
  char s[] = "Busra";
  int i;
  printf("Kelime giriniz:");
  scanf("%s",s);
  for(i=0;s[i]!= '\0';i++){
  printf("%c - %d\n", s[i], s[i]);
  }
  return 0;
}
