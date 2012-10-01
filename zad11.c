#include<stdio.h>
#include<math.h>

#define MAX 10

int main()
{
	int i, x, z, a , b;
	float arr[MAX], sum = 0.0;
	
	do
	{
		printf("Vuvedi X : ");
		scanf("%d", &x);
		getchar();
	}while((x <= 0) && (x >= 1));
	
	for(i=0; i<MAX; i++)
	{
		sum = 0.0;
		a = i*x;
		b = (i+1)*x;
		for(z=a; z<b; z++)
		{
			sum += cos(z);
		}
		arr[i] = sum;
	}
	
	for(i = 0; i < MAX; i++)
	{
		printf("%d. = %f\n", i, arr[i]);
	}
	
	return 0;
}
