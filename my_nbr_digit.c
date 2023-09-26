#include <stdio.h>

  


extern int my_nbr_digit(int number, int base) {

	
	int i;
  	i = 0;
  
	  if (base == 0){
	  
	   return i = -1;
	   

	  } else {  
	  
	  if (number == 0){
	  
	  return i = 1;
	  
	  } else {
	  
	    while(number > 0){
	    number = number / base;
	    i++; 
	      
	    }
	   
	    return i;
	  }

	  
	  }
	  
	  }
	  

int main() {	
	int number;
	int base;
	number = 123456;
	base = 10;
	
	printf("%d\n", my_nbr_digit(number, base));
	return 0;
	}

