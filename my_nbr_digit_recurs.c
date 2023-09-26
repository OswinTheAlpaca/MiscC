#include <stdio.h>


  


extern int my_nbr_digit_recurs(int number, int base) {


	if (base == 0) {
	
	    return -1;


		}else{
		int ratio = number / base;
		
		
		if ( ratio == 0){
		
		return 1;
		}else{
		number = ratio;
	 	return 1 + my_nbr_digit_recurs(number, base);
	 	
		}
		
		
	}
}

	
int main() {	
	int number;
	number = 123456;
	int base;
	base = 10;
	
	

	printf("%d\n", my_nbr_digit_recurs(number, base));
	return 0;
	}
	
	
	
