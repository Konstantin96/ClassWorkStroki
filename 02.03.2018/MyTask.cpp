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
			/*���� �����. ������� �� ����� ��� ��������� ������*/
			printf("���� �����. ������� �� ����� ��� ��������� ������\n");
			char mas[SIZE];
			printf("������� ����� �� ��������: ");
			scanf("%s", mas);
			int coun = strlen(mas);
			printf("%c - ��������� ������!\n", mas[coun - 1]);
		}

		else if (nz == 2)
		{
			system("cls");
			/*���� �����. ������� �� ����� ��� k-� ������*/
			printf("���� �����. ������� �� ����� ��� k-� ������\n");
			char mas[SIZE] = "Hi my World";
			printf("%s\n", mas);
			char count;
			printf("������� ����� ������� , ��� �� ������ ����� ��� ����� � �����: ");
			scanf("%d", &count);
			printf("��� ����� : %c\n", mas[count - 1]);
		}

		else if (nz == 3)
		{
			system("cls");
			/*���� �����. ����������, ��������� �� ������ � ��������� ������� � ���.*/
			printf("���� �����. ����������, ��������� �� ������ � ��������� ������� � ���.\n");
			char mas[SIZE];
			printf("������� ����� �� ��������: ");
			scanf("%s", mas);
			if (mas[1] == mas[3])
				printf("2 � 4 ������� ����������\n");
			else
				printf("2 � 4 ������ ������\n");
		}

		else if (nz == 4)
		{
			system("cls");
			/*���� �����. ����� ��, ��� ��� ���������� � ������������ �� ���� � �� �� �����?*/
			printf("���� �����. ����� ��, ��� ��� ���������� � ������������ �� ���� � �� �� �����?\n");
			char mas[SIZE];
			printf("������� ����� �� ��������: ");
			scanf("%s", mas);
			int count = strlen(mas);
			if (mas[0] == mas[count - 1])
				printf("1 � ��������� ������� ����������!\n");
			else
				printf("1 � ��������� ������� ������!\n");
		}

		else if (nz == 5)
		{
			system("cls");
			/*���� �����. �������� � ������� �� ����� ��������������, ��������� �� ��� ������� � ���������� �������*/
			printf("���� �����. �������� � ������� �� ����� ��������������, ��������� �� ��� ������� � ���������� �������\n");
			char mas[SIZE];
			char skl[1];
			printf("������� ����� �� ��������: ");
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
			/*���� �����. �������� � ������� �� ����� ��������������, ��������� �� ��� �������� � ���������� �������*/
			printf("���� �����. �������� � ������� �� ����� ��������������, ��������� �� ��� �������� � ���������� �������\n");
			char mas[SIZE];
			char skl[1];
			printf("������� ����� �� ��������: ");
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
			/*���� �����. �������� ��� �����, ������������ ������, ������� � ��������� �������*/
			printf("���� �����. �������� ��� �����, ������������ ������, ������� � ��������� �������\n");
			char mas[SIZE];
			char skl[4];
			printf("������� ����� �� ��������: ");
			scanf("%s", mas);
			strncpy(&skl[0], &mas[1], 3);
			skl[3] = '\0';
			printf("%s\n", skl);
		}

		else if (nz == 8)
		{
			system("cls");
			/*���� �����, ��������� �� ������� ����� ����. ������� �� ����� ��� ������ ��������, �� ��������� �������� �����.*/
			printf("���� �����, ��������� �� ������� ����� ����. ������� �� ����� ��� ������ ��������, �� ��������� �������� �����\n");
			char mas[SIZE];
			printf("������� ����� �� ��������: ");
			scanf("%s", mas);
			mas[strlen(mas) / 2] = 0;
			printf("%s\n", mas);
		}

		else if (nz == 9)
		{
			system("cls");
			/*������� ������ �������� �� 10 ���������. �������� �������-����� �� ������ '*'*/
			printf("������� ������ �������� �� 10 ���������. �������� �������-����� �� ������ '*'\n");
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
			/*������� ������ �������� �� 11 ���������. ���������� ��� �������� �����-������� � ������� �������*/
			printf("������� ������ �������� �� 11 ���������. ���������� ��� �������� �����-������� � ������� �������\n");
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
			/*��� ������ ��������, ���������� ���������� �����. ����� ���������� ����, ������������ � ����� b*/
			printf("��� ������ ��������, ���������� ���������� �����. ����� ���������� ����, ������������ � ����� b\n");
			char *mas = " bullet Apart from the cost, shared flats and houses are often in poor condition. Landlords are slow to spend their profits on repairs. I was fairly lucky with mine. The house I lived in was scruffy, but the landlord took action when needed � like the time the bathroom ceiling fell in. I�d just run a bath and had returned to my room to get something, when I heard a loud crash. I went back to find the bathtub full of wet plaster. I had the ceiling repaired and took the bill to my bandlord.";
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
			/*� �������� ������ ������� ��������� ������ � � (������), ������� �������� � ������*/
			printf("� �������� ������ ������� ��������� ������ � � (������), ������� �������� � ������\n");
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