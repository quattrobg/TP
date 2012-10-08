#include<stdio.h>

#define SIZE 10

int enterX();

void findFib(int x, int array[]);

void printArr(int array[]);


int main(){

	int x, arr[SIZE];
	
	x = enterX();

	findFib(x, arr);

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

void findFib(int x, int array[]){
	int i, f = 0, s = 1, fib, n = 0;
	for(i=0; ; i++){
		if(i <= 1){
			fib = i;
		}else{
			fib = f + s;
			f = s;
			s = fib;
		}
		if(fib%10 == x) array[n++] = fib;
		if(n == SIZE) break;
	}
}
