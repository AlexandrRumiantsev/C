#include <stdio.h>

int main(){
	char name[20],fam[20];
	printf("Enter your name\n");
	scanf("%s", name);
	printf("Enter your Family\n");
	scanf("%s", fam);
	printf("Hello, %s  %s\n",name,fam);

	return 0;
}
