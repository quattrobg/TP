/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. Да се инициализира масив от 10 елемента. Да се намерят първите 10 стойности на функцията cos(x) в интервала [0; +∞), в които третата цифра след десетичната запетая е x. Пример при cos(1) = 0.540302306 третата цифра след десетичната запетая е 0. При cos(2) = -0.416146837 третата цифра след десетичната запетая е 6. Намерените стойности да се зададат като стойности на елементите в масива. Елементите на масива да се изведат на стандартния изход.
*/

#include <stdio.h>
#include <math.h>

#define SIZE 10

int enterX();

int thirdDig(float c);

void printArr(float array[]);

int main()
{
	int x, i, j = 0;
	float arr[SIZE], f;

	x = enterX();
	
	for(i=0; ;i++)
	{
		f = cos(i);
		if(thirdDig(f) == x) arr[j++] = f;
		if(j == SIZE) break;
	}
	
	printArr(arr);

	return 0;
}

int enterX(){
	int x;
	do{
		printf("Vuvedi 0<x<10 : ");
		scanf("%d", &x);
		getchar();
	}while((x < 0) && (x >= 10));
	return x;
}

int thirdDig(float c){
	int i, n;
	c *= 1000;
	n = (int) c;
	n = n%10;
	return n;
}

void printArr(float array[]){
	int i;
	for(i=0; i<SIZE; i++){
		printf("%d. = %f\n", i+1, array[i]);
	}
}
