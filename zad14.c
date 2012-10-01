#include<stdio.h>

#define SIZE 10

int enterX();

int findPrime(int i);

void printArr(int array[]);


int main(){

	int x, y,arr[SIZE], i, n = 0;
	
	x = enterX();

	for(i=0; ; i++){
		y = findPrime(i);
		if(y%10 == x) arr[n++] = y;
		if(n == SIZE) break;
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

void printArr(int array[]){
	int i;
	for(i=0; i<SIZE; i++){
		printf("%dst = %d\n", i+1, array[i]);
	}
}

int findPrime(int i){
	int j;
	for(j=2; j<=i; j++){
		if(i%j == 0) break;
	}
	if(j == i) return i;
	else return 0;
}
