//Girilen herhangi bir yılın kaçıncı yüzyıla ait olduğunu bulan program.

#include <stdio.h>

int getCentury(int);
int getCentury(int yil){
	if(yil%100 == 0)
		yil = yil/100;
			else
	        	yil = yil/100 + 1;
	
	return yil;
	
}

int main(){
	
	int yil;
	
	printf("Yili giriniz: \n");
	scanf("%d", &yil);
  if(yil<=0)
  printf("Boyle bir yil olamaz :)");
  else
	printf("%d. yuzyildir\n", getCentury(yil));
	
	return 0;
}
