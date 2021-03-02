#include <stdio.h>
#include <math.h>
float square_root(float);
int main()
{ float sqrt,n;

	printf("enter the number:");
	scanf("%f", &n);
	sqrt=square_root(n);
	printf("square root =%.2f", sqrt);
}
float square_root(float x)
{
	float result;
	result=sqrt(x);
	return result;
}
