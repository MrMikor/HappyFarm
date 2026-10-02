#include <stdio.h>
#include <locale.h> 


// делаем глобальными переменными чтобы иметь возможность обращатьяс к ним из любой части кода
int current_day = 1;
int current_hour = 8;

	//массив с id предметов
int inventory[10] = {0};



void work()
{
	int workTime = 0;
	printf("Сколько часов выхотите поработать: \n");
	scanf_s("%d", &workTime);
	current_hour += workTime;

	//проверка и добавление часов/дней
	if (current_hour >= 24)
	{
		current_day += current_hour / 24;
		current_hour = current_hour % 24;
	}
	printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);

	if (workTime > 12)
	{
		printf("Не стоит так сильно перетруждаться((( \n");
	}




}
int main() 
{
	//делаем читаемый русский текст
	setlocale(LC_ALL, "Russian");
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
			printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
			break;

			}
			case(2):
			{
			work();
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

//void checkWatch()
//{
//	printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
//
//
//
//}

