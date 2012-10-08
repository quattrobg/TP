#include<stdio.h>
#include<math.h>

#define SIZE 10

int enterX();

void fillArr(float array[], int max);

void printArr(float array[], int max);

void bubbleSort(float array[], int max);

int main(){

	int x;
	float arr[SIZE];
	
	x = enterX();
	fillArr(arr, x);
	printArr(arr, x);	
	bubbleSort(arr, x);	
	printArr(arr, x);

	return 0;
}

int enterX(){
	int x;
	do{
		printf("Vuvedi 0<x<10 : ");
		scanf("%d", &x);
		getchar();
	}while((x <= 0) && (x >= 10));
	return x;
}

void fillArr(float array[], int max){
	int i;
	float j = 0.0;
	for(i=0; i<max; i++){
		array[i] = cos(j);
		j++;
	}
}

void printArr(float array[], int max){
	int i;
	for(i=0; i<max; i++){
		printf("%f\n", array[i]);
	}
}

void bubbleSort(float array[], int max){
	int i, c;
	float temp;
	for(i=0; i<max; i++){
		for( c = 0; c < max - 1; c++){
			if(array[c]>array[c+1]){
				temp = array[c+1];
				array[c+1] = array[c];
				array[c] = temp;
			}
		}
	}
}
