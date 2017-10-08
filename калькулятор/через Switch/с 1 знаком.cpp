//Калькулятор с операциями +-*/

#include <stdio.h>
main()
{
	char x;
	long int z,c,v;
	scanf("%d%c%d", &z,&x,&c);

	  switch(x){
		case '+':  v=z+c;
	     break;
	    case '-':  v=z-c;
			 break;
	    case '*':  v=z*c;
			 break;
		case '/':  v=z/c;
			 break;
			 default: printf("Error");

	  }
	
	printf("%5d\n",v);

	return 0;}