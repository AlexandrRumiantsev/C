#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//������ �� ���������� �������



#define N 10

int main()
{
	int a[N];
	int i,x;

// ���������� �������

	for(i=0;i<N;++i)
		a[i] = rand();



	srand((unsigned)time(NULL)); rand();


//���������� �������

for(i=0;i<N;++i)

//������ �������

for(i=0; i<N; ++i)
	printf("%d\n", a[i]);

//============================================================================================


//�����
printf("Enter x: ");
scanf("%d", &x);

//�������� �����

for(i=0; i<N; ++i)
if(a[i]==x){

	printf("a[%d]=%d\n",i,x);

break;
}
if(i==N)
	printf("%d not found\n",x);

}