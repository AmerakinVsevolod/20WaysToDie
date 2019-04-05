#include "pch.h"
#include <iostream>
using namespace std;

int endings[21];
bool win_game = false;
int menu_choice;

/*-----------------------------------------------------------------------*/
// меню
void Menu();
// функции для меню
void Endings_Output();
void Game();
/*-----------------------------------------------------------------------*/
// универсальная функция выбора
int Choice();
/*-----------------------------------------------------------------------*/
// единственная выигрышная концовка (21 номер само собой)
void WinTheGame();
/*-----------------------------------------------------------------------*/
// вот это я придумал конечно, да, вывод текста для каждой смерти отдельно, мб изменю потом
void Death1(); // готова
void Death2(); // готова
void Death3(); // готова
void Death4(); // готова
void Death5(); // готова
void Death6(); // готова
void Death7(); // готова
void Death8(); // готова
void Death9(); // готова
void Death10(); // готова
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
/*-----------------------------------------------------------------------*/
// естессна все сцены тоже будут написаны отдельно, какой я непредсказуемый
void Scene1(); void subScene1(); // готова
void Scene2(); // готова 
void Scene3(); void subScene3_1(); void subScene3_2(); // готова
void Scene4(); // готова
void Scene5(); // готова
void Scene6(); // готова
void Scene7(); void subScene7_1(); void subScene7_2(); void subScene7_3(); // готова
void Scene8(); void subScene8(); // готова
void Scene9(); void subScene9_1(); void subScene9_2(); void subScene9_3();  void subScene9_4(); // готова
void Scene10(); void subScene10(); // готова
void Scene11(); void subScene11_1(); void subScene11_2(); void subScene11_3(); // готова
void Scene12(); void subScene12_1(); void subScene12_2(); void subScene12_3(); void subScene12_4(); // готова
void Scene13(); void subScene13_1(); void subScene13_2(); // готова
void Scene14(); // готова
void Scene15(); void subScene15_1(); void subScene15_2(); // готова
void Scene16(); // готова
void Scene17();
void Scene18(); // готова
void Scene19();
void Scene20();
void Scene21();
void Scene22(); void subScene22_1(); void subScene22_2(); void subScene22_3(); void subScene22_4(); void subScene22_5(); void subScene22_6(); void subScene22_7(); void subScene22_8(); void subScene22_9(); void subScene22_10(); // готова
/*-----------------------------------------------------------------------*/

int main()
{
	setlocale(LC_ALL, "rus");
	Menu();
}

/*-----------------------------------------------------------------------*/
// функции для игрового меню
void Endings_Output()
{
	cout << "Разблокированные концовки: " << endl << endl;
	for (int i = 0; i < 21; i++)
	{
		switch (i)
		{
		case 0:
			if (endings[i] == 1)
			{
				cout << "1. Умер, так и не дождавшись спасительного чуда" << endl;
			}
			break;
		case 1:
			if (endings[i] == 1)
			{
				cout << "2. Употребление электронных устройств в пищу вредит вашему здоровью" << endl;
			}
			break;
		case 2:
			if (endings[i] == 1)
			{
				cout << "3. Поиск ответа на вопрос \"В чем смысл жизни?\" до добра не доводит" << endl;
			}
			break;
		case 3:
			if (endings[i] == 1)
			{
				cout << "4. Бесследно пропал после задержанием Росгвардией" << endl;
			}
			break;
		case 4:
			if (endings[i] == 1)
			{
				cout << "5. Отключился мозг (за ненадобностью)" << endl;
			}
			break;
		case 5:
			if (endings[i] == 1)
			{
				cout << "Умер в страшных мучениях, съев незнакомый тебе гриб" << endl;
			}
			break;
		case 6:
			if (endings[i] == 1)
			{
				cout << "Поплатился за кражу грибов, превратившись в пепел" << endl;
			}
			break;
		case 7:
			if (endings[i] == 1)
			{
				cout << "Умер в компании русалок. Хотя, это стоило того" << endl;
			}
			break;
		case 8:
			if (endings[i] == 1)
			{
				cout << "Тебя съела пажылая Годзилла, плохо просвещенная в музыкальном искусстве" << endl;
			}
			break;
		case 9:
			if (endings[i] == 1)
			{
				cout << "Замрглбрлглблен насмерть мурлоками" << endl;
			}
			break;
		case 20:
			if (endings[i] == 1)
			{
				cout << "Выбрался из той комнаты и прошел этот ужасный квест" << endl;
			}
			break;
		default:
			break;
		}
	}
	cout << endl;
	Menu();
}

