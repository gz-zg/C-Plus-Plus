#include<graphics.h>//����EasyXͼ�ο��ͷ�ļ�
#include<stdio.h>//����C��׼���е�һ������������йص�ͷ�ļ�

IMAGE a;//����������ͼƬ���͵ı���
IMAGE b;

int main()
{
	loadimage(&a, "res/bg.jpg");//��������ͼƬ���͵ı����е���ͼƬ
	loadimage(&b, "res/bar.png"); 

	initgraph(1400, 600);//����һ����ͼ����

	putimage(0, 0, &a);//��������ͼƬ���͵ı����е�ͼƬ��ӡ����ͼ������
	putimage(0, 0, &b);

	system("pause");//��ͣ�����ִ�У��ڿ���̨�а���������򽫼���ִ��
	return 0;
}