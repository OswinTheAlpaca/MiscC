#include<stdio.h>

extern unsigned long my_fibo(unsigned long __n){



if (__n < 2){

    return __n;
    
      }else{
      	  
          return my_fibo(__n-1) + my_fibo(__n-2);
          
          }
          
          }
          
          
int main(){


long __n;
__n = 15;

printf("%ld\n", my_fibo(__n));

return 0;

}
