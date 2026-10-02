#include <stdio.h>
#include <locale.h> 

int main() 
{
	//делаем читаемый русский текст
	setlocale(LC_ALL, "Russian");
	int current_day = 1;
	int current_hour = 8;

	//массив с id предметов
	int inventory[10] = {0};
	int choice = 1;
	while (choice !=0)
	{
		printf("Меню \n [0] Выход \n [1] Посмотреть на часы \n [2] Промотать время (Поработать) \n [3] Посмотреть инвентарь \n [4] Положить предмет в слот \n [5] Выбросить предмет \n [6] Выполнить задание по варианту \n");
		scanf_s("%d", &choice);
		//крутая менюшка
		switch (choice)
		{
			case(0):
			{
				break;
			}
			case(1):
			{
			printf("Функция 1 \n");
			break;

			}
			case(2):
			{
			printf("Функция 2 \n");
			break;

			}
			case(3):
			{
			printf("Функция 3 \n");
			break;

			}
			case(4):
			{
			printf("Функция 4 \n");
			break;

			}
			case(5):
			{
			printf("Функция 5 \n");
			break;

			}
			case(6):
			{
			printf("Функция 6 \n");
			break;

			}
		}
		
	}
return 0;
}