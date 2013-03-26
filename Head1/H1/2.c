/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери и изведе сумата на числата делящи се на 17 в интервал [x, y].
*/

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
