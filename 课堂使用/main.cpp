#include<iostream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<graphics.h>
#pragma comment(lib,"Winmm.lib")
#define COUNT 148
using namespace std;
int main(void)
{
	IMAGE imgs[COUNT];
	char fileName[100];
	initgraph(800, 450);
	mciSendString("play 极乐净土.mp3 repeat", 0, 0, 0);
	for (int i = 1; i <= 148; i++)
	{
		sprintf_s(fileName, "极乐净土\\images2\\_%04d_图层-%d.jpg", 148 - i, i);
		//sprintf(fileName, "极乐净土\\images2\\_%04d_图层 - %d.jpg", 148 - i, i);
		loadimage(&imgs[i-1], fileName);
		//putimage(0, 0, 0);
		//Sleep(40);

	}
	
	while (1)
	{
		for (int i = 1; i <= 148; i++)
		{
			putimage(0, 0, &imgs[i-1]);
			Sleep(80);
		
		}
	
	}
	system("pause");
	closegraph();
}
