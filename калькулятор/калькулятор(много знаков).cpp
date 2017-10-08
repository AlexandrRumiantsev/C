#include <stdio.h>


int main()
{

	double a,b;
	char z1,z2;

	puts("Enter formula");
	for(a=0.0, z1='+'; z1!='=';z1=z2){
	scanf("%lg %c", &b,&z2);

	switch(z1)
	{
	case '+': a+=b; break;
		case '-': a-=b; break;
			case '*': a*=b; break;
				case '/': a/=b; break;
				default: printf("ERROR!\n"); break;}
	}

	printf("%lg\n",a);


}