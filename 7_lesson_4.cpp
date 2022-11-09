#include<stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h >
#include<locale.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL,"rus");
	
	int score1 = 0, score2 = 0, menu1, menu2, fExit = 1; 
	/*
	переменная флаг, для выхода из программы 
	fExit
	1 - надо продолжать работать;
	0 - завершить цикл;
	*/
	
	do
	{
		printf("%d:%d\n", score1, score2);
		printf("1. Команда1\n");
		printf("2. Команда2\n");
		printf("3. Завершение матча\n");
		printf("Введите номер пункта меню: ");
		scanf("%d", &menu1);
		fflush(stdin);
		
		switch(menu1)
		{
			case 1:
				{
					printf("Выберите количество очков для команды1\n");
					printf("1. одно очко\n");
					printf("2. два очка\n");
					printf("3. три очка\n");
					scanf("%d", &menu2);
					fflush(stdin);
					
					switch(menu2)
					{
						case 1:
							score1 = score1 + 1;
					    break;	
					    case 2:
					    	score1 = score1 + 2;
					    break;
					    case 3:
					    	score1 = score1 + 3;
					    break;
					    default:
					    	printf("Некорректный выбор количества очков\n");
					    break;
					}
				}
			break;
			
			case 2:
				{
					printf("Выберите количество очков для команды2\n");
					printf("1. одно очко\n");
					printf("2. два очка\n");
					printf("3. три очка\n");
					scanf("%d", &menu2);
					fflush(stdin);
					
					switch(menu2)
					{
						case 1:
							score2 = score2 + 1;
					    break;	
					    case 2:
					    	score2 = score2 + 2;
					    break;
					    case 3:
					    	score2 = score2 + 3;
					    break;
					    default:
					    	printf("Некорректный выбор количества очков\n");
					    break;
					}
				}
			break;
			
			case 3:
				{
					if(score1 == score2)
					{
						printf("Счёт равный, назначено дополнительное время...\n");
					}
					else
					{
						fExit = 0;
						if(score1 > score2)
						{
							printf("Победила команда1\n");
						}
						else
						{
							printf("Победила команда2");
						}
					}
				}
			break;
			
			default:
				{
					printf("Некорректный ввод\n");
				}
			break;
		}
		system("pause");
		system("cls");
		
	}while(fExit == 1);
	
	return 0;
}
