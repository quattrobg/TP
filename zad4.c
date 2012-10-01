#include<stdio.h>

int enterY(int x);

void findFib(int x, int y);

int main(){

	int x, y;
	
	printf("Vuvedi X : ");
	scanf("%d", &x);
	getchar();

	y = enterY(x);
		
	findFib(x, y);

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

void findFib(int x, int y){
	int i, f = 0, s = 1, fib;
	for(i=0; i <= y; i++){
		if(i <= 1){
			fib = i;
		}else{
			fib = f + s;
			f = s;
			s = fib;
		}
		if((fib >= x) && (fib <= y)) printf("%d \n", fib);
	}
}
