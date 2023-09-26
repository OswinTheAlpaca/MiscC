#include <stdio.h>
#include <unistd.h>

extern int my_alphabet(void){

	char ch;
	int i;
	i=0;

	
	
	for(ch='a'; ch<='z'; ch++){
		i++ ;
        	write(STDOUT_FILENO, &ch, 1);
        	
        }
        
        
        return i;
      	
	
}


int main(){
	
	printf("%d\n", my_alphabet());
	
	return 0;

}
