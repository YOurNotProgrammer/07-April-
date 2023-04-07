#include <iostream>
#include<cstdlib> //rand(), srand()
#include<ctime> //time()
#include <random>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	//random_device rd;
	//mt19937 mt(rd());
	//uniform_int_distribution<> lotto(1, 45);

	//cout << lotto(mt) << endl;
	int count = 0;
	int lotto[45];

	for (int i = 0; i < 45; i++) 
	{
		lotto[i] = i + 1;
	}

	do 
	{
		int Num = rand() % 45;
		if (lotto[Num] != 0) 
		{
			cout << lotto[Num] << endl;
			lotto[Num] = 0;
			count += 1;
		} 
		else
		{
		}
	} while (count != 6);

	return 0;
}