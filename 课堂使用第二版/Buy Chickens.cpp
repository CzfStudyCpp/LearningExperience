#include <iostream>
#include<iomanip>
//#include<cmath>
using namespace std;
int main()
{
	const int RoosterPrice = 50;
	const int HenPrice = 30;
	const int ChickPrice =10 ;
	const int budget = 1000;
	const int AllNum = 100;
	int counter = 0;
	for (int RNum = 1; RNum <= 20; RNum++)
	{
		for (int HNum = 1; HNum <= 33; HNum++)
		{
			for (int CNum = 1; CNum <= 33; CNum++)
			{
				int PriceTemp = RNum * 50 + HNum * 30 + CNum * 10;
				int NumTemp = RNum + HNum + CNum*3;
				if (PriceTemp == 1000 && NumTemp == 100)
				{
					counter++;
					cout << "公鸡数量" << RNum << " " << "母鸡数量" << HNum << " " << "小鸡数量" << CNum * 3 << " "<<endl;
				}
				
				}
			}
		
	}
	cout << counter<<endl;
	system("pause");
	return 0;
}
