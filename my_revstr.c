#include<stdio.h>
#include<string.h>

extern void my_revstr(char str[]){

	char c;
	int i, n;
	n = strlen(str);
	for (i = 0; i <n/2; i++){
		c = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = c;

	}
	
	
	}
	


int main(){

	char str[6] = "Hello";
	

	my_revstr(str);
	printf("%s\n", str);
	
	return 0;
	
}
