#include <stdio.h>
#include <locale.h>

 //������ ����� � ������� �������  ��:��:��, ��������� � ��:��:�� 
//������������ �������������� 1) ������������� TimeForSecond 2) ������ scanf �� scanf_s

int main() {
		
	int TimeForSecond=0, hours=3600, minute=60; 
	long int hh, mm, ss, ost1, ost2;
	 setlocale(LC_CTYPE, "rus"); 
	printf("������� ����� � ��������:\n");
	scanf_s("%6d", &TimeForSecond);
	
	
	
	hh=TimeForSecond/hours, &hh;

ost1=TimeForSecond-(hh*hours), &ost1;
    mm=ost1/minute, &mm;




ost2=ost1-(mm*minute), &ost2;

ss=ost2, &ss;
    printf("� ����� %d ������:\n",TimeForSecond);
	printf(" %d �����\n  %d �����\n  %d ������\n", hh,mm,ss);


	return 0;

}