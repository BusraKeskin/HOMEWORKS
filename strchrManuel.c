// string.h kütüphanesini kullanmadan strchr fonksiyonu ile aynı işi yapan manuel program:

#include <stdio.h>


int stringchr(char [], char);
int stringchr(char s[],char ch){
  int i;
  
  for(i=0;s[i]!='\0';i++){
  if(s[i] == ch){
  printf("aranan harf %d. konumda\n",i);
  return i;
   }
  }
  return 0;
}

int main(void) {
  
  char s1[] = "gtracde";
  char ch = 'g';
  /*
  char *p;
  char ch = 'a';
  p = strchr(s1, ch);
  printf("%s", p);
  */

  stringchr(s1,ch);
  return 0;
}
