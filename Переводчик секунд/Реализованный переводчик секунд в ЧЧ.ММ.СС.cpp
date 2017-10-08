#include <stdio.h>


 //Ввести время в формате секунды  чч:мм:сс, перевести в чч:мм:сс 
//Исправленные предупреждения 1) Инициализация TimeForSecond 2) Замена scanf на scanf_s

int main() {
	int TimeForSecond=0, hours=3600, minute=60; 
	long int hh, mm, ss, ost1, ost2;
	printf("Enter time for second\n");
	scanf_s("%6d", &TimeForSecond);
	
	
	hh=TimeForSecond/hours, &hh;

ost1=TimeForSecond-(hh*hours), &ost1;
    mm=ost1/minute, &mm;




ost2=ost1-(mm*minute), &ost2;

ss=ost2, &ss;

	printf("Hours - %d\n Minute - %d\n Second - %d\n", hh,mm,ss);


	return 0;

}