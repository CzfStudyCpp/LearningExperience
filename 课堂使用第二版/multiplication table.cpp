#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <=9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if(j!=1)
			cout << j << "x" << i << "=" << setw(2) << left << i * j << " ";
			else
				cout << j << "x" << i << "=" << setw(1) << left << i * j << " ";
		}
		cout << endl;
	}
}