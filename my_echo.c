#include <stdio.h>
#include<string.h>
#include "my_putchar.h"




extern void my_echo(char const str[]){

	const char* c;
	
	for (c = &str[0]; *c != '\0'; c++){
	
		my_putchar(*c);
	


	}

	}
	


int main(){
	
	char const str[13] = "Hello friends";

	my_echo(str);
	
	return 0;
	
}

