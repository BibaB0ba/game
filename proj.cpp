//#include "stdafx.h"
#include <iostream>
#include <stdio.h>
//#include <windows.h>
#include <string>
using namespace std;
char bee;
string name;//
int key;
////Предметы
//int t=3600;
bool nihrena = true;
bool zanaveska = false;
bool shpric = false;
bool uchebnik = false;
bool siga = false;
bool klu4 = false;
bool pass = false;
////Места
bool miss_lesson = false;
bool lesson = true;
bool zavhoz = true;
bool sport = false;
bool summo = false;
bool gop = false;
bool obisk = false;
////


///system comander
/*void timeleft()
{	
	cout<<endl;
	min=t/60;
	cout<<min<<":"<<t%60<<" left"<<endl;
	cout<<endl;
}*/
void clean() {
	printf("\e[1;1H\e[2J");
	//system("cls");
}

void items(int key){
	clean();
	if (key == 9)
	{	
		cout<<"----------your items----------"<<endl;
		cout<<endl;
		if (zanaveska == true) cout<<" Ты в халате из занавески"<<endl;
		else if (nihrena == true) cout<<" Ты - голое быдло"<<endl;
		else cout<<" Ты в пацанском шмоте"<<endl;
		cout<<endl;
		if (shpric == true) 						cout<<"Шприц c цветной баландой"<<endl;
		if (uchebnik == true)						cout<<"Учебник по женским трудам"<<endl;
		if (siga == true)  						cout<<"Сиги \"Marlboro Lights\""<<endl;
		if (klu4 == true)   						cout<<"Какой-то обдристаный ключ"<<endl;
		if (pass == true)   						cout<<"Пароль для сумоиста"<<endl;
		cout<<"---------press any key--------"<<endl;
		cin>>bee;
	}
}


void ZERO()
{

 nihrena = true;
 zanaveska = false;
 shpric = false;
 uchebnik = false;
 pass=false;
 zavhoz = true;
 sport = false;
 summo = false;
 gop = false;
 obisk =false;
 siga=true;
 klu4=true;
	
}
void telo()
{
	cout << "Говорят, в современном общесве не принято шататься по школам без одежды" << endl;
}

void ztg()
{
	cout << "Press any key" << endl;
	cin >> bee;

}

void pusto()

{

	cout << "NE Gусто" << endl;
}

void gamover(int over)
{
	if (over == 0)cout<<"Ваши с виду адекватные действия по неизвестной причине привели к плачевному результату , try again..."<<endl;
	if (over == 1)cout<<"Вас посадили на бутылку гопники"<<endl; 
}

void konsevki(int x) {
	if (x == 1) cout << "На ваш смех сбежалась толпа, привлеченная бьющимся конвульсиях телом. Да, рофель был знатный, но в психушке так уже не посмеешься..." << endl << "Концовка 1: #ROFL" << endl;
	if (x == 2) cout << "Концовка 2: #NE_SUDI_O_KNISHKE_PO_OBLOSHKE" << endl;
	if (x == 3) cout << "Концовка 3: #PRI_KONCHIL_NA_STOLE" << endl;
}
////


