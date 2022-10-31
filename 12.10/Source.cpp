#include <iostream>
using namespace std;

class Animal
{
	string name;
	double size;
	double weight;
	int age;

public:
	Animal()
	{
		name = "";
		size = 0;
		weight = 0;
		age = 0;
	}
	Animal(string n, double s, double w, int a)
	{
		name = n;
		size = s;
		weight = w;
		age = a;
	}
	void Print()
	{
		cout << "Название: " << name << endl;
		cout << "Размер: " << size << endl;
		cout << "Вес: " << weight << endl;
		cout << "Возраст: " << age << endl;
	}
	void Input()
	{
		cout << "Введите название: ";
		cin >> name;
		cout << "Введите возраст: ";
		cin >> age;
		cout << "Введите размер: ";
		cin >> size;
		cout << "Введите вес: ";
		cin >> weight;
	}
};

class Dragon : public Animal
{
	double trunk;
	double foot;
public:
	Dragon()
	{
		trunk = foot = 0;
	}
	Dragon(string n, double s, double w, int a, double t, double f) :Animal(n, s, w, a)
	{
		trunk = t;
		foot = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Размер туловища: " << trunk << endl;
		cout << "Размер стопы: " << foot << endl;
	}
};

class Beer : public Animal
{
	string kind;
	double feed;
public:
	Beer()
	{
		kind = "";
		feed = 0;
	}
	Beer(string n, double s, double w, int a, string k, double f) :Animal(n, s, w, a)
	{
		kind = k;
		feed = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "раса: " << kind << endl;
		cout << "Корм: " << feed << endl;
	}
};

class Papugay : public Animal
{
	string color;
	bool speak;
public:
	Papugay()
	{
		color = "";
		speak = false;
	}
	Papugay(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		color = c;
		speak = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Цвет: " << color << endl;
		if (speak)
			cout << "Говорящий" << endl;
		else
			cout << "Не говорящий" << endl;
	}
};

class Kot :public Animal
{
	string nick;
	bool train;
public:
	Kot()
	{
		nick = "";
		train = false;
	}
	Kot(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		nick = c;
		train = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "Ник: " << nick << endl;
		if (train)
			cout << "ученый" << endl;
		else
			cout << "неуч" << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	Dragon obj1("Дракон", 563, 3000, 50, 3, 5);
	Beer obj2("Медведь", 5, 230, 15, "антарктический", 769);
	Papugay obj3("Попугай", 1, 5, 7, "синий", true);
	Kot obj4("Кот", 2, 17, 10, "осфальт", true);
	obj1.Print();
	cout << endl;
	obj2.Print();
	cout << endl;
	obj3.Print();
	cout << endl;
	obj4.Print();
}