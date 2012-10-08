/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 100 целочислени елемента. Стойностите на елементите да са случайни числа в интервала [0, 100). Елементите на масива да се подредят така, че числата завършващи на x да са в началото.
*/

#include <stdio.h>
#include <math.h>

const size = 100;

void sort(int *arr, int n, int x);

int main(){
system("clear");
srand(time(NULL));

int x,arr[size];
do{
printf("Enter 0<x<10 : ");
scanf("%d", &x);
}while(x<=0 || x>10);

int i;
for(i=0; i<size; i++){
arr[i] = rand()%100;
}

sort(arr, size, x);

for(i=0; i<size; i++){
printf("%d \n", arr[i]);
}

return 0;
}

void sort(int *arr, int n, int x){
int i,j,t;
for(i=1; i != n; i++){
for(j=0; j != n-1; j++){
if( (arr[i]%10 == x) && (arr[j]%10 != x) ){
t = arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
}


*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

int enterX();

void printArr(int array[]);

int main(){
	int arr[SIZE], temp, bot = 0, top = 99;
	int i;
	int x = enterX();

	srand(time(NULL));

	for(i=0; i<SIZE; i++){
		temp = rand()%100;
		if(temp%10 == x){
			arr[bot++] = temp;
		}else{
			arr[top--] = temp;
		}
	};

	printArr(arr);

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

void printArr(int array[]){
	int i;
	for(i=0; i<SIZE; i++){
		printf("%d\n", array[i]);
	}
}