int main() {
//	setlocale(LC_ALL, "Russian");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
	
	cout << "ВАС ПРИВЕТСТВУЕТ shkala simulator" << endl;
	cout << "lol, 9 na eti knopki ewe v 3 goda TbIKA/\\" << endl;
	ztg();
	im9:
	clean();
	cout <<"Как тебя кличут?"<< endl;
	cin.get();
	getline(cin, name);
	clean();
		
	cout <<"Вас зовут "<<name<<"?"<<endl;
	cout <<"1)Да"<<endl;
	cout <<"2)Нет"<<endl;
	cin >> key; 
	
	if (key!=1) goto im9;

	
	
	
	//goto let_the_game_begin;
	












	

	let_the_game_begin:
	clean();
	 
	cout << "После бурной, как бурьян, тусы с андеграундами вы очнулись в шкалке без одежды" << endl;
	cout << "Вы не помните что происходило вчера ночью, но вам очень хотелось бы узнать." << endl;
	cout << "Последнее ваше воспоминание - вы отправились вечером в магазин за хлебом." << endl;
	cout << "Тут какая-то стройка, а попадать на глаза работягам - последнее дело " << endl;
	cout << "Ну и чего делать?" << endl;
	cout << "1)Поискать одежку" << endl;
	cout << "2)Орнуть" << endl;
	cout << "3)Осмотреться" << endl;
	cin >> key;
	items(key);

	if (key == 1)
	{
		clean();
		if (zanaveska == false)
		{
			zanaveska = true;
			nihrena = false;
			cout << "Вы обвернулись в занавеску , вам тепло и уютно" << endl;
			ztg();
			clean();
			goto let_the_game_begin;

		}


		else
		{
			cout << "Ничего нет" << endl;
			ztg();
			clean();
			goto let_the_game_begin;

		}
		clean();

	}
	if (key == 2)
	{
		clean();
		konsevki(1);
		goto cenok;

	}
	if (key == 3)
	{
		clean();
		cout << "Проучившись в этом месте 9 лет , вы стали худо-будно разбираться в его географии. Вроде 3 этаж. Рядом только зал физры , кабинеты и фикус. На остальном этаже ремонт" << endl;
		ztg();
		goto kabinu;
	}
	clean();
	goto let_the_game_begin;














	///////к2
kabinu://2
	clean();
	 
	cout << "Куда пойдем ?" << endl;
	cout << "1)Зал физры" << endl;
	cout << "2)Кабинеты" << endl;
	cout << "3)Фикус" << endl;
	cout << "4)Спуститься вниз" << endl;
	cin >> key; 
	items(key);
	if (key == 1)
	{
		clean();
		goto sportzal;
	}
	if (key == 2)
	{
		clean();
		goto kab4ik;
	}
	if (key == 3)
	{
		clean();
		goto fikus;
	}
	if (key == 4)
	{
		clean();
		goto morek;
	}
	
	clean();
	goto kabinu;















morek:
if (nihrena == true)
	{
		telo();
		goto cenok;
	}
	summo = true;
	clean();
	 
	cout<<"Какая-то сумоистская морда заслонила весь проход и требует пароль"<<endl;
	cout<<"1)Поробовать пройти с боем"<<endl;
	cout<<"2)Назад на 3 этаж"<<endl;
	cout<<"3)Сказать пароль"<<endl;
	cin >> key; items(key);
	
	if (key==1)
	{	
		clean();
		cout<<"Хорошая попытка, "<<name<<", но неудачная"<<endl;
		cout<<"Этот газмяс поглотил тебя "<<endl;
		goto cenok;
		
	}
	if (key==2) goto kabinu;
	if (key==3)
	{	
		clean();
		cout<<"Какой пароль?"<<endl;
		cout<<"1)Попробовать позже"<<endl;
		cout<<"2)\"Миру-мир,жиру-жир\""<<endl;
		cout<<"3)\"Рю вага ва таки во курай\""<<endl;
		if (pass==true) cout<<"4)\"Без дудоса мы никто\""<<endl;
		cin >> key; items(key);
		if (key==1) goto morek;
		if ((key==2)||(key==3))
		{
			gamover(2);
			goto cenok;
		}
		if ((key==4)||(pass==true)){cout<<"Обойдя эту тушу ты проходишь в холл 2 этажа"<<endl; goto kabinu2; }
		
	}
goto morek;	












	///////к2
sportzal:
	clean();
	 
	if (sport == true) cout << "По НЕИЗВЕСТНЫМ причинам шмот более не расположен в данной резиденции" << endl;
	else
	{
	lock:
		sport = true;
		cout << "Вы нашли много потного шмота" << endl;
		if (zanaveska == true)
		{

			cout << "1)Надеть потный шмот" << endl;
			cout << "2)Мне и в занавеске нормас" << endl;
			cin >> key; items(key); 
			clean();
			if (key == 1) { cout << "Оделся красыво : кепка 228, майка алкашка, штаны \"дискворед\" , боты - адики без подошв -,но все это пасет школьниками из 2 класса" << endl; zanaveska = false; }
			if (key == 2) {cout << "Как последний самолюбивый поц, вы все еще в зановеске, зато она неплохо сидит" << endl; goto kabinu;}
			clean();
			goto lock;
		}

		else { cout << "Оделся красыво : кепка 228, майка алкашка, штаны \"дискворед\", боты - адики без подошв,но все это пасет школьниками из 2 класса" << endl; nihrena = false; }
	}
	ztg();
	clean();
	goto kabinu;













fikus:
	clean();
	 
	if (shpric == true) pusto();
	else {
		cout << "Хорошенько порывшсь в черноземе, ты откопал шприц, наполненный странной субстанцией цвета RGB 112 78 235" << endl;
		shpric = true;
	}
	ztg();
	clean();
	goto kabinu;















kab4ik:
	clean();
	 
	cout << "Тут 301, 302 и 303" << endl;
	cout << "1)301" << endl;
	cout << "2)302" << endl;
	cout << "3)303" << endl;
	cout << "4)back" << endl;
	cin >> key; items(key); 
	if (key == 1)
	{
		clean();
		goto k301;
	}

	if (key == 2)
	{
		clean();
		goto k302;
	}
	if (key == 4)
	{
		clean();
		goto kabinu;
	}
	if (key == 3)
	{
		clean();
		goto k303;
	}
	clean();
	goto kab4ik;










k301:
clean();
 
	cout << "В кабинете несколько парней гоповатого вида" << endl;
	cout << "1)Заговорить" << endl;
	if (gop == false) cout << "2)Залететь с криком \"ДАРОВА РЁБЗЯ\"" << endl;
	cout << "3)Атайти" << endl;
	
	cin >> key;
	items(key);
	if (key == 1)
	{
		if (gop == true) goto animeshniki;
		clean();
		goto gopstop;
	}
	if ((key == 2)&&(gop == false))
	{
		clean();
		gamover(1);
		goto cenok;
	}
	if (key == 3)
	{
		clean();
		goto kab4ik;
	}
	
	
	goto k301;













gopstop:
clean();
 
	if (zanaveska == true)
	{
		cout << "Четкие ребята разбирается в одежке и твоя зановеска им не по нраву. Тебе пояснили за шмот. \
Теперь ты знаешь ,что и как надевать на выход, но в больничке эти знания не понадобятся" << endl;
		goto cenok;
	}
	else if (nihrena == true)
	{
		cout<<"Вы были слишком голые, а гопники слишком злые"<<endl;
		goto cenok;
	}

	cout << "Маскировка вроде помогла. Как минимум они не стали сажать тебя на бутылку." << endl;
	cout << "Чтобы они ничего не заподозрили, тебе нужно резко объясниться" << endl;
	cout << "1)Жизнь - ворам, смерть - мусорам!!!" << endl;
	cout << "2)2D Рулит!!!" << endl;
	//       cout<<"3)Приветствую братьев по цеху" <<endl;
	cin >> key; items(key);

	if (key == 1)
	{
		clean();
		cout << "Четкие ребята оказались анимешниками. Они достали катаны и порубили быдло на куски." << endl;
		konsevki(2);
		goto cenok;
	}
	if (key == 2)
	{
		clean();
		cout << "-Опа, наконец нормальный кун пожаловал, вайфу тебе!" << endl;
		goto animeshniki;
	}
	clean();
	goto gopstop;











animeshniki:
clean();
 
	gop = true;
	  
	cout << "Походу ты нравишься ребятам, в хорошем смысле" << endl;

	cout << "1)Уйти" << endl;
	if (uchebnik == false)cout << "2)Попросить учебник" << endl;
	if ((summo == true)&&(pass==false)) cout << "3)Спросить пароль" << endl;
	cin >> key; items(key);
	if (key == 1)
	{
		clean();
		goto kab4ik;
	}
	if ((key == 2)&&(uchebnik==false))
	{
		clean();
		uchebnik = true;
		cout << "Главный поц пнул мелкого , а тот достал из-под полы мелкую задрипанную книжонку." << endl;
		cout << "Это оказался учебник по женским трудам..." << endl;
		ztg();
		goto animeshniki;
	}
	if ((key == 3)&&(summo == true)&&(pass == false))
	{clean();
		cout<<"О, я вижу ты уже познакомился с Джованни"<<endl;
		cout<<"Пароль - \"Без дудоса мы никто\""<<endl;
		pass=true;
		ztg();
		goto animeshniki;
	}
	
goto animeshniki;













k302:
	clean();
	 
	if (nihrena == true) { clean(); telo(); cout << "В кабинете был завхоз, а ты был без одежды. Он взял тебя на столе" << endl; konsevki(3); goto cenok; }
	else if (zanaveska == true)
	{
		clean();
		cout << "В кабинете был завхоз. Увидев элегантно обвязанную вокруг тебя казенную зановеску , \
он схватился за нее , но тебе удалось выскользнуть в коридор без нее. " << endl;
		zanaveska = false;
		nihrena = true;
		ztg();
		goto kab4ik;
	}
	 if (zavhoz == true)
	 {//елси завхоза не нагнули
		cout << "В кабинете оказался завхоз." << endl;
		cout << "1)Уйти." << endl;
		cout << "2)Обыскать кабинет." << endl;
		cin >> key; items(key);
		if (key == 1) {
			clean();
			goto kab4ik;
		}

		if (key == 2) {
		    clean();
			cout <<"- "<<name<<", вали, пока можешь! Если вчерашнее еще хоть раз повторится, я тебе устрою такой ХХХ "<< endl;
			cout << "1)Уйти" << endl;
			cout << "2)Подумать как его устранить." << endl;
			cin >> key; items(key);

			if (key == 1) { clean(); goto kab4ik; }
			if (key == 2) { clean(); goto nagib_zavxoza; }
		}
	}
	
	
	else if(zavhoz == false) {/// зафхоза уже нагнули
		cout << "Теперь кабинет свободен" << endl;
		cout << "1)Обыскать кабинет" << endl;
		cout << "2)Выйти в коридор" << endl;
		cin >> key; items(key);

		if (key == 1) {
			clean();
			if (obisk==false)
			{clean();
				cout << "Завхоз забыл пиджак в кабиненте" << endl;
				cout << "Проверив карманы ты находишь пачку Marlboro Lights и какой-то ржавый ключ" << endl;
				siga = true;
				klu4 = true;
				obisk = true;
				ztg();
			}
			else
			{
				clean();
				pusto();
				ztg();
			}
		}
		if (key == 2) goto kabinu;
		
	}
	
	goto k302;












nagib_zavxoza:
	clean();
	 
	cout << "Вы придумали несколько вариантов:" << endl;
	cout << "1)Пробить в чело" << endl;
	if (gop == true) cout << "2)Позвать на помощь поцыков из 301" << endl;
	if (shpric == true) cout << "3)Подкинуть шприц из фикуса и позвать ментов" << endl;
	cout << "4)Выйти в коридор" << endl;
	cin >> key; items(key);

	if (key == 1) {
		clean();
		cout << "Пробил ты знатно, но завхос четкой вертухой направил вас прямо в открытое окошко" << endl;
		cout<<"Перелом 54 костей привел к смерте"<<endl;
		goto cenok;
	}

	if ((key == 2) && (gop == true)) {
		clean();
		cout << "Ты залетаешь к братушкам " << endl;
		cout << "- Ребята, нужна хелпа с хейтером конкретным!" << endl;
		cout <<"- "<<name<< ", ты красава, конечно, но иди в пень, мы новую серию досматриваем." << endl;
		ztg();
		goto kab4ik;
	}

	if ((key == 3) && (shpric == true)) {
		zavhoz = false;
		shpric = false;
		clean();
		cout << "Вы подкинули шприц и не медля вызвали ментов." << endl;
		cout << "Они знали о всех его \"шалостях\" и найденый у него шприц сыграл решающую роль" << endl;
		cout << "Его забрали в тюрягу и делали с ним то, что он обычно делал со школьницами (и не только)..." << endl;
		ztg();
		clean();
		goto k302;
	}

	if (key == 4) { clean(); goto kab4ik; }
goto nagib_zavxoza;







k303:
	clean();
	 
	cout<<"Класс с виду пуст"<<endl;
	cout<<"1)Уйти"<<endl;
	cout<<"2)Обыскать класс"<<endl;
	cin >> key; items(key);
	
	if(key == 1) goto kab4ik;
	
	if(key == 2){
		
		clean();
		 
		cout<<"1)Посмотреть под партами"<<endl;
		cout<<"2)Проверить шкаф"<<endl;
		cout<<"3)Открыть тумбочки"<<endl;
		cin >> key; items(key);
		
		if (key == 1){
			clean();
			cout<<"Одни жевачки и бумажки"<<endl;
			ztg();
			goto k303;
		}
		
		if (key == 2){
			clean();
			cout<<"В шкафу одни бутылки и окурки, но за ним как будто какой-то проход"<<endl;
			cout<<"1)Выйти"<<endl;
			cout<<"2)Попытаться сдвинуть шкаф"<<endl;
			cin >> key; 
			items(key);
			
			if(key == 1)goto k303;
			if(key == 2)goto proxod_za_shkafom;
		}
		
		if (key == 3){
			clean();
			cout<<"В тумбочке iphone 6, который никому не нужен"<<endl;
			ztg();
			goto k303;
		}
		
		
	}
goto k303;
	
 
 

proxod_za_shkafom:
	clean();
	 
	//if(summo = true)условие что жирный согласен сдвинуть шкаф
	cout<<"Кажется шкаф тяжеловат для вас. Кто-то столь массивный как и шкаф смог бы его сдвинутьт..."<<endl;
	cout<<"1)Назад"<<endl;
	cin >> key; items(key);
	goto k303;
	
	
	
//------------------------------------------------------PART II------------------------------------------------------------------------------	
	
	
kabinu2:
	clean();
	if (lesson = true)
	{
		cout<<"Башка трещит и почки уже не новые, но жизнь продолжается"<<endl;
		cout<<"Прозвенел звонок и орда школобеосов ринулась на уроки"<<endl;
		cout<<"Ты бы тоже должен быть в этой толпе, но есть проблема:"<<endl;
		cout<<"ТЫ НЕ ЗНАЕШЬ, КАКУЮ(ОЙ) КАБИНУ(ЕТ) ИСКАТЬ"<<endl;
		cout<<"Тебе срочняком надо куда-то рашить (если вы загляните не в ваш класс вы сокрее всего опоздаете и огребете)"<<endl;
		cout<<endl;
	}
	cout<<"Куда пойдем?"<<endl;
	cout<<"1)К кабинам ультраправого сектора"<<endl;
	cout<<"2)К кабинетам по центру "<<endl;
	cout<<"3)К кабинетам левого крыла"<<endl;
	if (lesson = true) cout<<"4)Рашить к расписанию"<<endl;
	cout<<"5)На 3 этаж"<<endl;
	cin>>key;items(key);
if (key==1)
{
	goto right2;	
}
if (key==2)
{
	goto mid2;	
}
if (key==3)
{
	goto left2;	
}
if ((key==4)&&(lesson==true))
{
	goto timetable;	
}
if (key==5)
{
	goto kabinu;	
}
goto kabinu2;	





timetable:
	cout<<"Вы зарашировали к расписанию."<<endl;
	cout<<"Однако там где должен быть ваш урок почему-то воткнут именной нож с надписью \"СПАСИБО ДРУЗЬЯ\""<<endl;
	cout<<"Хм, что бы это могло значить..?"<<endl;
	cout<<"1)Назад"<<endl;
	cin>>key;
	if(key == 1) goto kabinu2;///discord go
goto timetable;




	
left2:
clean();
cout<<"Тут 201, 302 и 203"<<endl;//  9sno
cout<<"1)В 201"<<endl;
cout<<"2)Залететь(от Васи) в 202"<<endl;
cout<<"3)В 203"<<endl;
cout<<"4)Выйти"<<endl;
cin>>key;
items(key);
if ((key == 1)||(key == 2)||(key == 3))miss_lesson = true;
if (key==1)
{
	///goto;	discord
}
if (key==2)
{
//	goto;	
}
if (key==3)
{
//	goto;	
}
if (key==4)
{
	goto kabinu2;	
}
goto left2;










mid2: 
clean();
cout<<"Тут 204, 205 и 206"<<endl;//  9sno
cout<<"1)Углубиться в 204"<<endl;
cout<<"2)Перешагуть порог 205"<<endl;
cout<<"3)Использовать вход в 206"<<endl;
cout<<"4)Выйти"<<endl;
cin>>key;
items(key);
if ((key == 1)||(key == 2)||(key == 3))miss_lesson = true;
if (key==1)
{
//	goto;	
}
if (key==2)
{
//	goto;	
}
if (key==3)
{
//	goto;	
}
if (key==4)
{
	goto kabinu2;	
}
goto  mid2;









right2:
clean();
cout<<"Тут 207, 208 и 209"<<endl;//  9sno
cout<<"1)Проникнуть в 207"<<endl;
cout<<"2)Вторгнуться в 208"<<endl;
cout<<"3)Ввалиться в 209"<<endl;
cout<<"4)Выйти"<<endl;
cin>>key;
items(key);
if (key != 1)miss_lesson = true;
if (key==1)
{
	goto k207;	
}
if (key==2)
{
//	goto;	
}
if (key==3)
{
//	goto;	
}
if (key==4)
{
	goto kabinu2;	
}
goto right2;

///////////FOR RIGHT 2
k207:
clean();
	if(lesson == true)
	{
		cout<<"Да, похоже здесь ваш урок"<<endl;
		if (miss_lesson == true){
			cout<<"Вы все же опоздали."<<endl;
			cout<<""<<endl;
		}
		else 
		cout<<"ZDES UROK, I ETO TOCHO"<<endl;
		cout<<"У вас есть выбор сесть со шкурой горной козы или с каким-то козырным тузом (в этой раздаче бубенцы - козырь)  "<<endl;
		cout<<"1)Сесть со шкурой"<<endl;
		cout<<"2)Сесть с бубенцовым"<<endl;
		cin>>key;
		
		if (key == 1)
		{
			cout<<"Шкура показалась знакомой, но ты не мог вспомнить где ее видел"<<endl;
			cout<<"1)Создавать вид рабочей обстановки весь урок"<<endl;
			if (siga == true)cout<<"2)Предложить сигу"<<endl;
			cin>>key;
		if((key == 2)(siga == true))
		{
			
			
		}
		if (key == 2)
		{
			cout<<"Бубенцовый показался знакомым, но ты не мог вспомнить где его видел"<<endl;
			cout<<"1)Создавать вид рабочей обстановки весь урок"<<endl;
			if (siga == true)cout<<"2)Предложить сигу"<<endl;
			cin>>key;
		if((key == 2)(siga == true))
		{
		cout<<"Похоже вы плохо разбираетесь в сигах :( такие ровным поцам не по нраву"<<endl;
		gamover(1);
		goto cenok;
		}
		
		
		
		if((key == 2)(siga == true))
		
		cout<<"Елена Гранатомётовна пошла за топором "<<endl;
		cout<<"1)Лизнуть качелю"<<endl;
	}
goto k207;
//////////








cenok:
	ZERO();
	cout<<endl;
	cout<<endl;
	cout << "--------------THE END--------------" << endl;
	cout<<endl;
	cout<<endl;
	cout << "Enter 123 to restart" << endl;
	cin >> key;
	if (key==123) goto let_the_game_begin;
	else goto cenok;
	return 0;
}
