#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >

int main()
{
	/*
	while(x != 0)
	{
		ost = x % 10; - ����� ��������� �����
		x = x / 10; - �������� ����� �� ��������� �����
		���� �� ��������� �� ����� � �����
	}
	*/
	
	int value = 0, ost, counter = 0, tmp;
	
	/*
	 ost - ��� �������� ����
	 x -����� ���������� �����
	*/
	
	printf("Enter value(value > 0): ");
	scanf("%d", &value);
	
	while(value <= 0)
	{
		printf("Invalid input, try again\n");
		printf("Enter value(value > 0): ");
		fflush(stdin); // ������� �������� ������ ������
		scanf("%d", &value);
	}
	
	tmp = value; // ������� ����� �����
	
	do // ��������, ��� ��������� ����� �� �����
	{
		ost = tmp % 10; // ����� ��������� ����� ����� (435337), ost = 7;
		if(ost == 3) // ���� ����� ����� 3
		{
			counter++;
		}
		tmp = tmp / 10; // �������� ����� �� ��������� ����� (435337 -> 43533)
	} while(tmp != 0); // ����� ����� � �������� ���� �� ��������� ����� � 0
	printf("Number %d count 3 = %d", value, counter);
	getchar();
	return 0;
}
