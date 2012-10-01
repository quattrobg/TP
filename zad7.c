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
