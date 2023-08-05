#include <iostream>
#include<iomanip>
#include<string>
//#include<cmath>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int count = str.size();
	int counter=0;
	int i = 0;
	
	while (i<count)
	{
		while (str[i] == ' ')  // 忽略空格
			i++;
		if (i == count)   // 添加终止条件，避免越界
			break;
		while (str[i] != ' ' && i < count)  // 统计单词个数
			i++;
		counter++;
	}
	cout << counter << endl;
	system("pause");
	return 0;
}
