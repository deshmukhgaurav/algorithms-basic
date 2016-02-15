#include <stdio.h>

int main(){
	int array[100], i, j, n, temp;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");

	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (i = 1; i < n; i++){
		temp = array[i];
		j = i - 1;
		while(j >= 0 && temp < array[j]){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}

	printf("Sorted list:");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}