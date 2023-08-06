#include<iostream>
#include<string>
#include<cstddef>
using namespace std;

int main()
{

	string str;
	getline(cin, str);
	size_t strSize= str.size();
	size_t SubSize = 0;
	
	while (SubSize < strSize)
	{
		while (SubSize<strSize&&str[SubSize] == ' ')SubSize++;
		size_t SecondSize = SubSize;
		//cout <<"第一个字母位置" << SubSize << endl;
		while (SecondSize<strSize&&str[SecondSize] != ' ')SecondSize++;
		for (size_t c1 = SubSize, c2 = SecondSize-1; c1 < c2; c1++, c2--)
		{
			char temp;
			temp = str[c1];
			str[c1] = str[c2];
			str[c2] = temp;
		}
		SubSize = SecondSize;
	}

	for (size_t c1 = 0, c2 = strSize - 1; c1 < c2; c1++, c2--)
	{
		char temp;
		temp = str[c1];
		str[c1] = str[c2];
		str[c2] = temp;
	}
	cout << str;
}