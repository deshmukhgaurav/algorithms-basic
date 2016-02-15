#include <stdio.h>

int main(){
	int array[100], i, j, n, temp;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");

	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < n-1; i++){
		int min_index = i;
		for (j = i+1 ; j < n; j++){
			if(array[min_index] > array[j])
				min_index = j;
		}
		if(i != min_index && array[i] != array[min_index]){
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}
	}

	printf("Sorted list:");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}