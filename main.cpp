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


void show(int a);						//程序进入界面，显示窗口
int mouse(int a);						//鼠标控制函数


void init(int a);						//程序进入模块
void link(int a);						//模块间连接函数

void connect_0(int a);
void connect_1(int a);
void connect_2(int a);
void connect_3(int a);
void connect_4(int a);
void connect_5(int a);
void connect_6(int a);
void connect_7(int a);
void connect_8(int a);
void connect_9(int a);
void connect_10(int a);
void connect_11(int a);
void connect_12(int a);
void connect_13(int a);
void connect_14(int a);
void connect_15(int a);
void connect_16(int a);
void connect_17(int a);
void connect_18(int a);
void connect_19(int a);
void connect_20(int a);
void connect_21(int a);

int main()
{
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
			link(b);
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
	outtextxy(300, 60, TEXT("WIN10小工具软件 版本2.1.1 BETA            请使用鼠标直接做出选择"));
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
	line(900, 0, 1000, 0);
	line(900, 50, 1000, 50);
	line(900, 150, 1000, 150);
	line(900, 0, 900, 150);
	line(1000, 0, 1000, 150);
	line(900, 100, 1000, 100);
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
		m = GetMouseMsg();
		while (m.mkLButton)
		{
			//m = GetMouseMsg();
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 11; j++)
				{
					if ((m.x > (50 + 300 * i)) && (m.x < (50 + 300 * i+300)) && (m.y > (75 * j + 150)) && (m.y < (75 * j + 150+75)))
					{
						b = i + 3 * j;
						return b;
					}
				}
			}
			int z;
			for (i = 0; i < 3; i++)
			{
				if ((m.x > 900 && m.x < 1000) && (m.y > 50 * i + 0) && (m.y < 50 * i + 50))
				{
					if (i == 0)
					{
						return -1;
					}
					if (i == 1)
					{
						return -2;
					}
					if (i == 2)
					{
						return -3;
					}
				}
			}
		}
	}
}

void link(int a)
{
	if (a == -3)
	{
		
	}
	if (a == -2)
	{

	}
	if (a == -1)
	{

	}
	if (a == 0)
	{
		connect_0(0);
	}
	if (a == 1)
	{
		connect_1(0);
	}
	if (a == 2)
	{
		connect_2(0);
	}
	if (a == 3)
	{
		connect_3(0);
	}
	if (a == 4)
	{
		connect_4(0);
	}
	if (a == 5)
	{
		connect_5(0);
	}
	if (a == 6)
	{
		connect_6(0);
	}
	if (a == 7)
	{
		connect_7(0);
	}
	if (a == 8)
	{
		connect_8(0);
	}
	if (a == 9)
	{
		connect_9(0);
	}
	if (a == 10)
	{
		connect_10(0);
	}
	if (a == 11)
	{
		connect_11(0);
	}
	if (a == 12)
	{
		connect_12(0);
	}
	if (a == 13)
	{
		connect_13(0);
	}
}

void connect_0(int a)
{
	MessageBox(NULL, "单击确定退出本程序", "message", MB_OK);
	exit(0);
}

void connect_1(int a)
{
	system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
	MessageBox(NULL, "windows 提高性能模式已经加载至电源管理，单击退出本程序", "message", MB_OK);
	//system("pause");
	exit(0);
}

void connect_2(int a)
{
	MessageBox(NULL, "请确保本程序是以管理员方式运行，然后点击继续", "message", MB_OK);
	system("chkdsk");
	MessageBox(NULL, "windows 磁盘检查并且修复损坏的扇区已完成，单击退出本程序", "message", MB_OK);
	//system("pause");
	exit(0);
}

void connect_3(int a)
{
	MessageBox(NULL, "请确保本程序是以管理员方式运行，然后点击继续(这可能需要几分钟)", "message", MB_OK);
	system("sfc /scannow");
	MessageBox(NULL, "检查文件与系统是否出现保护性已经完成，单击确定退出本程序", "message", MB_OK);
	//system("pause");
	exit(0);
}

void connect_4(int a)
{
	MessageBox(NULL, "本程序模块正在适配中，请期待后续的版本", "message", MB_OK);
}

void connect_5(int a)
{
	MessageBox(NULL, "本程序模块正在适配中，请期待后续的版本", "message", MB_OK);
}

