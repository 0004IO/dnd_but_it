// dnd_but_it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <iterator>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <cstdlib>
#include <windows.h>
#include <Lmcons.h>


using namespace std;

const int max_hp = 50;




//1 = strange (a lot of hp but low def and low damage)
//2 = agility (a lot of def and middle damage)
//3 = mage (Colossal atk but extremely little def and the same hp)

void badCode(int lvl)
{
	cout << "You using BAD CODE!" << endl;
	cout << "..." << endl;
	cout << "Oh shit!" << endl;
}


class Player
{
private:
	int hp;
	int atk;
	int def;
	string name;
public:
	void param(string Name, int lvl, int clas, int exp)
	{
		if (clas == 1)
		{
			hp = 20 + 7 * lvl;
			atk = 6 + 4 * lvl;
			def = 3 + 1 * lvl;
			
		}
		if (clas == 2)
		{
			hp = 12 + 4 * lvl;
			atk = 8 + 6 * lvl;
			def = 4 + 2 * lvl;
			
		}
		if (clas == 3)
		{
			hp = 10 + 2 * lvl;
			atk = 25 + 25 * lvl;
			def = 1 + 0 * lvl;
			
		}
		cout << "Your name is " << Name << endl;
		cout << " " << endl;
		cout << "Your max Hp = " << hp << endl;
		cout << "Your Atk = " << atk << endl;
		cout << "Your Def = " << def << endl;
		cout << "Your lvl = " << lvl << endl;
		cout << "Exp for new lvl: = " << 100 * lvl - exp << endl;
		cout << " " << endl;
	}


	int hp_pl()
	{
		int pl_hp = hp;
		return pl_hp;
	}

	int def_pl()
	{
		int pl_def = def;
		return pl_def;
	}


	int OnDead()
	{
		return 1;
	}


	int attack()
	{
		int damage = atk;
		return damage;
	}
};



class Enemy
{
private:
	int hp;
	int atk;
	int def;
	string name;
public:
	void param(string Name, int lvl, int clas)
	{
		if (clas == 1)
		{
			hp = 11 + 3 * lvl;
			atk = 3 + 3 * lvl;
			def = 1 + 2 * lvl;
			
		}
		if (clas == 2)
		{
			hp = 7 + 2 * lvl;
			atk = 4 + 5 * lvl;
			def = 3 + 2 * lvl;
			
		}
		if (clas == 3)
		{
			hp = 5 + 1 * lvl;
			atk = 10 + 8 * lvl;
			def = 1 + 1 * lvl;
			
		}
		cout << "" << endl;
		cout << "This is " << Name << endl;
		cout << "Hp = " << hp << endl;
		cout << "Atk = " << atk << endl;
		cout << "Def = " << def << endl;
		cout << "" << endl;
	}

	int attack()
	{
		int damage = atk;
		return damage;
	}
	int special(int damage)
	{
		int dam = (damage * atk) / 5;
		return dam;
	}
	int onDeath(int lvl, string Name)
	{
		int exp_1 = 100 * lvl;
		cout << "" << endl;
		cout << "You kill " << Name << endl;
		cout << "" << endl;
		return exp_1;
	}

	int hp_en()
	{
		int pl_hp = hp;
		return pl_hp;
	}

	int def_en()
	{
		int pl_def = def;
		return pl_def;
	}
};


class Lord
{
private:
	int hp;
	int atk;
	int def;
	string name;
public:
	void param(string Name, int lvl, int clas)
	{
		if (clas == 1)
		{
			hp = 100 + 5 * lvl;
			atk = 10 + 5 * lvl;
			def = 2 + 5 * lvl;

		}
		if (clas == 2)
		{
			hp = 50 + 4 * lvl;
			atk = 11 + 5 * lvl;
			def = 5 + 5 * lvl;

		}
		if (clas == 3)
		{
			hp = 25 + 2 * lvl;
			atk = 25 + 25 * lvl;
			def = 1 + 1 * lvl;

		}
		cout << "" << endl;
		cout << "This is lord " << Name << endl;
		cout << "max Hp = " << hp << endl;
		cout << "Atk = " << atk << endl;
		cout << "Def = " << def << endl;
		cout << "" << endl;
	}
	int attack()
	{
		int damage = atk;
		return damage;
	}
	int special(int damage)
	{
		int dam = (damage * atk) / 5;
		return dam;
	}
	int onDeath(int lvl, string Name)
	{
		int exp_1 = 1000 * lvl;
		cout << "" << endl;
		cout << "You kill " << Name << endl;
		cout << "" << endl;
		return exp_1;
	}

	int hp_lord()
	{
		int pl_hp = hp;
		return pl_hp;
	}

	int def_lord()
	{
		int pl_def = def;
		return pl_def;
	}
};



