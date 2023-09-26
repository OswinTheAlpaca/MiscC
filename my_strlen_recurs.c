#include <stdio.h>

extern int my_strlen_recurs(char const str[]){
	static int count=0;


	if (*str != '\0') {

	return 1 + my_strlen_recurs(++str);
	
	} else {

	return count;	

	}
	
}
	
	

int main(){

	int n;
	char const str[n];
	
	printf("%d\n", my_strlen_recurs(str));

	return 0;
}
