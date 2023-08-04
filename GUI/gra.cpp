#include<graphics.h>
#include<Windows.h>
//使用代码进行图形绘制
int main() 
{
	initgraph(640, 480);
	//在设置背景色之后，并不会改变现有背景色，而是只改变背景色的值，之后再执行绘图语句
	setbkcolor(RGB(64, 128, 128));
	//这个函数使用当前背景色清空绘图设备。实现填充效果
	cleardevice();
	//绘制圆形
	setlinecolor(RGB(255,0,0));
	setlinestyle(PS_SOLID,10);
	circle(320, 240, 200);
	//设置字体
	settextcolor(RGB(255, 255, 0));
	settextstyle(100,0,"微软雅黑");
	outtextxy(170, 190, "Don't");
	line(180,380,460,100);
	system("pause");
	closegraph();
	return 0;
}