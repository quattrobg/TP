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