void Game()
{
	Scene1();
}

// само игровое меню
void Menu()
{
	cout << "Меню: " << endl;
	cout << "1. Играть" << endl;
	cout << "2. Показать открытые концовки (всего их 21 штука)" << endl;
	cout << "3. Выход" << endl;
	cout << "Выбор действия (1, 2 или 3): ";
	cin >> menu_choice;
	cout << endl;
	switch (menu_choice)
	{
	case 1:
		Game();
		break;
	case 2:
		Endings_Output();
		break;
	case 3:
		exit(0);
		break;
	}
}
/*-----------------------------------------------------------------------*/
// функция выбора
int Choice()
{
	int choice;
Retry:
	cout << "Выбор действия (1, 2 или 3): "; cin >> choice;
	if (choice < 1 || choice > 3)
	{
		cout << "Прочитай внимательнее: " << endl;
		goto Retry;
	}
	cout << endl << endl;
	return choice;
}
/*-----------------------------------------------------------------------*/
// СМЭРТИ
void Death1() // задействовано
{
	cout << "Ты умер от истощения, так и не дождавшись спасительного чуда" << endl << endl;
	endings[0] = 1;
	Menu();
}

void Death2() // задействовано
{
	cout << "Ты умер от пищевого отравления телефоном" << endl << "Похоже тебе никто не говорил, что есть телефоны нельзя" << endl << endl;
	endings[1] = 1;
	Menu();
}

void Death3() // задействовано
{
	cout << "Ты так и не получил ответа на вопрос о смысле жизни, тем самым ты умер от экзистенциального кризиса" << endl << endl;
	endings[2] = 1;
	Menu();
}

void Death4() // задействовано
{
	cout << "Примерно через 10 минут стены комнаты были пробиты зарядами и тебя повязала Росгвардия." << endl << "Потом ты был конвоирован в неизвестном направлении и больше никто и никогда тебя не видел" << endl << endl;
	endings[3] = 1;
	Menu();
}

void Death5() // задействовано
{
	cout << "Твой мозг решил, что он больше не вынесет твоей тупости, и отключился" << endl << endl;
	endings[4] = 1;
	Menu();
}

void Death6() // задействовано
{
	cout << "Твой живот скрутило так, что ты умер в мучениях примерно через восемь секунд" << endl << "Мораль: не верь всяким незнакомым старикам" << endl << endl;
	endings[5] = 1;
	Menu();
}

void Death7() // задействовано
{
	cout << "Как только ты схватил корзинку и собрался убегать, костры вокруг старика всколыхнулись адским пламенем и превратили тебя в пепел" << endl << endl;
	endings[6] = 1;
	Menu();
}

void Death8() // задействовано
{
	cout << "Ты с разбегу сиганул в пруд. Русалки обняли тебя и угостили вином с черной икрой" << endl << "В пруду включился режим джакузи и вы чудесно провели пару часов" << endl << "А потом русалки тебя съели" << endl << endl;
	endings[7] = 1;
	Menu();
}

void Death9() // задействовано
{
	cout << "Похоже что Годзилла не знает такой песни. Иначе она не стала бы тебя есть" << endl << endl;
	endings[8] = 1;
	Menu();
}

void Death10() // задействовано
{
	cout << "Ты так и не понял, получилось ли у тебя втереться в доверие к мурлокам, потому что тебя замрглбрлглблобили насмерть" << endl << endl;
	endings[9] = 1;
	Menu();
}


/*-----------------------------------------------------------------------*/
// ВЫИГРЫШНАЯ КОНЦОВКА
void WinTheGame() // задействовано
{
	cout << "Тебе удалось выбраться из этой передряги живым и невредимым. Красава!" << endl << endl;
	endings[20] = 1;
	Menu();
}
/*-----------------------------------------------------------------------*/
// СЦЕНЫ
void Scene1()
{
	cout << "Ты очнулся в темном помещении, естественно вокруг ничего не видно." << endl << "В твоей голове возникла здравая мысль выбраться отсюда." << endl << endl;
	cout << "1. Пошарить по карманам" << endl;
	cout << "2. Ощупать комнату" << endl;
	cout << "3. Помолиться Богу о спасении твоей души" << endl;
	switch (Choice())
	{
	case 1:
		Scene2();
		break;
	case 2:
		Scene3();
		break;
	case 3:
		subScene1();
		break;
	}
}

