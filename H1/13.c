#include<stdio.h>

#define SIZE 10

int enterX();

int sumN(int x);

void printArr(int array[]);

int main(){
	int x, arr[SIZE], i;
	
	x = enterX();

	for(i=1; i<=SIZE; i++){
		arr[i-1] = sumN(x*i);
	}

	printArr(arr);

	return 0;
}

int enterX(){
	int x;
	do{
		printf("Enter 0<x<10 : ");
		scanf("%d", &x);
		getchar();
	}while((x <= 0) && (x >= 10));
	return x;
}

int sumN(int x){
	int i, sum = 0;
	for(i=0; i<1000; i++){
		if(i%x == 0) sum+=i;
	}
	return sum;
}

void printArr(int array[]){
	int i;
	for(i=0; i<SIZE; i++){
		printf("Sum of numbers div by %dx = %d\n", i+1, array[i]);
	}
}
