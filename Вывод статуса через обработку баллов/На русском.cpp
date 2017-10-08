#include <stdio.h>
#include <locale.h>
//Введите экзаменационные оценки студента по 3 предметам и напечатайте его статус:
//«отличник», «хорошист», «троечник»


int main()
{
	int z,x,c,v;
	setlocale(LC_CTYPE, "rus"); 
	printf("Введите отметки по трём предметам, что бы узнать статус\n");
	scanf_s("%1d,%1d,%1d",&z,&x,&c);
	v=z+x+c; 
	if(v>13)
		printf("Отличник\n");
    if(v<13)
		printf("Хорошист\n");
	if(v<10)
		printf("Троечник\n");

	return 0;
}