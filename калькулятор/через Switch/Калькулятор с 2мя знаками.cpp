//Калькулятор с операциями +-*/

#include <stdio.h>
main()
{
	char x,n;
	long int z,c,v,m,a;
	scanf("%d%c%d%c%d", &z,&x,&c,&n,&m);

	  switch(x){
		case '+':  v=z+c;
	     break;
	    case '-':  v=z-c;
			 break;
	    case '*':  v=z*c;
			 break;
		case '/':  v=z/c;
			 break;
		default: printf("Error");}

c=v;

 switch(n){
		case '+':  a=c+m;
	     break;
	    case '-':  a=c-m;
			 break;
	    case '*':  a=c*m;
			 break;
		case '/':  a=c/m;
			 break;
			 default: printf("Error"); }
	
	printf("%5d\n",a);

	return 0;}