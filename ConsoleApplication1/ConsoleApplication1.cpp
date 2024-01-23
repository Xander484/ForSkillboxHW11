// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

class Animal
{
public:
	virtual void voice() {
		std::cout << "unknown\n";
	}
};

class Dog : public Animal {
public:
	void voice() override {
		std::cout << "vaf vaf\n";
	}
};
class Cat : public Animal {
public:
	void voice() override {
		std::cout << "meow meow\n";
	}
};
class Sheep : public Animal {
public:
	void voice() override {
		std::cout << "Baaa baaa\n";
	}
};

int main()
{
	Animal** a = new Animal*[3];
	a[0] = new Dog;
	a[1] = new Cat;
	a[2] = new Sheep;

	for (int i = 0; i < 3; i++)
	{
		a[i]->voice();
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
