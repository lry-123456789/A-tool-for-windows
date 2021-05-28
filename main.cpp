#define _CRT_SECURE_NO_WARNINGS
#pragma once
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
#include<corecrt.h>
// 包括 SDKDDKVer.h 将定义可用的最高版本的 Windows 平台。
// 如果要为以前的 Windows 平台生成应用程序，请包括 WinSDKVer.h，并将
// 将 _WIN32_WINNT 宏设置为要支持的平台，然后再包括 SDKDDKVer.h。
#include <SDKDDKVer.h>
//此处为#include<targetver.h>
#include <stdio.h>
#include <tchar.h>
//此处为#include<stdafx.h>
// TODO:  在此处引用程序需要的其他头文件
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
#include<atlimage.h> 
#include<stdio.h>
#include<graphics.h>   //图形界面库头文件
#include<math.h>       //计算圆形的轨迹坐标
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#define WND_WIDTH 1000
#define WND_HEIGHT 1000
#define PI 3.1415826535897932384626


void show(int a);
int mouse(int a);


int init(int a);						//程序进入模块


int main()
{
    SetConsoleTitle(TEXT("WIN10系统小工具软件"));
    int b;
    initgraph(WND_WIDTH, WND_HEIGHT);
    //BeginBatchDraw();
    setbkcolor(WHITE);
    cleardevice();
    //init(1);
    while (1)
    {
        while (!_kbhit())
        {
            init(1);
            b = mouse(1);
            //EndBatchDraw();
            //link(b);
        }
    }
    return 0;
}

void init(int a)
{
	setlinecolor(BLACK);
	line(100, 50, 900, 50);
	line(100, 50, 100, 100);
	line(100, 100, 900, 100);
	line(900, 100, 900, 50);
	settextcolor(BROWN);
	outtextxy(300, 60, TEXT("WIN10小工具软件 版本2.0.1 BETA            请使用鼠标直接做出选择"));
	outtextxy(500, 78, TEXT("------ powered by 刘仁宇"));
	int i = 0, j = 0;
	for (i = 0; i < 4; i++)
	{
		line(50 + i * 300, 150, 50 + i * 300, 900);
	}
	for (j = 0; j < 11; j++)
	{
		line(50, 150 + 75 * j, 950, 150 + 75 * j);
	}
	show(1);
}
void show(int a)
{
	settextcolor(BROWN);
	outtextxy(55, 180, TEXT("0.退出本程序"));
	outtextxy(355, 180, TEXT("1.win10 提高系统性能，可能引起CPU超频")); outtextxy(355, 200, TEXT("(WIN10卓越性能模式)"));
	outtextxy(655, 180, TEXT("2.win10 磁盘检查并修复损坏的文件以及"));  outtextxy(655, 200, TEXT("扇区"));
	outtextxy(55, 255, TEXT("3.win10 检查文件与系统是否出现保护性"));   outtextxy(55, 275, TEXT("冲突"));
	outtextxy(355, 255, TEXT("4.win10 列出现有的电源模式"));
	outtextxy(655, 255, TEXT("5.win10 完全关闭WIN10卓越性能模式"));
	outtextxy(55, 330, TEXT("6.win10 垃圾清理程序(目前只支持C盘文件")); outtextxy(55, 350, TEXT("清理)"));
	outtextxy(355, 330, TEXT("7.win10 启动命令提示符"));
	outtextxy(655, 330, TEXT("8.win10 启动powershell"));
	outtextxy(55, 405, TEXT("9.win10 系统文件修复"));
	outtextxy(355, 405, TEXT("10.win10 桌面图标异常修复"));
	outtextxy(655, 405, TEXT("11.win10 资源管理器异常修复"));
	outtextxy(55, 480, TEXT("12.win10 启动任务管理器"));
	outtextxy(355, 480, TEXT("13.win10 python环境完善(已经安装python")); outtextxy(355, 500, TEXT("环境)"));
	outtextxy(655, 480, TEXT("14.win10 python脚本运行加速"));
	outtextxy(55, 555, TEXT("15.win10 打包python脚本为可执行文件"));
	outtextxy(355, 555, TEXT("16.win10 高级计算器"));
	outtextxy(655, 555, TEXT("17.win10 数学统计程序"));
	outtextxy(55, 630, TEXT("18.win10 卸载激活密钥(强烈建议不要使用)"));
	outtextxy(355, 630, TEXT("19.win10 安装企业版密钥"));
	outtextxy(655, 630, TEXT("20.win10 定时关机"));
	outtextxy(55, 705, TEXT("21.win10 取消定时关机"));
	outtextxy(355, 705, TEXT("更多功能，敬请期待"));
}

int mouse(int a)
{
	MOUSEMSG m;
	FlushMouseMsgBuffer();
	int i = 0;
	int j = 0;
	int b = 0;
	while (1)
	{
		//控制模板
		//下面为控制的一个实际的例子
		/******************************************************\
		while (MouseHit())
		{
			m = GetMouseMsg();
			if ((m.x >= 105 && m.x <= 282) && (m.y >= 423 && m.y <= 480))//管理员模式
			{
				setlinecolor(RED);
				rectangle(105, 423, 282, 480);
				if (m.uMsg == WM_LBUTTONDOWN)
				{
					//n = 1;
					return;
				}
			}
			if (!((m.x >= 105 && m.x <= 282) && (m.y >= 423 && m.y <= 480)))//鼠标放在按钮变色
			{
				setlinecolor(WHITE);
				rectangle(105, 423, 282, 480);
			}
			if ((m.x >= 751 && m.x <= 929) && (m.y >= 425 && m.y <= 482))//用户模式
			{
				setlinecolor(RED);
				rectangle(751, 425, 929, 482);
				if (m.uMsg == WM_LBUTTONDOWN)
				{
					//n = 2;
					return;
				}
			}
			if (!((m.x >= 751 && m.x <= 929) && (m.y >= 425 && m.y <= 482)))//鼠标放在按钮变色
			{
				setlinecolor(WHITE);
				rectangle(751, 425, 929, 482);
			}
		}
		\*******************************************************************/
		while (MouseHit())
		{
			m = GetMouseMsg();
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 11; j++)
				{
					if ((m.x > (50 + 300 * i)) && (m.x < (50+300*i)) && (m.y > (75 * j+150)) && (m.y < (75 * j + 150)))
					{
						b = i + 3 * j;
						return j;
					}
				}
			}
		}
	}
}