void subScene1()
{
	cout << "Перед тобой начала высвечиваться белым светом надпись " << endl << "\"Ваша заявка на спасение души принята, " << endl << "ждите обработки в течение 2 - 10 тысяч рабочих лет\"" << endl << endl;
	cout << "1. Пошарить по карманам" << endl;
	cout << "2. Ощупать комнату" << endl;
	cout << "3. Ждать 2 - 10 тысяч рабочих лет" << endl;
	switch (Choice())
	{
	case 1:
		Scene2();
		break;
	case 2:
		Scene3();
		break;
	case 3:
		Death1();
		break;
	}
}

void Scene2()
{
	cout << "Пошарив у себя по карманам, ты достаешь оттуда свой мобильник" << endl << "На нем остался всего 1% зарядки." << endl << "Это значит что можно позвонить только один раз" << endl;
	cout << "1. Позвонить в полицию" << endl;
	cout << "2. Поиграть в 20WaysToDie" << endl;
	cout << "3. Позвонить маме" << endl;
	switch (Choice())
	{
	case 1:
		Scene5();
		break;
	case 2:
		Scene6();
		break;
	case 3:
		Scene7();
		break;
	}
}

void Scene3()
{
	cout << "Встав и пройдя вперед, ты уперся в стену." << endl << "А далее: угол, стена, угол, стена, угол, снова стена" << endl << "Походу это реально комната." << endl << " На одной из стен ты нащупал дверь" << endl;
	cout << "1. Открыть дверь" << endl;
	cout << "2. Выбить дверь ногой, как это делают во всех боевиках" << endl;
	cout << "3. Поговорить с дверью" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Scene4();
		break;
	case 3:
		subScene3_1();
		break;
	}
}

void subScene3_1()
{
	cout << "Ты сейчас серьезно?" << endl;
	cout << "1. Открыть дверь" << endl;
	cout << "2. Выбить дверь ногой, как это делают во всех боевиках" << endl;
	cout << "3. Не, ну а почему нет?" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Scene4();
		break;
	case 3:
		subScene3_2();
		break;
	}
}

void subScene3_2()
{
	cout << "Вау, похоже что дверь молчит, может быть она немая?" << endl;
	cout << "1. Открыть дверь" << endl;
	cout << "2. Попробовать говорить на языке жестов" << endl;
	cout << "3. Наорать на дверь" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Death5();
		break;
	case 3:
		Death5();
		break;
	}
}

void Scene4()
{
	cout << "Перед тобой уже хорошо освещенная комната" << endl << "На полу лежат футбольный мяч, блокнот с какими-то записями и одна лыжа" << endl;
	cout << "1. Попинать мяч" << endl;
	cout << "2. Почитать записи в блокноте" << endl;
	cout << "3. Покататься на одной лыже по бетонному полу" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		Scene13();
		break;
	}
}

void Scene5()
{
	cout << "\"Городское отделение полиции, у телефона Светлана, я вас слушаю\"" << endl;
	cout << "1. Алло, девушка, я заперт в какой-то темной комнате" << endl << "Прошу, помогите!" << endl;
	cout << "2. Детка, у тебя самый сексуальный голос, что я слышал" << endl;
	cout << "3. Хочу заказать пиццу, пеперони пожалуйста" << endl << "Адрес: темная комната, хрен знает где" << endl;
	switch (Choice())
	{
	case 1:
		Scene9();
		break;
	case 2:
		Scene10();
		break;
	case 3:
		subScene9_3();
		break;
	}
}

