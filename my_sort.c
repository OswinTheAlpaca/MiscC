#include<stdio.h>

extern void my_sort(int arr[], unsigned int length){
	
	unsigned int i, j, a;
	
	for (i = 0; i < length; ++i){
	
		for (j = i + 1; j < length; ++j){
			
			if (arr[i] > arr[j]){
				
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			
				}
		
			}
		

		}


	for (i = 0; i < length; ++i){
		printf("%d", arr[i]);
		
		}
	printf("\n");
}




int main(){
	int array[5] = {1, 5, 4, 2, 3};
	my_sort(array, 5);
	

	return 0;

}
