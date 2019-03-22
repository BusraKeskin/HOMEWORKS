//1-100 arasında bulunan, toplamı 100 eden ikişer adet sayıyı bulan program:

#include <stdio.h>

int isPrime(int n);
void writePrimes(int n);

int main(void) {
  writePrimes(100);

  return 0;
}

int isPrime(int n){
  // asal sayı kodunu buraya yazınız
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
      
    return 0;
    
    
  }
  return 1;
  
}


void writePrimes(int n){
  int primes[50];
  int j,firstPrime,secondPrime,i;

  for(j=2;j<n;j++){
    for(i=2;i<j;i++){
        if(isPrime(j) == 1){
          primes[j] = j;
        if(primes[j]+primes[i]==n){
          firstPrime = primes[j];
          secondPrime = primes[i];
          printf("%d + %d = %d\n",firstPrime,secondPrime,n);
        }
         
      }
       
       
    }
    
      
  }
   
  
}

