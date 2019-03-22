//Girilen herhangi bir yılın artık yıl olup olmadığını hesaplayan program.

#include <stdio.h>

void isLeap(int);
void isLeap(int sene){
  if((sene%4==0 && sene%100!=0) || (sene%400==0 && sene%100==0))
  printf("Bu yil, artik yildir!\n");
  else 
  printf("Bu yil artık yil degildir!\n");
}

int main(void) {

  int sene;
  printf("Seneyi giriniz:\n");
  scanf("%d",&sene);
  isLeap(sene);
  return 0;
}
