/*
Технологично училище Електронни системи - http://http://www.elsys-bg.org/
11б клас
№18
Иван Пейчинов
Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери числото пи чрез следното развитие в ред:
4-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 4/N<x. Получената стойност за пи да се изведе на екрана.
*/

#include <stdio.h>

int main()
{
	float x, p = 4.0;
	int i, c = 3, s;
	
	do
	{
		printf("Vuvedi X : ");
		scanf("%d", &x);
		getchar();
	}while((x <= 0) && (x >= 1));
	
	for(i = 0; i < 10; i++)
	{
		if(i % 2 == 0)
			p -= p/c;
		else
			p += p/c;
		if(4/c < x) break;
		c += 2;
	}
	
	printf("p = %f\n", p);
	
	return 0;
}
