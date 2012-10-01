#include<stdio.h>

#define SIZE 10

int enterX();

void findDivisors(int array[], int x, int n);

void findPrime(int array[]);

int main(){
	int x, arr[SIZE], n = 0;
	
	x = enterX();

	findDivisors(arr, x, n);

	findPrime(arr);

	return 0;
}

int enterX(){
	int x;
	do{
		printf("Enter 0<x<10 : ");
		scanf("%d", &x);
		getchar();
	}while(x <= 0);
	return x;
}

void findDivisors(int array[], int x, int n){
	int i;
	for(i=1; i<=x; i++){
		if(x%i == 0) 
			if(i%2 == 1){
				array[n++] = i;
				printf("%d\n", i);			
			}
		if(n == SIZE) break;
	}
}

void findPrime(int array[]){
	int i, j;
	for(i=0; i<SIZE; i++){
		for(j=2; j<=array[i]; j++){
			if(array[i]%j == 0) break;
		}
		if(j == array[i]) printf("This one is a prime number %d\n", array[i]);
	}
}
