#include<graphics.h>//引入EasyX图形库的头文件
#include<stdio.h>//引入C标准库中的一个与输入输出有关的头文件

IMAGE a;//声明了两个图片类型的变量
IMAGE b;

int main()
{
	loadimage(&a, "res/bg.jpg");//往这两个图片类型的变量中导入图片
	loadimage(&b, "res/bar.png"); 

	initgraph(1400, 600);//创建一个绘图窗口

	putimage(0, 0, &a);//将这两个图片类型的变量中的图片打印到绘图窗口中
	putimage(0, 0, &b);

	system("pause");//暂停程序的执行，在控制台中按任意键程序将继续执行
	return 0;
}