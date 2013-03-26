/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото просто число в интервала [0; +∞) завършващо на x и да се запише като първи елемент в масива. Да се намери второто просто число в интервала [0;  +∞) завършващо на x и да се запише като втори елемент в масива. Аналогично да се намерят първите N прости числа в интервала [0;  +∞) и да се запишат като елемент N в масива. Масивът да се изведе на стандартния изход.
*/

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
