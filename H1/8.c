#include<stdio.h>

#define MAX 10

int main()
{
	int x, i, c = 0, f = 0, s = 1, a, arr[MAX];
	
	do
	{
		printf("Vuvedi X : ");
		scanf("%d", &x);
		getchar();
	}while((x < 0) && (x >= 10));
	
	for(i=0; ; i++)
	{
		if(i <= 1)
		{
			a = i;
		}else{
			a = f + s;
			f = s;
			s = a;
		}
		if(a % x == 0) arr[c++] = a;
		if(c == MAX) break;
	}
	
	for(i = 0; i < MAX; i++)
	{
		printf("%d. = %d\n", i, arr[i]);
	}
	
	return 0;
}
