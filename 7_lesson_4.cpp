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
	���������� ����, ��� ������ �� ��������� 
	fExit
	1 - ���� ���������� ��������;
	0 - ��������� ����;
	*/
	
	do
	{
		printf("%d:%d\n", score1, score2);
		printf("1. �������1\n");
		printf("2. �������2\n");
		printf("3. ���������� �����\n");
		printf("������� ����� ������ ����: ");
		scanf("%d", &menu1);
		fflush(stdin);
		
		switch(menu1)
		{
			case 1:
				{
					printf("�������� ���������� ����� ��� �������1\n");
					printf("1. ���� ����\n");
					printf("2. ��� ����\n");
					printf("3. ��� ����\n");
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
					    	printf("������������ ����� ���������� �����\n");
					    break;
					}
				}
			break;
			
			case 2:
				{
					printf("�������� ���������� ����� ��� �������2\n");
					printf("1. ���� ����\n");
					printf("2. ��� ����\n");
					printf("3. ��� ����\n");
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
					    	printf("������������ ����� ���������� �����\n");
					    break;
					}
				}
			break;
			
			case 3:
				{
					if(score1 == score2)
					{
						printf("���� ������, ��������� �������������� �����...\n");
					}
					else
					{
						fExit = 0;
						if(score1 > score2)
						{
							printf("�������� �������1\n");
						}
						else
						{
							printf("�������� �������2");
						}
					}
				}
			break;
			
			default:
				{
					printf("������������ ����\n");
				}
			break;
		}
		system("pause");
		system("cls");
		
	}while(fExit == 1);
	
	return 0;
}
