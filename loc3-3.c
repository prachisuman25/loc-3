#include  <stdio.h>
int gcd(int, int);
int lcm(int,int);
int main()
{	int n,m,GCD,LCM;
	printf("enter two numbers=");
	scanf("%d %d", &n, &m);
	GCD=gcd(n,m);
	printf("GCD=%d", GCD);
	LCM=lcm(n,m);
	printf("\nLCM=%d", LCM);
	return 0;
}
int gcd(int x, int y)
{
	if(x>y)
{	if (x%y==0)
	return y;
	else
	return gcd(y,(x%y));
}
	else
	{if (y%x==0)
	return x;
	else
	return gcd(x,(y%x));
	}
}	
int lcm(int a, int b){
	static int s=1;
	if(s%a==0 && s%b==0)
	return s;
	else
	{s++;
	lcm(a,b);
	return s;}
}
