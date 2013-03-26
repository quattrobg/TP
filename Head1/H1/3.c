/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички прости числа завършващи на 3 в интервал [x,y].
*/

#include <stdio.h>

int prime(int x);
int end_three(int x);

int main(){
system("clear");

int x,y;

printf("Enter x : ");
scanf("%d", &x);
do{
// system("clear");
printf("Enter y>x : ");
scanf("%d", &y);
}while(x>=y);

int i;
for(i=x; i<y; i++){
if( prime(i) ){
if( end_three(i) ){
printf("%d \n", i);
}
}
}

return 0;
}

int prime(int x){
int i;
for (i=2; i<x; i++)
    {
      if (x%i == 0 && i != x)
        return 0;
    }
    return 1;
}

int end_three(int x){
if( x%10 == 3 ){
return 1;
}
return 0;
}


*/

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
