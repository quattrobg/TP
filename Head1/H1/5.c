/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе целочислено число, x, където 0 < x < 10. Да се инициализират масива от 10 елемента. Стойностите на елементите на масива да са равни на косинус от индекса на елемента. Да се изведе масивът, след което да се сортира в низходящ ред и отново да се изведе.
*/

#include <stdio.h>
#include <math.h>

void sort(double *arr, int n);

const size = 10;

int main(){
system("clear");

int x;
double arr[size];

do{
printf("Enter 0<x<10 : ");
scanf("%d", &x);
}while(x<0 || x>10);

int i;
for(i=0; i<10; i++){
arr[i] = cos(i);
}

sort(arr, size);

for(i=0; i<10; i++){
printf("%.4f \n", arr[i]);
}

return 0;
}

void sort(double *arr, int n){
int i,j;
double t;
for(i=1; i != n; i++){
for(j=0; j != n-1; j++){
if(arr[i] > arr[j]){
t = arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
}


*/

#include<stdio.h>
#include<math.h>

#define SIZE 10

int enterX();

void fillArr(float array[], int max);

void printArr(float array[], int max);

void bubbleSort(float array[], int max);

int main(){

	int x;
	float arr[SIZE];
	
	x = enterX();
	fillArr(arr, x);
	printArr(arr, x);	
	bubbleSort(arr, x);	
	printArr(arr, x);

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

void fillArr(float array[], int max){
	int i;
	float j = 0.0;
	for(i=0; i<max; i++){
		array[i] = cos(j);
		j++;
	}
}

void printArr(float array[], int max){
	int i;
	for(i=0; i<max; i++){
		printf("%f\n", array[i]);
	}
}

void bubbleSort(float array[], int max){
	int i, c;
	float temp;
	for(i=0; i<max; i++){
		for( c = 0; c < max - 1; c++){
			if(array[c]>array[c+1]){
				temp = array[c+1];
				array[c+1] = array[c];
				array[c] = temp;
			}
		}
	}
}
