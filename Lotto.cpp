#include <iostream>
#include<cstdlib> //rand(), srand()
#include<ctime> //time()
#include <random>

using namespace std;

int main() 
{
	//srand((unsigned int)time(NULL));

	//int a = rand() % 46;
	//int b = rand() % 46;
	//int c = rand() % 46;
	//int d = rand() % 46;
	//int e = rand() % 46;
	//int f = rand() % 46;

	//cout << a << endl << b << endl << c << endl << d << endl << e << endl << f;

	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<> lotto(1, 45);

	cout << lotto(mt) << endl;
	cout << lotto(mt) << endl;
	cout << lotto(mt) << endl;
	cout << lotto(mt) << endl;
	cout << lotto(mt) << endl;
	cout << lotto(mt) << endl;

	return 0;
}