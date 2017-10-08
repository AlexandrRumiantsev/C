#include <stdio.h>
int main()
{
	int a,b,c; //c=a+b
	int N, i; 
	printf("Enter N=");
	scanf("%d",&N);
	a=b=1;
	if(N==1)
	printf("%d %d",a,b);
	else
	printf("%d ",a);
	for(i=2; i<N; ++i)
	{c=a+b;
	printf("%d ",a);
	a=b; b=c;
	}
	printf("\n");
}