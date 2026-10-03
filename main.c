#include <stdio.h>
#include <locale.h> 


// делаем глобальными переменными чтобы иметь возможность обращатьяс к ним из любой части кода
int current_day = 1;
int current_hour = 8;


//массив с id предметов
//т.е у нас есть массив и в нем id это предмет а его значение это кол-во этого предмета, следовательно 0 = пустая ячейка у меня же не может быть 0 яблок, но как мне привязать id к названиям 0_o
//массивв инвентаря со вложеными предметами
int inventory[10] = { 1, 2, 3, 5, 0, 8, 0, 5, 0, 5 };

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
//проверка на число
int readInt()
{
	int value;
	while (scanf_s("%d", &value) != 1)
	{
		while (getchar() != '\n');         
		printf("Это не число, попробуйте снова: ");
	}
	while (getchar() != '\n');
	return value;
}

void work()
{
	int workTime = 0;
	printf("Сколько часов выхотите поработать: \n");
	workTime = readInt();


	if (workTime < 0)
	{
		printf("Нельзя работать отрицательное количество часов.\n");
		return;
	}
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
	slot = readInt();
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
	id = readInt();
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
	slot = readInt();
	if (slot < 0 || slot > 9) { printf("Неверный номер слота!\n"); return; }

	inventory[slot] = 0;
	printf("Слот %d очищен.\n", slot);
}


//можно использовать по желанию
//void checkWatch()
//{
//	printf("Текущее время: день %d, время %d:00\n", current_day, current_hour);
//
//
//
//}

void favoriteResource()
{
	int bestId = 0;
	int bestCount = 0;

	for (int id = 1; id <= 9; id++)
	{
		int count = 0;
		for (int i = 0; i < 10; i++)
		{
			if (inventory[i] == id)
				count++;
		}

		if (count > bestCount)
		{
			bestCount = count;
			bestId = id;
		}
	}

	if (bestId == 0)
		printf("В инвентаре нет предметов.\n");
	else
		printf("Самый частый предмет: ID %d (%s), занимает %d слот(ов).\n",
			bestId, itemNames[bestId], bestCount);
}

int main() 
{
	//делаем читаемый русский текст
	setlocale(LC_ALL, "Russian");
	while (1)
	{
		printf("Меню \n [0] Выход \n [1] Посмотреть на часы \n [2] Промотать время (Поработать) \n [3] Посмотреть инвентарь \n [4] Положить предмет в слот \n [5] Выбросить предмет \n [6] Выполнить задание по варианту \n");
		int choice = readInt();
		//крутая менюшка
		switch (choice)
		{
			case(0):
			{
				return 0;
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

			case(6):
			{
			favoriteResource();
			break;
			}

			default: printf("Неверный пункт меню.\n"); break;
		}
		

	}
return 0;
}
