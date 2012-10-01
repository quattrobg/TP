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
