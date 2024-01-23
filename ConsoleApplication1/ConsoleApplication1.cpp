// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

class Test
{
public:
	Test();
	Test(std::string _name, int _lifes);
	std::string name;
	void setName(std::string _name);
	void setLifes(int _lifes);

	bool operator<(const Test& other) const {
		// Compare based on the 'value' member
		if (lifes != other.lifes) {
			return lifes > other.lifes;
		}
		return name > other.name;
	}
	int lifes;

private:
};

Test::Test(std::string _name, int _lifes):lifes(_lifes), name(_name)
{}



int main()
{
	int playerCnt;
	std::cin >> playerCnt;
	std::vector<Test> players;

	std::string name;
	int life;
	for (int i = 0; i < playerCnt; i++)
	{
		std::cout << "name" << i + 1 << ": ";
		std::cin >> name;
		std::cout << "lifes: ";
		std::cin >> life;
		players.push_back(Test(name, life));
	}

	std::sort(players.begin(), players.end());

	for (int i = 0; i < playerCnt; i++)
	{
		std::cout << players[i].name << " " << players[i].lifes << std::endl;
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
