#include<graphics.h>
#include<Windows.h>
//ʹ�ô������ͼ�λ���
int main() 
{
	initgraph(640, 480);
	//�����ñ���ɫ֮�󣬲�����ı����б���ɫ������ֻ�ı䱳��ɫ��ֵ��֮����ִ�л�ͼ���
	setbkcolor(RGB(64, 128, 128));
	//�������ʹ�õ�ǰ����ɫ��ջ�ͼ�豸��ʵ�����Ч��
	cleardevice();
	//����Բ��
	setlinecolor(RGB(255,0,0));
	setlinestyle(PS_SOLID,10);
	circle(320, 240, 200);
	//��������
	settextcolor(RGB(255, 255, 0));
	settextstyle(100,0,"΢���ź�");
	outtextxy(170, 190, "Don't");
	line(180,380,460,100);
	system("pause");
	closegraph();
	return 0;
}