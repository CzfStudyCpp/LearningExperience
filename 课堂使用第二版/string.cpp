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
		while (str[i] == ' ')  // ���Կո�
			i++;
		if (i == count)   // �����ֹ����������Խ��
			break;
		while (str[i] != ' ' && i < count)  // ͳ�Ƶ��ʸ���
			i++;
		counter++;
	}
	cout << counter << endl;
	system("pause");
	return 0;
}
