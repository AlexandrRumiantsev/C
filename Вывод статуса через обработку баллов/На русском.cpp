#include <stdio.h>
#include <locale.h>
//������� ��������������� ������ �������� �� 3 ��������� � ����������� ��� ������:
//���������, ���������, ���������


int main()
{
	int z,x,c,v;
	setlocale(LC_CTYPE, "rus"); 
	printf("������� ������� �� ��� ���������, ��� �� ������ ������\n");
	scanf_s("%1d,%1d,%1d",&z,&x,&c);
	v=z+x+c; 
	if(v>13)
		printf("��������\n");
    if(v<13)
		printf("��������\n");
	if(v<10)
		printf("��������\n");

	return 0;
}