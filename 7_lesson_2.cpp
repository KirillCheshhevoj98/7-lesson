#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >

int main()
{
		
	int counter = 0, sum = 0, value;
	double average;
	printf("Enter value(negative number - exit)\n");
	
	printf("Enter value: ");
	scanf("%d", &value);
	while(value >= 0)
	{
		sum += value;
		counter++;
		printf("Enter value: ");
		scanf("%d", &value);
	}
	if(counter > 0)
	{
		average = (double)sum / counter;
		printf("Average value = %.2lf\n", average);
	}
	else
	{
		printf("Division by 0 ");	
	}	
	getchar();
	return 0;
}
