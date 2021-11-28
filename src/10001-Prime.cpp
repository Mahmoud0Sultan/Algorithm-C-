#include <iostream>
using namespace std;

void GetPrimeNo(int primeNo)
{
	for (int j = 0, counter = 1;counter <= primeNo; j++)
	{
		int condition = 0;
		for (int k = 1; k <= j && condition <= 2; k++)
		{
			if (j % k == 0) { condition++; }
			if (condition == 2 && j != k) { condition++;break; }
		}
		if (condition == 2) {
			cout << counter++ << " : " << j << endl;
		}
	}
}


int main()
{
	GetPrimeNo(1000);
	return 0;
}
