/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото число на Фибоначи в интервала [0; +∞) завършващо на x и да се запише като първи елемент в масива. Да се намери второто число на Фибоначи в интервала [0; +∞) завършващо на x и да се запише като втори елемент в масива. Аналогично да се намерят първите N прости числа в интервала [0; +∞) и да се запишат като елемент N в масива. Масивът да се изведе на стандартния изход.
*/

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