void Scene6()
{
	cout << "Только ты успел получить одну концовку, как телефон разрядился" << endl << "Что будешь делать дальше?" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene7()
{
	cout << "\"Ой, здравствуй, сынок, спасибо что позвонил" << endl << "Мы так с папой твоим соскучились, ну расскажи что там у тебя?" << endl << "Как жизнь? Как работа? А девушку ты себе нашел?" << endl << "А приедешь когда? Надо на дачу съездить, ремонт доделать то." << endl << "Огород еще бы хорошо прополоть, я то уже старая стала" << endl << "А вот если бы еще внуки были...\"" << endl;
	cout << "1. Мам, я тут в какой-то комнате темной сижу, мне срочно нужна..." << endl;
	cout << "2. Промолчать" << endl;
	cout << "3. Бросить трубку" << endl;
	switch (Choice())
	{
	case 1:
		subScene7_1();
		break;
	case 2:
		subScene7_2();
		break;
	case 3:
		subScene7_3();
		break;
	}
}

void subScene7_1()
{
	cout << "\"Что значит сидишь в темной комнате?!?" << endl << "Опять небось веселился со своими друзьями-наркоманами!" << endl << "Такими темпами они тебя скоро накурят спайсами какими-нибудь!" << endl << "И все, а ведь мне еще внуков хочется повидать!" << endl << "В общем вылазь из своей комнаты и быстро к нам! А не то...\"" << endl << "Мама не успела договорить, так как телефон решил неожиданно разрядиться";
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene7_2()
{
	cout << "\"Ну что молчишь то?" << endl << "Или это не наш сына?" << endl << "Так, хватить играться! А ну быстро говори, где мой сын?!!?" << endl << "Или я сейчас же звоню в полицию!!! Они там...\"" << endl << "Только ты хотел сказать маме, чтобы она все таки позвонила в полицию, как телефон разрядился" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene7_3()
{
	cout << "Как только ты бросил трубку, телефон разрядился." << endl << "Окей, дальше то что делать будешь?" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene8()
{
	cout << "А ведь было же все просто отлично..." << endl << "Образование, отличная работа, друзья, даже машину себе купил не в кредит" << endl << "Что же могло пойти не так?" << endl;
	cout << "1. Иногда мне кажется, что внутри меня пустота..." << endl;
	cout << "2. Жизнь слишком хороша, но я недостоин ее" << endl;
	cout << "3. У меня все как у людей, но являюсь ли я человеком?" << endl;
	switch (Choice())
	{
	case 1:
		subScene8();
		break;
	case 2:
		subScene8();
		break;
	case 3:
		subScene8();
		break;
	}
}

void subScene8()
{
	cout << "Ну вот зачем так про себя говорить?" << endl << "Ты отчличный парень, и впереди тебя ждет отличное будущее" << endl;
	cout << "1. Будущее?!?! Нет у меня никакого будущего!!!" << endl;
	cout << "2. И в чем смысл этого будущего?" << endl;
	cout << "3. Что значит хороший парень? Кто это сказал? Кто это определил?" << endl << "Я не чувствую себя отличным..." << endl;
	switch (Choice())
	{
	case 1:
		Death3();
		break;
	case 2:
		Death3();
		break;
	case 3:
		Death3();
		break;
	}
}

void Scene9()
{
	cout << "\"Адрес комнаты сообщите, пожалуйста\"" << endl;
	cout << "1. Да откуда я знаю?!? Здесь темно, страшно и я не знаю, как сюда попал!" << endl;
	cout << "2. Пилингуйте мой телефон, таким образом вы узнаете где я!" << endl;
	cout << "3. Бейкер-стрит, 221b" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_1();
		break;
	case 2:
		subScene9_2();
		break;
	case 3:
		subScene9_3();
		break;
	}
}

void subScene9_1()
{
	cout << "Послышались длинные гудки, а потом телефон отключился" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene9_2()
{
	cout << "\"Мы вам тут не ФЭС, у нас не настолько продвинутые технологии" << endl << "Без адреса не могу вам ничем помочь\"" << endl;
	cout << "1. Да пошла ты!" << endl;
	cout << "2. Долой Путина! Навального в президенты! Все на митинг!" << endl;
	cout << "3. Да откуда я знаю?!? Здесь темно, страшно и я не знаю, как сюда попал!" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_4();
		break;
	case 2:
		Death4();
		break;
	case 3:
		subScene9_1();
		break;
	}
}

void subScene9_3()
{
	cout << "\"Очень смешно\", - сказала девушка и повесила трубку" << endl << "А потом телефон разрядился" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene9_4()
{
	cout << "\"Ну вы и хамло\", - сказала Светлана и бросила трубку" << endl << "Телефон, само собой, разрядился" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene10()
{
	cout << "\"Мужчина, это полиция, говорите, что случилось, иначе я повешу трубку\"" << endl;
	cout << "1. Детка, со мной случилась ты..." << endl;
	cout << "2. Я очнулся в какой-то темной комнате и мне нужна помощь" << endl;
	cout << "3. Подкат к девушке не удался, повесить трубку" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_1();
		break;
	case 2:
		Scene9();
		break;
	case 3:
		subScene10();
		break;
	}
}

void subScene10()
{
	cout << "Ты повесил трубку, а телефон не выдержал твоего позора и разрядился" << endl;
	cout << "1. Обыскать комнату" << endl;
	cout << "2. Съесть телефон" << endl;
	cout << "3. Подумать о том, как ты докатился до такого" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene11()
{
	cout << "Как будем пинать мяч?" << endl;
	cout << "1. Как Роналду" << endl;
	cout << "2. Как Зидан" << endl;
	cout << "3. Как Аршавин" << endl;
	switch (Choice())
	{
	case 1:
		subScene11_1();
		break;
	case 2:
		subScene11_2();
		break;
	case 3:
		subScene11_3();
		break;
	}
}

void subScene11_1()
{
	cout << "Пиная мяч и выполняя крутые финты, ты вскружил себе голову и упал в обморок" << endl << "Очнувшись, ты понял, что лежишь на каком-то люке" << endl;
	cout << "1. Открыть люк" << endl;
	cout << "2. Люк, откройся!" << endl;
	cout << "3. Приложить силу к люку, направленную перпендикулярно поверхности, чтобы открыть его" << endl;
	switch (Choice())
	{
	case 1:
		Scene14();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		Scene14();
		break;
	}
}

void subScene11_2()
{
	cout << "Подойдя к мячу, ты резко двинул головой вперед, потерял равновесие и упал в стену" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Проломить стену аки боец файтинга" << endl;
	cout << "3. Почитать записи в блокноте" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene15();
		break;
	case 3:
		Scene12();
		break;
	}
}

void subScene11_3()
{
	cout << "В попытке с разбегу ударить по мячу, ты промахиваешься и попадаешь ногой в стену" << endl << "Та оказалась картонной" << endl;
	cout << "1. Доломать стену, сделав вид, что так и задумано" << endl;
	cout << "2. Доломать стену с жесточайшим фейспалмом" << endl;
	cout << "3. Почитать записи в блокноте" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		subScene15_1();
		break;
	case 3:
		Scene12();
		break;
	}
}

void Scene12()
{
	cout << "\"Из этой комнаты выхода нет. Ну кроме люка в углу. А еще тут стены картонные" << endl << "Не, ну а так то выхода нет\"" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Открыть люк" << endl;
	cout << "3. Читать дальше" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_1();
		break;
	}
}

void subScene12_1()
{
	cout << "\"Тысячи людей погибли в этой комнате, потому что выхода из нее нет!" << endl << "Кроме люка. И стен\"" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Открыть люк" << endl;
	cout << "3. Читать дальше" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_2();
		break;
	}
}

void subScene12_2()
{
	cout << "\"Тут что, непонятно написано? Люк есть в углу, а стены картонные!" << endl << "Иди уже отсюда, хватит читать\"" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Открыть люк" << endl;
	cout << "3. Читать дальше" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_3();
		break;
	}
}

