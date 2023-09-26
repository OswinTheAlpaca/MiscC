#include<stdio.h>


extern void my_eratosthenes(int n){

if (n > 1000)

{ 

	printf("\n");
	
	} else {


int i,j;


    int primes[n+1];
    

    for(i = 2; i<=n; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= n)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<n; j++)
            {
                if (primes[i]*j > n)
                    break;
                else
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=n; i++)
    {
        if (primes[i]!=0)
            printf("%d\n",primes[i]);
    }
    }
    
}



int main(){
	int n = 2000;
	my_eratosthenes(n);

	return 0;

}
