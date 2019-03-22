// string.h kütüphanesini kullanmadan strcat fonksiyonu ile aynı işi yapan manuel program:
#include <stdio.h>

void stringcat(char [], char []);
int string_length(char []);

int string_length(char s[]){
  int i;
  for(i=0;s[i]!='\0';i++)
  {}
  return i;

}
void stringcat(char a[],char b[]){
  int j;
  int x = 0;
  for(j=string_length(a);b[x]!='\0';j++){
  a[j] = b[x];
  x++;
}
  printf("%s",a);


}
int main(void) {
  char s1[20];
  char s2[20];

  printf("1.Kelimeyi giriniz : \n");
  scanf("%s",s1);
  printf("2.Kelimeyi giriniz: \n");
  scanf("%s",s2);

  stringcat(s1,s2);

  return 0;
}
