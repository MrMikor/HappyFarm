#include <stdio.h>
#include <locale.h> 


// делаем глобальными переменными чтобы иметь возможность обращатьяс к ним из любой части кода
int current_day = 1;
int current_hour = 8;

<<<<<<< HEAD
<<<<<<< HEAD

//массив с id предметов
//т.е у нас есть массив и в нем id это предмет а его значение это кол-во этого предмета, следовательно 0 = пустая ячейка у меня же не может быть 0 яблок, но как мне привязать id к названиям 0_o
//массивв инвентаря со вложеными предметами
int inventory[10] = { 1, 2, 3, 5, 0, 8, 0, 0, 0, 0 };

//название предметов по id
char* itemNames[10] = {
	"Пусто",
	"Дерево",
	"Камень",
	"Семена",
	"Железо",
	"Яблоко",
	"Трава",
	"Ветка",
	"Мясо",
	"Вода"
};
=======
	//массив с id предметов
int inventory[10] = {0};

>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
	//массив с id предметов
int inventory[10] = {0};

>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777


void work()
{
	int workTime = 0;
	printf("Сколько часов выхотите поработать: \n");
	scanf_s("%d", &workTime);
	current_hour += workTime;
<<<<<<< HEAD
<<<<<<< HEAD
	if (workTime < 0)
	{
		printf("Нельзя работать отрицательное количество часов.\n");
		return;
	}
=======

>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======

>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
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
<<<<<<< HEAD
<<<<<<< HEAD

void checkInventory()
{
	for (int i = 0; i < 10; i++)
	{
		if (inventory[i] == 0)
			printf("Слот %d: пусто\n", i);
		else
			printf("Слот %d: [%d] (%s)\n", i, inventory[i], itemNames[inventory[i]]);
		//болле правильная по моему мнению часть кода
		//if (inventory[i] == 0)
		//{
		//	printf("Слот %d: пуст\n", i);
		//}
		//else
		//{
		//	printf("Слот %d: %d %s\n", i, inventory[i], itemNames[i]);
		//}
		
	}


}


void putItem()
{  
	//заменяем слоты
	int slot, id;
	checkInventory();
	printf("Введите номер слота который хотите заменить (0-9): ");
	scanf_s("%d", &slot);
	if (slot < 0 || slot > 9) { printf("Неверный номер слота!\n"); return; }
	//добавляем вывод предметов для удобства
	for (int i = 0; i < 10; i++)
	{
		if (itemNames[i] == 0)
			printf("Слот %d: пусто\n", i);
		else
			printf("Предмет %d: (%s)\n", i, itemNames[i]);


	}



	printf("Введите ID предмета (0-9): ");
	scanf_s("%d", &id);
	if (id < 0 || id > 9) { printf("Неверный ID предмета!\n"); return; }

	inventory[slot] = id;
	printf("В слот %d положен предмет [%d] (%s)\n", slot, id, itemNames[id]);
}


void dropItem()
{
	//выводим весь список для удобства выбора
	checkInventory();
	int slot;
	printf("Введите номер слота который хотите выбросить  (0-9): ");
	scanf_s("%d", &slot);
	if (slot < 0 || slot > 9) { printf("Неверный номер слота!\n"); return; }

	inventory[slot] = 0;
	printf("Слот %d очищен.\n", slot);
}


//
//void putItem()
//{
//	int firstItemId, secondItenId;
//	printf("Выберите предмет который хотите замениь:\n");
//	scanf_s("%d", &firstItemId);
//	printf("Выберите предмет с которым :\n");
//	scanf_s("%d", &firstItemId);
//
//
//}

//можно использовать по желанию
//void checkWatch()
//{
//	printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
//
//
//
//}

=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
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
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
			case(1):
			{
			printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
			break;
<<<<<<< HEAD
<<<<<<< HEAD
			}

=======

			}
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======

			}
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
			case(2):
			{
			work();
			break;

			}
			case(3):
			{
<<<<<<< HEAD
<<<<<<< HEAD
			checkInventory();
			break;
			}

			case(4):
			{
			putItem();
			break;
			}

			case(5):
			{
			dropItem();
			break;
			}

=======
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
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
<<<<<<< HEAD
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
			case(6):
			{
			printf("Функция 6 \n");
			break;

			}
<<<<<<< HEAD
<<<<<<< HEAD
			default: printf("Неверный пункт меню.\n"); break;
		}
		
		
=======
		}
		
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
		}
		
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
	}
return 0;
}

<<<<<<< HEAD
<<<<<<< HEAD

=======
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
//void checkWatch()
//{
//	printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
//
//
//
//}
<<<<<<< HEAD
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777
=======
>>>>>>> 7bc1507100016856fc1a40ae73652649b0ba7777

