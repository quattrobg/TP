#include<stdio.h>

int enterY(int x);

int sumOdd(int x, int y);

int main(){

	int x, y;
	
	printf("Vuvedi X : ");
	scanf("%d", &x);
	getchar();

	y = enterY(x);
	
	printf("Rezultat : %d\n", sumOdd(x, y));

	return 0;
}

int enterY(int x){
	int y;
	do{
		printf("Vuvedi Y>X : ");
		scanf("%d", &y);
		getchar();
	}while(x>=y);
	return y;
}

int sumOdd(int x, int y){
	int i, sum = 0;
	for(i=x; i<=y; i++){
		if(i%2==1) sum+=i;
	}
	return sum;
}


