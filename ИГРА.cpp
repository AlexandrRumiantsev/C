#include <stdio.h>



int main()
{

	int a=500;
	int z,z1;


	printf("Enter Number\n");

	  for(;a>0;){

        scanf("%d",&z);
	     z1=a-z;
	     a=z1;
	        
          if(a==0)
			  printf("win\n");

	      if(a<0)
		      printf("Lose\n");

	       if(a>0)
			   printf("ENTER MORE NUMBER\n");
		 

	  }
	  



}