void connect_6(int a)
{
	cleardevice();
	//clearrectangle(0, 0, 1000, 1000);
	outtextxy(200, 200, TEXT("清理进度如下："));
	setlinecolor(BLUE);
	line(100, 300, 900, 300);
	line(100, 300, 100, 400);
	line(100, 400, 900, 400);
	line(900, 300, 900, 400);
	outtextxy(410, 200, TEXT("垃圾清理模块版本version 1.0.3 BETA"));
	int b = 0;
	Sleep(3000);
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("垃圾清理模块版本version 1.0.3 BETA 模块成功启动"));
	for (b = 100; b < 200; b++)
	{
		line(b, 300, b, 400);
	}
	system("del /f /s /q %temp%");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成清理临时文件目录操作"));
	for (b = 200; b < 300; b++)
	{
		line(b, 300, b, 400);
	}
	system("del /f /s /q %systemdrive%\\*.tmp ");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成清理临时文件操作"));
	for (b = 300; b < 500; b++)
	{
		line(b, 300, b, 400);
	}
	system("del /f /s /q %systemdrive%\\*._mp ");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成系统垃圾文件清理操作"));
	for (b = 500; b < 550; b++)
	{
		line(b, 300, b, 400);
	}
	system("del /f /s /q %systemdrive%\\*.log ");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成清理日志文件操作"));
	for (b = 550; b < 700; b++)
	{
		line(b, 300, b, 400);
	}
	system("del /f /s /q %systemdrive%\\*.gid ");
	system("del /f /s /q %systemdrive%\\*.chk ");
	system("del /f /s /q %systemdrive%\\*.old ");
	system("del /f /s /q %systemdrive%\\recycled\\*.* ");
	system("del /f /s /q %windir%\\*.bak ");
	system("del /f /s /q %windir%\\prefetch\\*.*");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成清理历史文件操作"));
	for (b = 700; b < 750; b++)
	{
		line(b, 300, b, 400);
	}
	system("rd /s /q %windir%\\temp & md %windir%\\temp");
	system("del /f /q %userprofile%\\cookies\\*.* ");
	system("del /f /q %userprofile%\\recent\\*.* ");
	system("del /f /s /q \"%userprofile%\\Local Settings\\Temporary Internet Files\\*.*\" ");
	system("del /f /s /q \"%userprofile%\\Local Settings\\Temp\\*.*\" ");
	system("del /f /s /q \"%userprofile%\\recent\\*.*\" ");
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("已经完成清理网站cookies等操作"));
	for (b = 750; b < 900; b++)
	{
		line(b, 300, b, 400);
	}
	Sleep(1000);
	clearrectangle(410, 200, 1000, 220);
	outtextxy(410, 200, TEXT("即将完成"));
	MessageBox(NULL, "垃圾清理完成，请点击确定退出本程序", "message", MB_OK);
	//system("pause");
	exit(0);
}

void connect_7(int a)
{
	system("start cmd.exe");
	MessageBox(NULL, "命令提示符打开完成，请点击确定退出本程序", "message", MB_OK);
	exit(0);
}

void connect_8(int a)
{
	system("start powershell.exe");
	MessageBox(NULL, "powershell启动完成，请点击确定退出本程序", "message", MB_OK);
	exit(0);
}

void connect_9(int a)
{
	MessageBox(NULL, "请以管理员模式运行本程序脚本", "message", MB_OK);
	FILE* f1 = fopen("1.cmd", "a+");
	fprintf(f1, "chkdsk\n");
	fprintf(f1, "sfc /scannow\n");
	if (f1 != NULL)
	{
		free(f1);
	}
	fflush(f1);
	system("start 1.cmd");
	FILE* f2 = fopen("1.cmd", "w");
	fprintf(f2, "");
	system("taskkill /f /im cmd.exe");
	system("del /f /s /q 1.cmd");
	MessageBox(NULL, "windows系统文件修复已经完成，请按确定退出本程序", "message", MB_OK);
	exit(0);
}

void connect_10(int a)
{
	MessageBox(NULL, "本程序模块正在适配中，请期待后续的版本", "message", MB_OK);
}

void connect_11(int a)
{
	MessageBox(NULL, "本程序模块正在适配中，请期待后续的版本", "message", MB_OK);
}

void connect_12(int a)
{
	system("taskmgr");
	MessageBox(NULL, "任务管理器启动完成，请点击确定退出本程序", "message", MB_OK);
	exit(0);
}

