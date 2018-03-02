#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include "MyPrototip.h"

#define SIZE 20

void main()
{
	while (true)

	{
		setlocale(LC_ALL, "RUS");
		srand(time(NULL));
		unsigned short int nz;

		printf("Enter the task number or 666 to exit : ");
		scanf("%d", &nz);

		if (nz == 1)
		{
			system("cls");
			/*Дано слово. Вывести на экран его последний символ*/
			printf("Дано слово. Вывести на экран его последний символ\n");
			char mas[SIZE];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			int coun = strlen(mas);
			printf("%c - последний символ!\n", mas[coun - 1]);
		}

		else if (nz == 2)
		{
			system("cls");
			/*Дано слово. Вывести на экран его k-й символ*/
			printf("Дано слово. Вывести на экран его k-й символ\n");
			char mas[SIZE] = "Hi my World";
			printf("%s\n", mas);
			char count;
			printf("Введите номер символа , что бы узнать какая это буква в слове: ");
			scanf("%d", &count);
			printf("Это буква : %c\n", mas[count - 1]);
		}

		else if (nz == 3)
		{
			system("cls");
			/*Дано слово. Определить, одинаковы ли второй и четвертый символы в нем.*/
			printf("Дано слово. Определить, одинаковы ли второй и четвертый символы в нем.\n");
			char mas[SIZE];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			if (mas[1] == mas[3])
				printf("2 и 4 символы одинаковые\n");
			else
				printf("2 и 4 символ разные\n");
		}

		else if (nz == 4)
		{
			system("cls");
			/*Дано слово. Верно ли, что оно начинается и оканчивается на одну и ту же букву?*/
			printf("Дано слово. Верно ли, что оно начинается и оканчивается на одну и ту же букву?\n");
			char mas[SIZE];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			int count = strlen(mas);
			if (mas[0] == mas[count - 1])
				printf("1 и последний элемент одинаковый!\n");
			else
				printf("1 и последний элемент разные!\n");
		}

		else if (nz == 5)
		{
			system("cls");
			/*Дано слово. Получить и вывести на экран буквосочетание, состоящее из его второго и четвертого символа*/
			printf("Дано слово. Получить и вывести на экран буквосочетание, состоящее из его второго и четвертого символа\n");
			char mas[SIZE];
			char skl[1];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			/*strcpy(&skl[0], &mas[1]);
			strcpy(&skl[1], &mas[3]);*/
			strncpy(&skl[0], &mas[1], 1);
			strncpy(&skl[1], &mas[3], 1);
			skl[2] = '\0';
			printf("%s\n", skl);
		}

		else if (nz == 6)
		{
			system("cls");
			/*Дано слово. Получить и вывести на экран буквосочетание, состоящее из его третьего и последнего символа*/
			printf("Дано слово. Получить и вывести на экран буквосочетание, состоящее из его третьего и последнего символа\n");
			char mas[SIZE];
			char skl[1];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			/*strcpy(&skl[0], &mas[1]);
			strcpy(&skl[1], &mas[3]);*/
			int count = strlen(mas);
			strcpy(&skl[0], &mas[2]);
			strcpy(&skl[1], &mas[count - 1]);
			skl[2] = '\0';
			printf("%s\n", skl);
		}

		else if (nz == 7)
		{
			system("cls");
			/*Дано слово. Получить его часть, образованную второй, третьей и четвертой буквами*/
			printf("Дано слово. Получить его часть, образованную второй, третьей и четвертой буквами\n");
			char mas[SIZE];
			char skl[4];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			strncpy(&skl[0], &mas[1], 3);
			skl[3] = '\0';
			printf("%s\n", skl);
		}

		else if (nz == 8)
		{
			system("cls");
			/*Дано слово, состоящее из четного числа букв. Вывести на экран его первую половину, не используя оператор цикла.*/
			printf("Дано слово, состоящее из четного числа букв. Вывести на экран его первую половину, не используя оператор цикла\n");
			char mas[SIZE];
			printf("Введите слово на латинице: ");
			scanf("%s", mas);
			mas[strlen(mas) / 2] = 0;
			printf("%s\n", mas);
		}

		else if (nz == 9)
		{
			system("cls");
			/*Введите массив символов из 10 элементов. Замените символы-цифры на символ '*'*/
			printf("Введите массив символов из 10 элементов. Замените символы-цифры на символ '*'\n");
			char mas[10] = "KZT526441";

			for (int i = 0; i < 11; i++)
			{
				int code = (int)mas[i];
				if (code >= 48 && code <= 57)
					mas[i] = '*';
			}
			printf("%s\n", mas);
		}
		else if (nz == 10)
		{
			system("cls");
			/*Введите массив символов из 11 элементов. Переведите все строчные буквы-символы в верхний регистр*/
			printf("Введите массив символов из 11 элементов. Переведите все строчные буквы-символы в верхний регистр\n");
			char mas[11] = "PriveT";
			for (int i = 0; i < 11; i++)
			{
				int code = (int)mas[i];
				if (code >= 65 && code <= 90)
					mas[i] = (char)code + 32;
				if (code >= 97 && code <= 122)
					mas[i] = (char)code - 32;
			}
			printf("%s\n", mas);
		}

		else if (nz == 11)
		{
			system("cls");
			/*Дан массив символов, содержащий английский текст. Найти количество слов, начинающихся с буквы b*/
			printf("Дан массив символов, содержащий английский текст. Найти количество слов, начинающихся с буквы b\n");
			char *mas = " bullet Apart from the cost, shared flats and houses are often in poor condition. Landlords are slow to spend their profits on repairs. I was fairly lucky with mine. The house I lived in was scruffy, but the landlord took action when needed — like the time the bathroom ceiling fell in. I’d just run a bath and had returned to my room to get something, when I heard a loud crash. I went back to find the bathtub full of wet plaster. I had the ceiling repaired and took the bill to my bandlord.";
			int count = 0;
			while (*mas != '\0')
			{
				if (*mas == ' ')
					if (*(mas + 1) == 'b'||*(mas + 1) == 'c')
					{
						mas++;
						while (*mas != ' ')
						{
							putchar(*mas);
							mas++;
						}
						mas--;
						printf("\n");
						count++;
					}

				mas++;
			}

		}

		else if (nz == 12)
		{
			system("cls");
			/*В заданной строке удалить последний символ « » (пробел), который найдется в строке*/
			printf("В заданной строке удалить последний символ « » (пробел), который найдется в строке\n");
			char *mas = "Dobriy den' cegodnya creda, budet dozhd'";
			int count = 0;
			while (*mas != '\0')
			{
				if (*mas == ' ')
					if (*(mas + 1) == ' ' )
					{
						mas++;
						while (*mas != ' ')
						{
							putchar(*mas);
							mas++;
						}
						printf("\n");
						count++;
					}

				mas++;
			}
		}

		else if (nz == 666)
		{
			break;
			system("exit");
		}

		else

		{
			system("cls");
			printf("	Sorry\nThere is no such task ! \n");
		}

	}
}