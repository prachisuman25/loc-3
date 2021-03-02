#include <stdio.h>
int palindrome(int );
int main()
{
	int n,r;
	printf("enter a number=");
	scanf("%d", &n);
	r=palindrome(n);
	if(r==n)
	printf("it is a palindrome");
	else 
	printf("not a palindrome");
	return 0;
}
int palindrome(int num)
{
 static int rm=0;
	if(num==0)
	return rm;
	rm=(rm*10)+(num%10);
	return palindrome(num/10);
}
