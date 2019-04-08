Текстовый квест 20WaysToDie
===========
Учебный проект Академии Шаг
***********
Описание игры 
-----------
Текстовые квест — интерактивная игра, где игрок должен выбрать действие из предложенных или самому совершить действие, написав ключевые слова, чтобы продвигаться дальше по сюжету.

Игра имеет разветвленный сюжет (если то, что я написал, вообще можно назвать сюжетом) и большое количество концовок (21), которые предлагается найти игроку. Стоит учесть, что 20 из них -  плохие, потому что искать хорошие концовки - неинтересно. Кстати говоря, отсюда и название игры - "20 путей, чтобы умереть".

Описание кода программы 
-----------
Подключение библиотек и пространства имен:
```cpp
#include "pch.h" // Библитоека предкомпилированных заголовков
#include <iostream> // Библиотека ввода и вывода информации
#include <stdlib.h> // Стандартная библиотека для контроля выполнения программы
using namespace std; // Использование стандартного пространства имен
```
Объявляем глобально массив с концовками и переменную для выбора в главном меню:
```cpp
int endings[21];
int menu_choice;
```
Основные функции:
```cpp
void Menu(); // функция основного меню
// функции для меню
void Endings_Output(); // функция для вывода разблокированных концовок
void Game(); // функция запуска игры
int Choice(); // универсальная функция выбора
```
Геймплей игры основан на последовательном перемещении между сценами:
```cpp
void Scene1(); void subScene1(); 
void Scene2(); 
void Scene3(); void subScene3_1(); void subScene3_2(); 
void Scene4(); 
void Scene5(); 
void Scene6(); 
void Scene7(); void subScene7_1(); void subScene7_2(); void subScene7_3(); 
void Scene8(); void subScene8(); 
void Scene9(); void subScene9_1(); void subScene9_2(); void subScene9_3();  void subScene9_4(); 
void Scene10(); void subScene10(); 
void Scene11(); void subScene11_1(); void subScene11_2(); void subScene11_3(); 
void Scene12(); void subScene12_1(); void subScene12_2(); void subScene12_3(); void subScene12_4(); 
void Scene13(); void subScene13_1(); void subScene13_2(); void subScene13_3();
void Scene14();
void Scene15(); void subScene15_1(); void subScene15_2(); 
void Scene16(); 
void Scene17();
void Scene18(); 
void Scene19(); 
void Scene20(); 
void Scene21();
void Scene22(); void subScene22_1(); void subScene22_2(); void subScene22_3(); void subScene22_4(); void subScene22_5(); void subScene22_6(); void subScene22_7(); void subScene22_8(); void subScene22_9(); void subScene22_10(); 
void Scene23(); void subScene23();
void Scene24(); void subScene24();
void Scene25();
void Scene26(); void subScene26(); 
void Scene27(); 
void Scene28(); 
void Scene29(); 
void Scene30(); void subScene30_1(); void subScene30_2(); 
void Scene31(); 
void Scene32(); 
void Scene33(); 
```
Тело каждой сцены построено на выводе ситуации, вариантов действий, приема ответа игрока и перемещения на следующую сцену, например:
```cpp
void Scene28()
{
	cout << "Перед тобой три двери, куда пойдешь?" << endl;
	cout << "1. В первую" << endl;
	cout << "2. Во вторую" << endl;
	cout << "3. В третью" << endl;
	switch (Choice())
	{
	case 1:
		Scene31();
		break;
	case 2:
		Scene31();
		break;
	case 3:
		Scene31();
		break;
	}
}
```
Функции для концовок:
```cpp
void WinTheGame(); 
void Death1(); 
void Death2(); 
void Death3(); 
void Death4(); 
void Death5(); 
void Death6(); 
void Death7(); 
void Death8(); 
void Death9();
void Death10(); 
void Death11(); 
void Death12(); 
void Death13(); 
void Death14(); 
void Death15(); 
void Death16(); 
void Death17(); 
void Death18(); 
void Death19(); 
void Death20(); 
```
Пример тела функции концовки:
```cpp
void Death1() 
{
	cout << "Ты умер от истощения, так и не дождавшись спасительного чуда" << endl << endl;
	endings[0] = 1;
	Menu();
}
```
