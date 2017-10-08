#include <stdio.h>
#include <locale.h>

 //Ввести время в формате секунды  чч:мм:сс, перевести в чч:мм:сс 
//Исправленные предупреждения 1) Инициализация TimeForSecond 2) Замена scanf на scanf_s

int main() {
		
	int TimeForSecond=0, hours=3600, minute=60; 
	long int hh, mm, ss, ost1, ost2;
	 setlocale(LC_CTYPE, "rus"); 
	printf("Введите число в секундах:\n");
	scanf_s("%6d", &TimeForSecond);
	
	
	
	hh=TimeForSecond/hours, &hh;

ost1=TimeForSecond-(hh*hours), &ost1;
    mm=ost1/minute, &mm;




ost2=ost1-(mm*minute), &ost2;

ss=ost2, &ss;
    printf("В числе %d секунд:\n",TimeForSecond);
	printf(" %d Часов\n  %d Минут\n  %d Секунд\n", hh,mm,ss);


	return 0;

}