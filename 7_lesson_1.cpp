#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >

int main()
{
	/*
	while
	do while
	��� ��������� ������������� ������������, ����� ���������� ���������� ����� ����������.
	� ���� ������ ���� ����� ������ �������� �� ����� �� ������ �����, ����� �� ����� ����������.
	
	while(�������)
	{
		���� �����;
	}
	����� �� ����������� ������
	���� � ������������
	do
	{
		���� �����;
	}while(�������);
	%100 ���������� ���� ��� 
	���� � ������������
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
