#include <stdio.h>
int fact(int);
int main(){	int n,f;
	printf("enter a number=");
	scanf("%d", &n);
	f=fact(n);
	printf("factorial of %d is= %d", n, f);
	return 0;
}
int fact(int a){
	if(a==0)
	return 1;
	else
	return(a*fact(a-1));
}
