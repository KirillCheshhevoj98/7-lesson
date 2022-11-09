#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >

int main()
{
	/*
	while(x != 0)
	{
		ost = x % 10; - берем последнюю цифру
		x = x / 10; - обрезаем число на последнюю цифру
		цикл на обрезание на числа с конца
	}
	*/
	
	int value = 0, ost, counter = 0, tmp;
	
	/*
	 ost - для хранения цифр
	 x -копия введеннего числа
	*/
	
	printf("Enter value(value > 0): ");
	scanf("%d", &value);
	
	while(value <= 0)
	{
		printf("Invalid input, try again\n");
		printf("Enter value(value > 0): ");
		fflush(stdin); // очистка входного потока данных
		scanf("%d", &value);
	}
	
	tmp = value; // создаем копию числа
	
	do // алгоритм, как разобрать число на цифры
	{
		ost = tmp % 10; // берем последнюю цифру числа (435337), ost = 7;
		if(ost == 3) // если цифра равна 3
		{
			counter++;
		}
		tmp = tmp / 10; // обрезаем число на последнюю цифру (435337 -> 43533)
	} while(tmp != 0); // берем цифры и обрезаем пока не превратим число в 0
	printf("Number %d count 3 = %d", value, counter);
	getchar();
	return 0;
}
