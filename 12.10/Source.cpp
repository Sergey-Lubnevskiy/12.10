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
		cout << "��������: " << name << endl;
		cout << "������: " << size << endl;
		cout << "���: " << weight << endl;
		cout << "�������: " << age << endl;
	}
	void Input()
	{
		cout << "������� ��������: ";
		cin >> name;
		cout << "������� �������: ";
		cin >> age;
		cout << "������� ������: ";
		cin >> size;
		cout << "������� ���: ";
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
		cout << "������ ��������: " << trunk << endl;
		cout << "������ �����: " << foot << endl;
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
		cout << "����: " << kind << endl;
		cout << "����: " << feed << endl;
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
		cout << "����: " << color << endl;
		if (speak)
			cout << "���������" << endl;
		else
			cout << "�� ���������" << endl;
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
		cout << "���: " << nick << endl;
		if (train)
			cout << "������" << endl;
		else
			cout << "����" << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	Dragon obj1("������", 563, 3000, 50, 3, 5);
	Beer obj2("�������", 5, 230, 15, "��������������", 769);
	Papugay obj3("�������", 1, 5, 7, "�����", true);
	Kot obj4("���", 2, 17, 10, "�������", true);
	obj1.Print();
	cout << endl;
	obj2.Print();
	cout << endl;
	obj3.Print();
	cout << endl;
	obj4.Print();
}