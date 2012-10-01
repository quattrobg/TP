#include<stdio.h>

int enterY(int x);

int sumSt(int x, int y);

int main(){

	int x, y;
	
	printf("Vuvedi X : ");
	scanf("%d", &x);
	getchar();
	
	y = enterY(x);
	
	printf("Rezultat : %d\n", sumSt(x, y));

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

int sumSt(int x, int y){
	int i, sum = 0;
	for(i=x; i<=y; i++){
		if(i%17==0) sum+=i;
	}
	return sum;
}
