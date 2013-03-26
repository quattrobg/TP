/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където x e интервала [0; +∞). Да се намерят първите 10 нечетни числа делители на x и да се запишат в масив. Масивът да се изведе на екрана и да се намерят простите числа в този масив.
*/

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
