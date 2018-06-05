#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>


void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

	start:
	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	������ � ���������� ��� �����. ����������, ��� ������, ����� ��������� ��� ������� ����� ���� �����. ����� ������� � ���� ���������.

		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("\n a = %d, b = %d\n", a, b);

		if ((pow(a, 2) + pow(b, 2)) > pow(a + b, 2))
		{
			printf("����� ��������� ������ �������� ����� ���� ����� \n");
		}

		else if (pow(a + b, 2) > (pow(a, 2) + pow(b, 2)))
		{
			printf("������� ����� ���� ����� ������ ����� ��������� \n");
		}
	}

	else if (n == 2)
	{
		//2.	���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, 
		//      �������� ���������� 2%,  ���� ���� �� 5 �� 10 ��� - 5%. ������ � ���������� �������� � ����, ������� �������� � ����� � �������.
		int salary = 0, year = 0, add = 0;

		printf("������� �������� = ");
		scanf("%d", &salary);

		printf("������� ���� ������ = ");
		scanf("%d", &year);

		if (year >= 2 && year <= 5)
		{
			add = (salary*0.02);

			printf("�������� ���������� 2 �������� �� �������� = %d\n", add);
		}

		else if (year >= 5 && year <= 10)
		{
			add = (salary*0.05);

			printf("�������� ���������� 5 ��������� �� �������� = %d\n", add);
		}

	}

	else if (n == 3)
	{
		//3.	������ � ���������� ��� �����, ������������� �������� � �������, � ������������� �������� ��� ���������.
		int a = 0, b = 0, c = 0;

		a = -500 + rand() % 1000;
		b = -500 + rand() % 1000;
		c = -500 + rand() % 1000;

		printf("\n a = %d, b = %d, c = %d\n", a, b, c);

		if (a >= 0 && b < 0 && c < 0)
		{
			a = pow(a, 2);
			b = b;
			c = c;

			printf("���� �������� ������������� �������� �� � �������, � ������������� ��������� ��� ��������� = %d, %d, %d\n", a, b, c);

		}

		else if (a < 0 && b >= 0 && c < 0)
		{
			a = a;
			b = pow(b, 2);
			c = c;

			printf("���� �������� ������������� �������� �� � �������, � ������������� ��������� ��� ��������� = %d, %d, %d\n", a, b, c);

		}
		else if (a < 0 && b < 0 && c >= 0)
		{
			a = a;
			b = b;
			c = pow(c, 2);

			printf("���� �������� ������������� �������� �� � �������, � ������������� ��������� ��� ��������� = %d, %d, %d\n", a, b, c);

		}

		else if (a < 0 && b < 0 && c < 0)
		{
			printf("���� �������� ������������� �������� ��� ���������\n");

		}

		else if (a >= 0 && b >= 0 && c >= 0)
		{
			a = pow(a, 2);
			b = pow(b, 2);
			c = pow(c, 2);

			printf("���� �������� ������������� �������� �� � ������� = %d, %d, %d\n", a, b, c);
		}


	}

	else if (n == 4)
	{
		//4.	���� ����������� �����. ����������, �������� �� ��� ������, ��� ������������ ������ 3.
		int a = 0;

		a = 1 + rand() % 1000;
		printf("\n a = %d\n", a);

		//printf("Enter a = \t");
		//scanf("%d", &a);

		if (a % 2 == 0 || a % 100 == 3)
		{
			printf("a �������� ������ ��� ������������ ������ 3\n");

		}

		else
		{
			printf("�� �������� ������ � �� ������������ ������ 3\n");
		}


	}

	else if (n == 5)
	{
		//5.	���������� ����� ����������� ������ ��������� �� ��������, ���� ������� ��������� �� ������� ��� 6% ������� ��� �� ��� ��� 8% �������. 
		//      � ���������� ������ ����� ������ � ���� ��������

		int sum = 0, year = 0, payment = 0;

		printf("������� ����� ������ = ");
		scanf("%d", &sum);

		printf("������� ���� �������� = ");
		scanf("%d", &year);

		if (year >= 1 && year <= 6)
		{
			payment = (sum + (sum*0.06)) / 12;

			printf("���� ������� ��������� �� �������, �� ����� ����������� ������ �������� ��� 6 ��������� ������� = %d\n", payment);
		}

		else if (year > 6 && year <= 12)
		{
			payment = (sum + (sum*0.08)) / 12;

			printf("���� ������� ��������� �� �������, �� ����� ����������� ������ �������� ��� 8 ��������� ������� = %d\n", payment);
		}
	}

	else if (n == 6)
	{
		//1.	���������, �������� �� ��� ���������� (������� 4) � �������� �� 2000 �� ����� ��� �� 2000 ����� ���. ������ � ������ 
		//      ��� � ������� ���, ������� ��������� � ���� �656 ��� ����� ��� � ����������.

		int year = 0;

		printf("������� ���\t");
		scanf("%d", &year);



		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && year > 0)
		{
			printf("year = %d\t ��� ����� ��� - ����������\n", year);
		}

		else if ((year % 4 && year % 100 != 0 || year % 400 == 0) && year < 0)
		{
			printf("year = %d\t ��� �� ����� ��� - ����������\n", year);
		}

		else if ((year % 4 != 0 && year % 100 == 0 || year % 400 != 0) && year > 0)
		{
			printf("year = %d\t ��� ����� ��� - �� ����������\n", year);
		}

		else if ((year % 4 != 0 && year % 100 == 0 || year % 400 != 0) && year < 0)
		{
			printf("year = %d\t ��� �� ����� ��� - �� ����������\n", year);
		}



	}

	else if (n == 7)
	{
		//2.	��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� ����� ������� ��������� 1000 �����.

		int sum = 0, total = 0;

		sum = 1 + rand() % 6000;
		printf("\n sum = %d\n", sum);

		if (sum > 1000)
		{
			total = sum - (sum*0.1);

			printf("��������� ������� � ������ ������ � 10 ��������� = %d\n ", total);
		}
		else if (sum < 1000)
		{
			total = sum;

			printf("��������� ������� ��� ������ � 10 ��������� = %d\n ", total);

		}

	}

	else if (n == 8)
	{
		//3.	�������� ��������� ���������� ���������� ���� ������������ (���� 100). ������ ������������ � ������������� ����������� ���� ��������.

		int weight = 0, height = 0, optimal = 0;
		char G;

		printf("������� ��� ����, ��� � ���  = \n");
		scanf("%d %d %c", &height, &weight, &G);


		if (G == 'M')
		{
			optimal = (height - 100)*0.9;

			printf("��������� ��� ��� ������ = %d\n", optimal);

			if (weight < optimal)
			{
				printf("����������\n");
			}

			else
			{
				printf("��������.\n");
			}
		}

		else if (G == 'F')
		{
			optimal = (height - 100)*0.85;

			printf("��������� ��� ��� ������ = %d\n", optimal);

			if (weight < optimal)
			{
				printf("����������.\n");
			}


			else
			{
				printf("��������.\n");
			}
		}
	}

	else if (n == 9)
	{
		//4.	1.	������ � ���������� ����� ������. ���������� ����� � ����������� �� ������ ������ � ������� ��������� (����� (3,4,5), ���� (6,7,8), ����� (9,10,11)  ���� (12,1,2))
		// 1. ����� 2. ���� 3. ����� 4. ����

		int mes = 0;

		printf("������ � ���������� ����� ������ = ");
		scanf("%d", &mes);

		switch (mes)
		{
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 2);
			printf("�����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("����\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;

		case 9:
		case 10:
		case 11:

		{
			
			SetConsoleTextAttribute(hConsole, 14);
			printf("�����\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;

		case 12:
		case 1:
		case 2:
		{

			SetConsoleTextAttribute(hConsole, 1);
			printf("����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;


		}
		
	}


	else if (n==10)
	{
		//
	}
	goto start;
}
