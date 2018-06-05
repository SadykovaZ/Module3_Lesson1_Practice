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
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	Ввести с клавиатуры два числа. Определить, что больше, сумма квадратов или квадрат суммы этих чисел. Ответ вывести в виде сообщения.

		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("\n a = %d, b = %d\n", a, b);

		if ((pow(a, 2) + pow(b, 2)) > pow(a + b, 2))
		{
			printf("сумма квадратов больше квадрата суммы этих чисел \n");
		}

		else if (pow(a + b, 2) > (pow(a, 2) + pow(b, 2)))
		{
			printf("квадрат суммы этих чисел больше суммы квадратов \n");
		}
	}

	else if (n == 2)
	{
		//2.	Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, 
		//      надбавка составляет 2%,  если стаж от 5 до 10 лет - 5%. Ввести с клавиатуры зарплату и стаж, вывести надбавку и сумму к выплате.
		int salary = 0, year = 0, add = 0;

		printf("Введите зарплату = ");
		scanf("%d", &salary);

		printf("Введите стаж работы = ");
		scanf("%d", &year);

		if (year >= 2 && year <= 5)
		{
			add = (salary*0.02);

			printf("надбавка составляет 2 процента от зарплаты = %d\n", add);
		}

		else if (year >= 5 && year <= 10)
		{
			add = (salary*0.05);

			printf("надбавка составляет 5 процентов от зарплаты = %d\n", add);
		}

	}

	else if (n == 3)
	{
		//3.	Ввести с клавиатуры три числа, положительные возвести в квадрат, а отрицательные оставить без изменений.
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

			printf("если значения положительные возводим их в квадрат, а отрицательные оставляем без изменений = %d, %d, %d\n", a, b, c);

		}

		else if (a < 0 && b >= 0 && c < 0)
		{
			a = a;
			b = pow(b, 2);
			c = c;

			printf("если значения положительные возводим их в квадрат, а отрицательные оставляем без изменений = %d, %d, %d\n", a, b, c);

		}
		else if (a < 0 && b < 0 && c >= 0)
		{
			a = a;
			b = b;
			c = pow(c, 2);

			printf("если значения положительные возводим их в квадрат, а отрицательные оставляем без изменений = %d, %d, %d\n", a, b, c);

		}

		else if (a < 0 && b < 0 && c < 0)
		{
			printf("если значения отрицательные оставить без изменений\n");

		}

		else if (a >= 0 && b >= 0 && c >= 0)
		{
			a = pow(a, 2);
			b = pow(b, 2);
			c = pow(c, 2);

			printf("если значения положительные возводим их в квадрат = %d, %d, %d\n", a, b, c);
		}


	}

	else if (n == 4)
	{
		//4.	Дано натуральное число. Определить, является ли оно четным, или оканчивается цифрой 3.
		int a = 0;

		a = 1 + rand() % 1000;
		printf("\n a = %d\n", a);

		//printf("Enter a = \t");
		//scanf("%d", &a);

		if (a % 2 == 0 || a % 100 == 3)
		{
			printf("a является четным или оканчивается цифрой 3\n");

		}

		else
		{
			printf("Не является четным и не оканчивается цифрой 3\n");
		}


	}

	else if (n == 5)
	{
		//5.	Рассчитать сумму ежемесячных выплат процентов по депозиту, если договор составлен на полгода под 6% годовых или на год под 8% годовых. 
		//      С клавиатуры ввести сумму вклада и срок договора

		int sum = 0, year = 0, payment = 0;

		printf("Введите сумму вклада = ");
		scanf("%d", &sum);

		printf("Введите срок договора = ");
		scanf("%d", &year);

		if (year >= 1 && year <= 6)
		{
			payment = (sum + (sum*0.06)) / 12;

			printf("Если договор составлен на полгода, то сумма ежемесячных выплат выдается под 6 процентов годовых = %d\n", payment);
		}

		else if (year > 6 && year <= 12)
		{
			payment = (sum + (sum*0.08)) / 12;

			printf("Если договор составлен на полгода, то сумма ежемесячных выплат выдается под 8 процентов годовых = %d\n", payment);
		}
	}

	else if (n == 6)
	{
		//1.	Проверить, является ли год високосным (кратным 4) в пределах от 2000 до нашей эры до 2000 нашей эры. Ввести с экрана 
		//      год и признак эры, вывести сообщение в виде «656 год нашей эры – високосный».

		int year = 0;

		printf("Введите год\t");
		scanf("%d", &year);



		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && year > 0)
		{
			printf("year = %d\t Год нашей эры - высокосный\n", year);
		}

		else if ((year % 4 && year % 100 != 0 || year % 400 == 0) && year < 0)
		{
			printf("year = %d\t Год до нашей эры - высокосный\n", year);
		}

		else if ((year % 4 != 0 && year % 100 == 0 || year % 400 != 0) && year > 0)
		{
			printf("year = %d\t Год нашей эры - не высокосный\n", year);
		}

		else if ((year % 4 != 0 && year % 100 == 0 || year % 400 != 0) && year < 0)
		{
			printf("year = %d\t Год до нашей эры - не высокосный\n", year);
		}



	}

	else if (n == 7)
	{
		//2.	Вычислить стоимость покупки с учетом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 тенге.

		int sum = 0, total = 0;

		sum = 1 + rand() % 6000;
		printf("\n sum = %d\n", sum);

		if (sum > 1000)
		{
			total = sum - (sum*0.1);

			printf("стоимость покупки с учетом скидки в 10 процентов = %d\n ", total);
		}
		else if (sum < 1000)
		{
			total = sum;

			printf("стоимость покупки без скидки в 10 процентов = %d\n ", total);

		}

	}

	else if (n == 8)
	{
		//3.	Написать программу вычисления идеального веса пользователя (рост 100). Выдать рекомендации о необходимости поправиться либо похудеть.

		int weight = 0, height = 0, optimal = 0;
		char G;

		printf("Введите ваш рост, вес и пол  = \n");
		scanf("%d %d %c", &height, &weight, &G);


		if (G == 'M')
		{
			optimal = (height - 100)*0.9;

			printf("Идеальный вес для мужчин = %d\n", optimal);

			if (weight < optimal)
			{
				printf("Поправится\n");
			}

			else
			{
				printf("Похудеть.\n");
			}
		}

		else if (G == 'F')
		{
			optimal = (height - 100)*0.85;

			printf("Идеальный вес для женщин = %d\n", optimal);

			if (weight < optimal)
			{
				printf("Поправится.\n");
			}


			else
			{
				printf("Похудеть.\n");
			}
		}
	}

	else if (n == 9)
	{
		//4.	1.	Ввести с клавиатуры номер месяца. Определить сезон в зависимости от номера месяца и вывести сообщение (весна (3,4,5), лето (6,7,8), осень (9,10,11)  зима (12,1,2))
		// 1. Весна 2. Лето 3. Осень 4. Зима

		int mes = 0;

		printf("Ввести с клавиатуры номер месяца = ");
		scanf("%d", &mes);

		switch (mes)
		{
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 2);
			printf("Весна\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("Лето\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;

		case 9:
		case 10:
		case 11:

		{
			
			SetConsoleTextAttribute(hConsole, 14);
			printf("Осень\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;

		case 12:
		case 1:
		case 2:
		{

			SetConsoleTextAttribute(hConsole, 1);
			printf("Зима\n");
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
