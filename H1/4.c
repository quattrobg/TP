/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].
*/

#include <stdio.h>

int fib(int x);

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
for(i=x; i<=y; i++){
if( fib(i)>=x && fib(i)<=y ){
printf("%d \n", fib(i));
}
else{
break;
}
}

return 0;
}

int fib(int x){
if(x == 0){
return 0;
}
else{
if(x == 1 || x == 2){
return 1;
}
else{
return ( fib(x-1) + fib(x-2) );
}
}
}


*/

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
