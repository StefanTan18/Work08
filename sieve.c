#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime) {
  
  int len = targetPrime * log(targetPrime) * 1.15;
  char* primes = malloc(len);
  int target = 1;
  int counter = 0;
  
  for (int i = 0; i < len; i++) {
    primes[i] = 1;
  }
  
  while (counter < targetPrime) {
    target++;
    if(primes[target]){
      for (int j = target*2; j < len; j += target)
	primes[j] = 0;
      counter++;
    }
  }
 
  free(primes);
  return target;
  
}
	


  
  


