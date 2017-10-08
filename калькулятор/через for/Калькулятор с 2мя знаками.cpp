//Калькулятор с операциями +-*/

#include <stdio.h>
main()
{
	char x, b;
	long int z,c,v,n,m;
	scanf("%d %c %d %c %d", &z,&x,&c,&b,&n);

	if(x='+')
	v=(z+c);
	if(x='-') 
	v=(z-c);
	if(x='/')
	v=(z/c);
	if(x='*') 
	v=(z*c);


	
	if(b='+')
	m=(v+n);
	if(b='-') 
	m=(v-n);
	if(b='/')
	m=(v/n);
	if(b='*') 
	m=(v*n);


	printf("%d\n",m);

	return 0;}