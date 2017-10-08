#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//Массив со случайными числами



#define N 10

int main()
{
	int a[N];
	int i,x;

// Заполнение массива

	for(i=0;i<N;++i)
		a[i] = rand();



	srand((unsigned)time(NULL)); rand();


//Заполнение массива

for(i=0;i<N;++i)

//Печать массива

for(i=0; i<N; ++i)
	printf("%d\n", a[i]);

//============================================================================================


//Поиск
printf("Enter x: ");
scanf("%d", &x);

//Линейный поиск

for(i=0; i<N; ++i)
if(a[i]==x){

	printf("a[%d]=%d\n",i,x);

break;
}
if(i==N)
	printf("%d not found\n",x);

}