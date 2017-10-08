#include <stdio.h>
// ¬вести две даты в формате дд.мм.гггг, напечатать знак сравнени€ между ними 
int main()
{

long int hh,mm,ss,hh1,mm1,ss1,o1,o2;

scanf("%2d:%2d:%2d", &hh,&mm,&ss);
scanf("%2d:%2d:%2d", &hh1,&mm1,&ss1);
o1=(hh*100)+(mm*10)+(ss*1);
o2=(hh1*100)+(mm1*10)+(ss1*1);

if(o1==o2)
	printf("%2d:%2d:%2d=%2d:%2d:%2d\n",hh,mm,ss,hh1,mm1,ss1);
if(o1>o2)
	printf("%2d:%2d:%2d>%2d:%2d:%2d\n",hh,mm,ss,hh1,mm1,ss1);
if(o1<o2)
	printf("%2d:%2d:%2d<%2d:%2d:%2d\n",hh,mm,ss,hh1,mm1,ss1);

return 0;
}