void prolog(string name)
{
	string u;
	system("cls");
	cout << "Thousands of centuries ago, absolute void exploded into our world and fully engulfed it." << endl;
	cout << "Destroying everything that ever existed." << endl;
	cout << "But after a long, long time, the world began to return to the state it was in long before the disaster." << endl;
	cout << "..." << endl;
	cout << "So far this is the only thing you can remember " << name << endl;
	cout << "The world in its current state is incredibly cruel and dangerous" << endl;
	cout << "The most terrible and dangerous creatures that have ever lived in this world walk around it." << endl;
	cout << "Are you ready to take a step into the abyss to find out what the fate of this world is " <<name << "?" << endl;
	cin >> u;

	if (u == "No" or u == "no")
	{
		system("cls");
		cout << "..." << endl;
		exit(0);
	}
	else
		cout << "..." << endl;
		cout << "I hope you don't regret your choice." << endl;
		cout << "Good luck" << endl;
		cout << " " << endl;
		system("pause");
}


void episode_1()
{
	system("cls");
	cout << "A dark fog surrounds you, the abyss looks straight into your soul, you take a step forward..." << endl;
	cout << "A veil as black as death closes your eyes and it seems that this is the very moment when you are on the verge of death" << endl;
	cout << "It would seem that the nightmare has already completely consumed you." << endl;
	cout << "And sudden calm, absolute silence, not a single sound reaches you, not a single ray of sun, only an ocean of emptiness and past, silent memories" << endl;
	cout << "Then a thought flashed through your mind: it should have been declined, it was reckless" << endl;
	cout << "But suddenly you hear a quiet whisper, with time it becomes louder, then another whisper and another" << endl;
	cout << "And now you are no longer in the abyss, all those hundreds, thousands, millions of events and memories that millions of people once experienced are rushing past." << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	system("pause");
}




void episode_2()
{

}




int main()
{





	int exp = 0, lvl = 1, a;
	string nam;
	int clan; // 1 - strenght; 2 - agility; 3 - mage
	cout << "Salutations dear user" << endl;
	cout << "" << endl;

	cout << "Choose name " << endl;
	cin >> nam;
	if (nam == "Death") 
	{
		cout << "..." << endl;
		system("cls");
		main();
	}
	if (nam == "Soul")
	{
		cout << "This name not found" << endl;
		return 0;
	}
	if (nam == "Error")
	{
		system("color 4");
		system("Tree C:/");
		
	}

	

	else
	prolog(nam);
	system("cls");
	cout << "Choose ypur class" << endl;
	cout << "1 - Strenght" << endl;
	cout << "2 - Agility" << endl;
	cout << "3 - Mage" << endl;
	cin >> clan;
	Player pl;
	pl.param(nam, lvl, clan, exp);
	int hp_pl = pl.hp_pl();

	episode_1();


	Enemy Lost;														// LOST
	Lost.param("Lost", 1, 2);
	int hp_en = Lost.hp_en();

	while(hp_pl > 0 and hp_en > 0)
	{ 
		hp_pl = hp_pl - Lost.attack() * 3 / pl.def_pl();
		hp_en = hp_en - pl.attack() * 3 / Lost.def_en();
		cout << "" << endl;
		cout << "You hp = "<< hp_pl << endl;
		cout << "Lost hp = " << hp_en << endl;
		system("pause");
	}

	if (hp_pl <= 0) 
	{ 
		system("cls"); 
		system("color 4"); 
		cout << "Game over " << nam << endl; 
		system("pause"); 
		return 1;
	}
	
	if (hp_en <= 0)
	{ 
		cout << "Win" << endl;
		exp = Lost.onDeath(6, "Lost");
		if (100 * lvl - exp <= 0) { lvl = exp / 100; exp = 0; hp_pl = pl.hp_pl();}
		pl.param(nam, lvl, clan, exp);
	}																//LOST
	








	Lord Death;														// DEATH
	Death.param("Death", 1, 1);
	int hp_lord = Death.hp_lord();

	while (hp_pl > 0 and hp_lord > 0)
	{
		hp_pl = hp_pl - Death.attack() * 2 / pl.def_pl();
		hp_lord = hp_lord - pl.attack() * 2 / Death.def_lord();
		cout << "" << endl;
		cout << "You hp = " << hp_pl << endl;
		cout << "Death hp = " << hp_lord << endl;
	}

	if (hp_pl <= 0) 
	{  
		system("color 4"); 
		cout << "Game over " << nam << endl; 
		return 1;
	}


	if (hp_lord <= 0)
	{
		cout << "Win" << endl;
		exp = Death.onDeath(10, "Death");
		if (100 * lvl - exp <= 0) 
		{ 
			lvl = exp / 100;
			exp = 0;
			hp_pl = pl.hp_pl(); 
		}
		pl.param(nam, lvl, clan, exp);
	}																//DEATH


}
