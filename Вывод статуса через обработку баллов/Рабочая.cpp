#include <stdio.h>

//������� ��������������� ������ �������� �� 3 ��������� � ����������� ��� ������:
//���������, ���������, ���������


int main()
{
	int z,x,c,v;
	scanf_s("%1d%1d%1d",&z,&x,&c);
	v=z+x+c; 
	if(v>13)
		printf("Otlichnik\n");
    if(v<13)
		printf("Horoshist\n");
	if(v<8)
		printf("Dvoechnik\n");

	return 0;
}