void subScene12_3()
{
	cout << "\"Ок, дальше не читай, там пусто\"" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Открыть люк" << endl;
	cout << "3. Читать дальше" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_4();
		break;
	}
}

void subScene12_4()
{
	cout << "Ты попытался прочесть следующую страницу, но у тебя ничего не получилось" << endl << "Хмммм, может потому что она пустая?" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Открыть люк" << endl;
	cout << "3. Читать дальше" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_4();
		break;
	}
}

void Scene13()
{
	cout << "Невероятно, но у тебя ничего не получилось" << endl;
	cout << "1. Попинать мяч" << endl;
	cout << "2. Почитать записи в блокноте" << endl;
	cout << "3. Попробовать еще раз" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_1();
		break;
	}
}

void subScene13_1()
{
	cout << "Опять не получилось, как так то?" << endl;
	cout << "1. Попинать мяч" << endl;
	cout << "2. Почитать записи в блокноте" << endl;
	cout << "3. Попробовать еще раз" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_2();
		break;
	}
}

void subScene13_2()
{
	cout << "Снова провал. Хоть немного разумный человек заметил бы тут закономерность" << endl;
	cout << "1. Попинать мяч" << endl;
	cout << "2. Почитать записи в блокноте" << endl;
	cout << "3. Э, слыш, ты кого тут тупым назвал?" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_3();
		break;
	}
}

