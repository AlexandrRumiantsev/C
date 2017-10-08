//Калькулятор с операциями +-*/

#include <stdio.h>
main()
{
	char x;
	long int z,c,v;
	scanf("%d%c%d", &z,&x,&c);

	if(x='+')
	v=(z+c);

	if(x='-') 
	v=(z-c);

	if(x='/')
	v=(z/c);

	if(x='*') 
	v=(z*c);
	printf("%d\n",v);

	return 0;}