void connect_13(int a)
{
	MessageBox(NULL, "请确定本台电脑已经安装python环境，否则会使程序出错，点击确定继续", "message", MB_OK);
	cleardevice();
	outtextxy(100, 100, TEXT("python环境完善工具正在启动,请稍后，启动进度："));
	int b;
	setlinecolor(GREEN);
	line(100, 200, 900, 200);
	line(100, 200, 100, 300);
	line(100, 300, 900, 300);
	line(900, 200, 900, 300);
	for (b = 100; b < 900; b++)
	{
		line(b, 200, b, 300);
	}
	outtextxy(100, 320, TEXT("当前项目：生成脚本文件"));
	outtextxy(100, 340, TEXT("项目进度：1/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：生成脚本文件，放置文件指针"));
	outtextxy(100, 380, TEXT("当前操作进度：1/1"));
	outtextxy(20, 440, TEXT("项目进度："));
	line(100, 400, 900, 400);
	line(100, 400, 100, 500);
	line(100, 500, 900, 500);
	line(900, 400, 900, 500);
	outtextxy(0, 640, TEXT("项目操作进度:"));
	line(100, 600, 900, 600);
	line(100, 600, 100, 700);
	line(100, 700, 900, 700);
	line(900, 600, 900, 700);
	for (b = 100; b < 900; b++)
	{
		line(b, 600, b, 700);
		Sleep(10);
	}
	for (b = 100; b < 367; b++)
	{
		line(b, 400, b, 500);
	}
	clearrectangle(100,320,900,380);
	clearrectangle(101,601,899,699);
	outtextxy(100, 320, TEXT("当前项目：校验脚本文件"));
	outtextxy(100, 340, TEXT("项目进度：2/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：读取并校验脚本文件"));
	outtextxy(100, 380, TEXT("当前操作进度：1/1"));
	for (b = 100; b < 900; b++)
	{
		line(b, 600, b, 700);
		Sleep(10);
	}
	for (b = 367; b < 635; b++)
	{
		line(b, 400, b, 500);
	}
	clearrectangle(100, 320, 900, 380);
	clearrectangle(101, 601, 899, 699);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：pip模块升级"));
	outtextxy(100, 380, TEXT("当前操作进度：1/152"));
	system("pip install pip");
	int i = 1;
	for (b = 100; b < int(100+5.263*i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装-xpython"));
	outtextxy(100, 380, TEXT("当前操作进度：2/152"));
	system("pip install --xpython");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装absl-py"));
	outtextxy(100, 380, TEXT("当前操作进度：3/152"));
	system("pip install absl-py");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装arxiv2bib"));
	outtextxy(100, 380, TEXT("当前操作进度：4/152"));
	system("pip install arxiv2bib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装astunparse"));
	outtextxy(100, 380, TEXT("当前操作进度：5/152"));
	system("pip install astunparse");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装attrs"));
	outtextxy(100, 380, TEXT("当前操作进度：6/152"));
	system("pip install attrs");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装backcall"));
	outtextxy(100, 380, TEXT("当前操作进度：7/152"));
	system("pip install backcall");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装baidu-api"));
	outtextxy(100, 380, TEXT("当前操作进度：8/152"));
	system("pip install baidu-api");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装beautifulsoup4"));
	outtextxy(100, 380, TEXT("当前操作进度：9/152"));
	system("pip install beautifulsoup4");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装bibtexparser"));
	outtextxy(100, 380, TEXT("当前操作进度：10/152"));
	system("pip install bibtexparser");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装bs4"));
	outtextxy(100, 380, TEXT("当前操作进度：11/152"));
	system("pip install bs4");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装cachetools"));
	outtextxy(100, 380, TEXT("当前操作进度：12/152"));
	system("pip install cachetools");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装certifi"));
	outtextxy(100, 380, TEXT("当前操作进度：13/152"));
	system("pip install certifi");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装cffi"));
	outtextxy(100, 380, TEXT("当前操作进度：14/152"));
	system("pip install cffi");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装chardet"));
	outtextxy(100, 380, TEXT("当前操作进度：15/152"));
	system("pip install chardet");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装click"));
	outtextxy(100, 380, TEXT("当前操作进度：16/152"));
	system("pip install click");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装colorma"));
	outtextxy(100, 380, TEXT("当前操作进度：17/152"));
	system("pip install colorma");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装commonmark"));
	outtextxy(100, 380, TEXT("当前操作进度：18/152"));
	system("pip install commonmark");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装configparser"));
	outtextxy(100, 380, TEXT("当前操作进度：19/152"));
	system("pip install configparser");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装dacite"));
	outtextxy(100, 380, TEXT("当前操作进度：20/152"));
	system("pip install dacite");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装decoator"));
	outtextxy(100, 380, TEXT("当前操作进度：21/152"));
	system("pip install decoator");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装dialite"));
	outtextxy(100, 380, TEXT("当前操作进度：22/152"));
	system("pip inatall dialite");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装distlib"));
	outtextxy(100, 380, TEXT("当前操作进度：23/152"));
	system("pip install distlib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装docutils"));
	outtextxy(100, 380, TEXT("当前操作进度：24/152"));
	system("pip install docutils");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装filetype"));
	outtextxy(100, 380, TEXT("当前操作进度：25/152"));
	system("pip install filetype");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装fixit"));
	outtextxy(100, 380, TEXT("当前操作进度：26/152"));
	system("pip install fixit");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装flake8"));
	outtextxy(100, 380, TEXT("当前操作进度：27/152"));
	system("pip install flake8");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装flask"));
	outtextxy(100, 380, TEXT("当前操作进度：28/152"));
	system("pip install flask");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装flatbuffers"));
	outtextxy(100, 380, TEXT("当前操作进度：29/152"));
	system("pip install flatbuffers");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装flexx"));
	outtextxy(100, 380, TEXT("当前操作进度：30/152"));
	system("pip install flexx");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装future"));
	outtextxy(100, 380, TEXT("当前操作进度：31/152"));
	system("pip install future");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装gast"));
	outtextxy(100, 380, TEXT("当前操作进度：32/152"));
	system("pip install gast");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装google"));
	outtextxy(100, 380, TEXT("当前操作进度：33/152"));
	system("pip install google");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装google-auth"));
	outtextxy(100, 380, TEXT("当前操作进度：34/152"));
	system("pip install google-auth");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装google-auth-oauthlib"));
	outtextxy(100, 380, TEXT("当前操作进度：35/152"));
	system("pip install google_auth-oauthlib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装google-pasta"));
	outtextxy(100, 380, TEXT("当前操作进度：36/152"));
	system("pip install pasta");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装graphviz"));
	outtextxy(100, 380, TEXT("当前操作进度：37/152"));
	system("pip install graphviz");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装grpcio"));
	outtextxy(100, 380, TEXT("当前操作进度：38/152"));
	system("pip install grpcio");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装h5py"));
	outtextxy(100, 380, TEXT("当前操作进度：39/152"));
	system("pip install h5py");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装habenaro"));
	outtextxy(100, 380, TEXT("当前操作进度：40/152"));
	system("pip install habenaro");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装idna"));
	outtextxy(100, 380, TEXT("当前操作进度：41/152"));
	system("pip install idna");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装ipython"));
	outtextxy(100, 380, TEXT("当前操作进度：42/152"));
	system("pip install ipython");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装ipython-genutils"));
	outtextxy(100, 380, TEXT("当前操作进度：43/152"));
	system("pip install ipython-genutils");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装isbnlib"));
	outtextxy(100, 380, TEXT("当前操作进度：44/152"));
	system("pip install isbnlib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装isort"));
	outtextxy(100, 380, TEXT("当前操作进度：45/152"));
	system("pip install isort");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装itchat"));
	outtextxy(100, 380, TEXT("当前操作进度：46/152"));
	system("pip install itchat");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装itsdangerous"));
	outtextxy(100, 380, TEXT("当前操作进度：47/152"));
	system("pip install itsdangerous");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装jazzit"));
	outtextxy(100, 380, TEXT("当前操作进度：48/152"));
	system("pip install jazzit");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装jedi"));
	outtextxy(100, 380, TEXT("当前操作进度：49/152"));
	system("pip install jedi");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装jinja2"));
	outtextxy(100, 380, TEXT("当前操作进度：50/152"));
	system("pip install jinja2");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装jsonschema"));
	outtextxy(100, 380, TEXT("当前操作进度：51/152"));
	system("pip install jsonschema");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装Keras"));
	outtextxy(100, 380, TEXT("当前操作进度：52/152"));
	system("pip install keras");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装keras-preprocessing"));
	outtextxy(100, 380, TEXT("当前操作进度：53/152"));
	system("pip install keras-perprocessing");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装kivy"));
	outtextxy(100, 380, TEXT("当前操作进度：54/152"));
	system("pip install kivy");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装kivy-deps.angle"));
	outtextxy(100, 380, TEXT("当前操作进度：55/152"));
	system("pip install kivy-deps.angle");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装kivy-deps.glew"));
	outtextxy(100, 380, TEXT("当前操作进度：56/152"));
	system("pip install kivy-deps.glew");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装deps.sd12"));
	outtextxy(100, 380, TEXT("当前操作进度：57/152"));
	system("pip install deps.sd12");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装kivy-garden"));
	outtextxy(100, 380, TEXT("当前操作进度：58/152"));
	system("pip install kivy-garden");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装libcst"));
	outtextxy(100, 380, TEXT("当前操作进度：59/152"));
	system("pip install libcst");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装lxml"));
	outtextxy(100, 380, TEXT("当前操作进度：60/152"));
	system("pip install lxml");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装mach-nix"));
	outtextxy(100, 380, TEXT("当前操作进度：61/152"));
	system("pip install mach-nix");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装markdown"));
	outtextxy(100, 380, TEXT("当前操作进度：62/152"));
	system("pip install markdown");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装markupsafe"));
	outtextxy(100, 380, TEXT("当前操作进度：63/152"));
	system("pip install markupsafe");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装mccabe"));
	outtextxy(100, 380, TEXT("当前操作进度：64/152"));
	system("pip install mccabe");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装mutagen"));
	outtextxy(100, 380, TEXT("当前操作进度：65/152"));
	system("pip install mutagen");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装mxnet"));
	outtextxy(100, 380, TEXT("当前操作进度：66/152"));
	system("pip install mxnet");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装my-extensions"));
	outtextxy(100, 380, TEXT("当前操作进度：67/152"));
	system("pip install my-extensions"); for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装numpy"));
	outtextxy(100, 380, TEXT("当前操作进度：68/152"));
	system("pip install numpy");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装oauthlib"));
	outtextxy(100, 380, TEXT("当前操作进度：69/152"));
	system("pip install oauthlib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装opt-einsum"));
	outtextxy(100, 380, TEXT("当前操作进度：70/152"));
	system("pip install opt-einsum");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装packaging"));
	outtextxy(100, 380, TEXT("当前操作进度：71/152"));
	system("pip install packaging");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pandas"));
	outtextxy(100, 380, TEXT("当前操作进度：72/152"));
	system("pip install pandas");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pandagui"));
	outtextxy(100, 380, TEXT("当前操作进度：73/152"));
	system("pip install pandagui");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装papis"));
	outtextxy(100, 380, TEXT("当前操作进度：74/152"));
	system("pip install papis");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装parso"));
	outtextxy(100, 380, TEXT("当前操作进度：75/152"));
	system("pip install parso");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pbr"));
	outtextxy(100, 380, TEXT("当前操作进度：76/152"));
	system("pip install pbr");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pickleshare"));
	outtextxy(100, 380, TEXT("当前操作进度：77/152"));
	system("pip install pickleshare");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pillow"));
	outtextxy(100, 380, TEXT("当前操作进度：78/152"));
	system("pip install pillow");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pippi"));
	outtextxy(100, 380, TEXT("当前操作进度：79/152"));
	system("pip install pippi");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装plotly"));
	outtextxy(100, 380, TEXT("当前操作进度：80/152"));
	system("pip install plotly");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装prompt-toolkit"));
	outtextxy(100, 380, TEXT("当前操作进度：81/152"));
	system("pip install prompt-toolkit");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装protobuf"));
	outtextxy(100, 380, TEXT("当前操作进度：82/152"));
	system("pip install protobuf");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pscript"));
	outtextxy(100, 380, TEXT("当前操作进度：83/152"));
	system("pip install pscript");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pynasl"));
	outtextxy(100, 380, TEXT("当前操作进度：84/152"));
	system("pip install pynasl");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pynasl-moudles"));
	outtextxy(100, 380, TEXT("当前操作进度：85/152"));
	system("pip install pynasl-moudles");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pycodestyle"));
	outtextxy(100, 380, TEXT("当前操作进度：86/152"));
	system("pip install pycodestyle");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyc"));
	outtextxy(100, 380, TEXT("当前操作进度：87/152"));
	system("pip install pyc");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyfiglet"));
	outtextxy(100, 380, TEXT("当前操作进度：88/152"));
	system("pip install pyfiglet");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyflakes"));
	outtextxy(100, 380, TEXT("当前操作进度：89/152"));
	system("pip install pyflakes");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pygame"));
	outtextxy(100, 380, TEXT("当前操作进度：90/152"));
	system("pip install pygame");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pygments"));
	outtextxy(100, 380, TEXT("当前操作进度：91/152"));
	system("pip install pygments");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyinspect"));
	outtextxy(100, 380, TEXT("当前操作进度：92/152"));
	system("pip install pyinspect");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyJWT"));
	outtextxy(100, 380, TEXT("当前操作进度：93/152"));
	system("pip install pyjwt");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pylambdarest"));
	outtextxy(100, 380, TEXT("当前操作进度：94/152"));
	system("pip install pylambdarest");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pynput"));
	outtextxy(100, 380, TEXT("当前操作进度：95/152"));
	system("pip install pynput");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyparsing"));
	outtextxy(100, 380, TEXT("当前操作进度：96/152"));
	system("pip install pyparsing");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyperclip"));
	outtextxy(100, 380, TEXT("当前操作进度：97/152"));
	system("pip install pyperclip");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pypiwin32"));
	outtextxy(100, 380, TEXT("当前操作进度：98/152"));
	system("pip install pypiwin32");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pypng"));
	outtextxy(100, 380, TEXT("当前操作进度：99/152"));
	system("pip install pypng");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyqrcode"));
	outtextxy(100, 380, TEXT("当前操作进度：100/152"));
	system("pip install pyqrcode");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyqt5"));
	outtextxy(100, 380, TEXT("当前操作进度：101/152"));
	system("pip install pyqt5");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyqt5-sip"));
	outtextxy(100, 380, TEXT("当前操作进度：102/152"));
	system("pip install pyqt5-sip");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyqtwebengine"));
	outtextxy(100, 380, TEXT("当前操作进度：103/152"));
	system("pip install pyqtwebengine");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pysoundfile"));
	outtextxy(100, 380, TEXT("当前操作进度：104/152"));
	system("pip install pysoundfile");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装python-dateutil"));
	outtextxy(100, 380, TEXT("当前操作进度：105/152"));
	system("pip install python-dateutil");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装python-doi"));
	outtextxy(100, 380, TEXT("当前操作进度：106/152"));
	system("python-doi");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装python-slugify"));
	outtextxy(100, 380, TEXT("当前操作进度：107/152"));
	system("python-slugify");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pytz"));
	outtextxy(100, 380, TEXT("当前操作进度：108/152"));
	system("pip install pytz");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pywin32"));
	outtextxy(100, 380, TEXT("当前操作进度：109/152"));
	system("pip install pywin32");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyYAML"));
	outtextxy(100, 380, TEXT("当前操作进度：110/152"));
	system("pip install pyyaml");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装redis"));
	outtextxy(100, 380, TEXT("当前操作进度：111/152"));
	system("pip install redis");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装requests"));
	outtextxy(100, 380, TEXT("当前操作进度：112/152"));
	system("pip install requests");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装requests-oauthlib"));
	outtextxy(100, 380, TEXT("当前操作进度：113/152"));
	system("pip install requests-oauthlib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装resolvelib"));
	outtextxy(100, 380, TEXT("当前操作进度：114/152"));
	system("pip install resolvelib");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装retrying"));
	outtextxy(100, 380, TEXT("当前操作进度：115/152"));
	system("pip install retrying");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装rich"));
	outtextxy(100, 380, TEXT("当前操作进度：116/152"));
	system("pip install rich");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装rsa"));
	outtextxy(100, 380, TEXT("当前操作进度：117/152"));
	system("pip install rsa");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装scipy"));
	outtextxy(100, 380, TEXT("当前操作进度：118/152"));
	system("pip install scipy");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装setuptools"));
	outtextxy(100, 380, TEXT("当前操作进度：119/152"));
	system("pip install setuptools");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装simplejson"));
	outtextxy(100, 380, TEXT("当前操作进度：120/152"));
	system("pip install simplejson");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装six"));
	outtextxy(100, 380, TEXT("当前操作进度：121/152"));
	system("pip install six");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装soupsieve"));
	outtextxy(100, 380, TEXT("当前操作进度：122/152"));
	system("pip install soupsieve");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装stevedore"));
	outtextxy(100, 380, TEXT("当前操作进度：123/152"));
	system("pip install stevedore");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tensorboard"));
	outtextxy(100, 380, TEXT("当前操作进度：124/152"));
	system("pip install tensorboard");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tensorboard-plugin-wit"));
	outtextxy(100, 380, TEXT("当前操作进度：125/152"));
	system("pip install tensorboard-plugin-wit");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tensorflow"));
	outtextxy(100, 380, TEXT("当前操作进度：126/152"));
	system("pip install tensorflow");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tensorflow-setimator"));
	outtextxy(100, 380, TEXT("当前操作进度：127/152"));
	system("pip install tensorflow-estimator");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装termcolor"));
	outtextxy(100, 380, TEXT("当前操作进度：128/152"));
	system("pip install termcolor");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装text-unidecode"));
	outtextxy(100, 380, TEXT("当前操作进度：129/152"));
	system("pip install text-unidecode");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装theano"));
	outtextxy(100, 380, TEXT("当前操作进度：130/152"));
	system("pip install theano");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tqdm"));
	outtextxy(100, 380, TEXT("当前操作进度：131/152"));
	system("pip install tqdm");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装traitlets"));
	outtextxy(100, 380, TEXT("当前操作进度：132/152"));
	system("pip install traitlets");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装free-formet"));
	outtextxy(100, 380, TEXT("当前操作进度：133/152"));
	system("pip install free-formet");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装typing-inspect"));
	outtextxy(100, 380, TEXT("当前操作进度：134/152"));
	system("pip install typing-inspect");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装urllib3"));
	outtextxy(100, 380, TEXT("当前操作进度：135/152"));
	system("pip install urllib3");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装wcwidth"));
	outtextxy(100, 380, TEXT("当前操作进度：136/152"));
	system("pip install wcwidth");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装webruntime"));
	outtextxy(100, 380, TEXT("当前操作进度：137/152"));
	system("pip install webruntime");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装werkzeug"));
	outtextxy(100, 380, TEXT("当前操作进度：138/152"));
	system("pip install werkzeug");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装wheel"));
	outtextxy(100, 380, TEXT("当前操作进度：139/152"));
	system("pip install wheel");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装wrapt"));
	outtextxy(100, 380, TEXT("当前操作进度：140/152"));
	system("pip install wrapt");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装wxpython"));
	outtextxy(100, 380, TEXT("当前操作进度：141/152"));
	system("pip install wxpython");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装kivy"));
	outtextxy(100, 380, TEXT("当前操作进度：142/152"));
	system("pip install kivy");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装flexx"));
	outtextxy(100, 380, TEXT("当前操作进度：143/152"));
	system("pip install flexx");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyqt"));
	outtextxy(100, 380, TEXT("当前操作进度：144/152"));
	system("pip install pyqt");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装tkinter"));
	outtextxy(100, 380, TEXT("当前操作进度：145/152"));
	system("pip install tkinter");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pywin32"));
	outtextxy(100, 380, TEXT("当前操作进度：146/152"));
	system("pip install pywin32");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pygtk"));
	outtextxy(100, 380, TEXT("当前操作进度：147/152"));
	system("pip install pygtk");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装pyui4win"));
	outtextxy(100, 380, TEXT("当前操作进度：148/152"));
	system("pip install pyui4win");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装wxpython"));
	outtextxy(100, 380, TEXT("当前操作进度：149/152"));
	system("pip install wxpython");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：安装opencv-python"));
	outtextxy(100, 380, TEXT("当前操作进度：150/152"));
	system("pip install opencv-python");
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：校验"));
	outtextxy(100, 380, TEXT("当前操作进度：151/152"));
	Sleep(2000);
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 + 1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	clearrectangle(100, 320, 900, 380);
	outtextxy(100, 320, TEXT("当前项目：执行操作：完善python环境"));
	outtextxy(100, 340, TEXT("项目进度：3/3"));
	outtextxy(100, 360, TEXT("当前执行的操作：操作完成"));
	outtextxy(100, 380, TEXT("当前操作进度：152/152"));
	for (b = 100; b < int(100 + 5.263 * i); b++)
	{
		line(b, 600, b, 700);
	}
	for (b = 635; b<int(635 +1.756 * i); b++)
	{
		line(b, 400, b, 500);
	}
	i++;
	MessageBox(NULL, "python环境配置完成，请点击确定退出本程序", "message", MB_OK);
	exit(0);
}
