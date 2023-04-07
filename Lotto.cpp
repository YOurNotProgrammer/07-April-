#include <iostream>
#include<cstdlib> //rand(), srand()
#include<ctime> //time()
#include <random>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int Count = 0;
	int Lotto[45];

	for (int i = 0; i < 45; i++) 
	{
		Lotto[i] = i + 1;
	}

	do 
	{
		int Num = rand() % 45;
		if (Lotto[Num] != 0) 
		{
			cout << Lotto[Num] << endl;
			Lotto[Num] = 0;
			Count += 1;
		} 
	} while (Count != 6);

	return 0;
}