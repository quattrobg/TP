#include<stdio.h>

int enterY(int x);

void findPrime(int i);

int main(){

	int x, y, i, j;
	
	printf("Vuvedi X : ");
	scanf("%d", &x);
	getchar();
	
	y = enterY(x);

	for(i=x; i<=y; i++){
		if(i%10 == 3) findPrime(i);
	}

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

void findPrime(int i){
	int j;
	for(j=2; j<=i; j++){
		if(i%j == 0) break;
	}
	if(j == i) printf("%d", i);
}