void subScene13_3()
{
	cout << "Не тупым, а не очень разумным, это разные вещи вообще-то" << endl;
	cout << "1. Попинать мяч" << endl;
	cout << "2. Почитать записи в блокноте" << endl;
	cout << "3. Кинуть со злости лыжу" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_3();
		break;
	}
}

void subScene13_4()
{
	cout << "Кидая лыжу в неизвестно кого, ты попадаешь в стену" << endl << "Лыжа пробила ее насквозь. Хреновая видимо стена" << endl;
	cout << "1. Проломить стену" << endl;
	cout << "2. Побежать сквозь стену за дорогой твоему сердцу лыжей" << endl;
	cout << "3. Почитать записи в блокноте" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene15();
		break;
	case 3:
		Scene12();
		break;
	}
}

void Scene14()
{
	cout << "Открыв люк и спустившись по лестнице, ты оказываешься в каком-то подземелье" << endl << "Перед тобой три одинаково жутких темных прохода" << endl;
	cout << "1. Пойти в левый проход" << endl;
	cout << "2. Пойти в средний проход" << endl;
	cout << "3. Пойти в правый проход" << endl;
	switch (Choice())
	{
	case 1:
		Scene16();
		break;
	case 2:
		Scene17();
		break;
	case 3:
		Scene18();
		break;
	}
}

void Scene15()
{
	cout << "Проломив стену, ты видишь три прохода" << endl << "Внутри первого видны заженные факелы" << endl << "Во втором с потолка льется какая-то жидкость" << endl << "На полу третьего валяются металлические трубы" << endl << "Через что пойдешь?" << endl;
	cout << "1. Огонь" << endl;
	cout << "2. Вода" << endl;
	cout << "3. Трубы" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void subScene15_1()
{
	cout << "Проломив стену и чуть не проломив себе лицо, ты видишь три прохода" << endl << "Внутри первого видны заженные факелы" << endl << "Во втором с потолка льется какая-то жидкость" << endl << "На полу третьего валяются металлические трубы" << endl << "Через что пойдешь?" << endl;
	cout << "1. Огонь" << endl;
	cout << "2. Вода" << endl;
	cout << "3. Трубы" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void subScene15_2()
{
	cout << "Ты видишь три прохода" << endl << "Внутри первого видны заженные факелы" << endl << "Во втором с потолка льется какая-то жидкость" << endl << "На полу третьего валяются металлические трубы" << endl << "Через что пойдешь?" << endl;
	cout << "1. Огонь" << endl;
	cout << "2. Вода" << endl;
	cout << "3. Трубы" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void Scene16()
{
	cout << "Пока ты шел по левому проходу, прямо за твоей спиной вдруг закрылась бетонная дверь" << endl << "Дальше ты можешь идти только налево, прямо или направо" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		Scene22();
		break;
	case 2:
		Scene22();
		break;
	case 3:
		Scene22();
		break;
	}
}

void Scene17()
{
	cout << "Ты пришел в прекраснейшую пещеру, с прудом посередине, в котором плавают три прелестные русалки" << endl << "Они зовут тебя к себе!" << endl << "Но сзади виднеется проход куда-то еще" << endl;
	cout << "1. Мама учила тебя не разговаривать в незнакомыми людьми и нелюдьми, пройти дальше" << endl;
	cout << "2. Присоединиться к русалкам" << endl;
	cout << "3. Спросить, как отсюда выйти" << endl;
	switch (Choice())
	{
	case 1:

		break;
	case 2:
		Death8();
		break;
	case 3:

		break;
	}
}

void Scene18()
{
	cout << "Идя по проходу, ты встретил старика, вокруг него горят два костра, а у его ног стоит корзина с грибами" << endl << "\"Грибов не хочешь отведать? Смотри какие сочные! Белые называются\", - сказал старик" << endl;
	cout << "1. Попробовать грибы" << endl;
	cout << "2. Украсть корзину с грибами" << endl;
	cout << "3. Отказаться и пойти дальше" << endl;
	switch (Choice())
	{
	case 1:
		Death6();
		break;
	case 2:
		Death7();
		break;
	case 3:
		Scene20();
		break;
	}
}

void Scene19()
{
	cout << "Ты оказываешься в комнате с огромной пажылой Годзиллой" << endl << "Учуяв тебя, она начинает просыпаться" << endl;
	cout << "1. Тихонько на цыпочках уйти обратно" << endl;
	cout << "2. Спеть ей колыбельную" << endl;
	cout << "3. Спеть ей \"Пажылой какаге сонг\"" << endl;
	switch (Choice())
	{
	case 1:
		subScene15_2();
		break;
	case 2:

		break;
	case 3:
		Death9();
		break;
	}
}

void Scene20()
{
	cout << "Ты пришел в полузатопленную водой пещеру, густо заставленную странными хижинами на сваях" << endl << "Вдруг на тебя со всех сторон налетают человекоподобные рыбожабы" << endl << "Черт, да ведь это же мурлоки!" << endl;
	cout << "1. Попытаться втереться к ним в доверие, сказав \"Мргл-брл-гл-бл\"" << endl;
	cout << "2. Попытаться втереться к ним в доверие, сказав \"I am murloc!\"" << endl;
	cout << "3. Убежать обратно" << endl;
	switch (Choice())
	{
	case 1:

		break;
	case 2:
		Death10();
		break;
	case 3:
		subScene15_2();
		break;
	}
}

void Scene21()
{
	cout << "Ты приходишь к мосту через глубокую яму, на котором стоит мужик в сером балахоне и орет: \"Ты не пройдешь!\"" << endl;
	cout << "1. Ну ок, пошли обратно" << endl;
	cout << "2. Пройти" << endl;
	cout << "3. Атаковать мужика" << endl;
	switch (Choice())
	{
	case 1:
		subScene15_2();
		break;
	case 2:

		break;
	case 3:

		break;
	}
}

void Scene22()
{
	cout << "Опять три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_1();
		break;
	case 2:
		subScene22_1();
		break;
	case 3:
		subScene22_1();
		break;
	}
}

void subScene22_1()
{
	cout << "И снова три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_2();
		break;
	case 2:
		subScene22_2();
		break;
	case 3:
		subScene22_2();
		break;
	}
}

