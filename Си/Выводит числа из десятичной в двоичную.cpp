#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int dec=32, bin=0, j;

for(j=0; dec>0; j++)
{
bin+=(dec%2)*pow(10.0,j);
dec/=2;
}

int a=bin;

int des=8;

for(j=0; des>0; j++)
{
bin+=(des%2)*pow(10.0,j);
des/=2;
}

int b=bin;

printf("P=%d\n", a*b);
printf("C=%d\n", a/b);
system("pause");
return 0;
}