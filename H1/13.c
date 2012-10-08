/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от всички числа в интервала [0; 1000) делящи се на x и да се запише като първа стойност в масива. Да се намери сумата от всички числа в интервала [0;1000) деляща се на 2x и да се запише като втора стойност в масива. Аналогично да се намери сумата на всички числа делящи се на Nx за N в интервала [1;10] и да се запишат като елемент N-1 в масива. Масивът да се изведе на стандартния изход.
*/

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
