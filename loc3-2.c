#include <stdio.h>
int fact(int);
int main()
{ int n, f;
	printf("enter a number:");
	scanf("%d", &n);
	f=fact(n);
	printf("factorial = %d", f);
}
int fact(int x)
{ int d;
int result=1;
while(x>0)
{d=x%10;
result=result*d;
x--;}
return result;}