void subScene22_2()
{
	cout << "Опять три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_3();
		break;
	case 2:
		subScene22_3();
		break;
	case 3:
		subScene22_3();
		break;
	}
}

void subScene22_3()
{
	cout << "И снова три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_4();
		break;
	case 2:
		subScene22_4();
		break;
	case 3:
		subScene22_4();
		break;
	}
}

void subScene22_4()
{
	cout << "Опять три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_5();
		break;
	case 2:
		subScene22_5();
		break;
	case 3:
		subScene22_5();
		break;
	}
}

void subScene22_5()
{
	cout << "И снова три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_6();
		break;
	case 2:
		subScene22_6();
		break;
	case 3:
		subScene22_6();
		break;
	}
}

void subScene22_6()
{
	cout << "Опять три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_7();
		break;
	case 2:
		subScene22_7();
		break;
	case 3:
		subScene22_7();
		break;
	}
}

void subScene22_7()
{
	cout << "И снова три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_8();
		break;
	case 2:
		subScene22_8();
		break;
	case 3:
		subScene22_8();
		break;
	}
}

void subScene22_8()
{
	cout << "Опять три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_9();
		break;
	case 2:
		subScene22_9();
		break;
	case 3:
		subScene22_9();
		break;
	}
}

void subScene22_9()
{
	cout << "И снова три прохода. Куда идем?" << endl;
	cout << "1. Налево наш выбор!" << endl;
	cout << "2. Только вперед!" << endl;
	cout << "3. Направо, вот куда нам нужно!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_10();
		break;
	case 2:
		subScene22_10();
		break;
	case 3:
		subScene22_10();
		break;
	}
}

void subScene22_10()
{
	cout << "За очередным поворотом в конце туннеля виден свет" << endl << "Похоже все, смэрть" << endl << "Хотя стоп, это же солнце! Ты нашел выход" << endl;
	cout << "1. Наконец-то! Свобода!" << endl;
	cout << "2. Найс, че" << endl;
	cout << "3. Заплакать от счастья" << endl;
	switch (Choice())
	{
	case 1:
		WinTheGame();
		break;
	case 2:
		WinTheGame();
		break;
	case 3:
		WinTheGame();
		break;
	}
}
/*
	cout << "" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	switch (Choice())
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	}
*/