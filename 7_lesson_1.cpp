#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >

int main()
{
	/*
	while
	do while
	эти операторы рекомендуется использовать, когда количество повторений цикла неизвестно.
	В этом случае тело цикла должно повлиять на выход из такого цикла, иначе он будет бесконечен.
	
	while(условие)
	{
		тело цикла;
	}
	может не выполниться вообще
	цикл с предусловием
	do
	{
		тело цикла;
	}while(условие);
	%100 выполнится один раз 
	цикл с постусловием
	*/
		
	int counter = 0, sum = 0, value;
	printf("Enter value(0 - exit)\n");
	do
	{
		printf("Enter value: ");
		scanf("%d", &value);
		sum += value;
		counter++;
	}while(value != 0);
	printf("Sum = %d\nCount numbers =  %d\n", sum, counter);
	getchar();
	return 0;
}
