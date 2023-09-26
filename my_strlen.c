#include <stdio.h>

extern int my_strlen(char const str[]){

	const char* c;
	int i;
	i = 0;
	
	
	
	for (c = &str[0]; *c != '\0'; c++){
		
		i++;
	
		
	

	}
	
	return i;

}


int main(){
	int n;
	char const str[n];
	
	printf("%d\n", my_strlen(str));

	return 0;
}
