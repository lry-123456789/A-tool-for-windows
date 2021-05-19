#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
int init(int a);						//程序进入模块
void link(int a);						//模块之间连接模块
void connect_0(int a);					//0.退出本程序
void connect_1(int a);					//1.win10 提高系统性能，可能引起CPU超频(WIN10卓越性能模式)
void connect_2(int a);					//2.win10 磁盘检查并修复损坏的文件以及扇区
void connect_3(int a);					//3.win10 检查文件与系统是否出现保护性冲突
void connect_4(int a);					//4.win10 列出现有的电源模式
void connect_5(int a);					//5.win10 完全关闭WIN10卓越性能模式
void connect_6(int a);					//6.win10 垃圾清理程序(目前只支持C盘文件清理)
void connect_7(int a);					//7.win10 启动命令提示符
void connect_8(int a);					//8.win10 启动powershell
void connect_9(int a);					//9.win10 系统文件修复
void connect_10(int a);					//10.win10 桌面图标异常修复
void connect_11(int a);					//11.win10 资源管理器异常修复
void connect_12(int a);					//12.win10 启动任务管理器
void connect_13(int a);					//13.win10 python环境完善(已经安装python环境)
void connect_14(int a);					//14.win10 python脚本运行加速
void connect_15(int a);					//15.win10 打包python脚本为可执行程序
void connect_16(int a);					//16.win10 高级计算器
void connect_17(int a);                 //17.win10 数学统计程序
void error_warnings(int a);				//输入错误判断函数
//模块内函数(16.高级计算器)
int login(int a);                       //用户登录所必要的原函数
void login1(int a);                     //调用准备进行登录的原函数
void login2(int a);                     //游客进入界面函数
void login3(int a);                     //管理员进入界面函数
void account(int a);                    //用户登录输入账号所必要的原函数                            account:qwertyuiop
int password(int a);                    //用户登录输入密码所必要的原函数                           password:1234567890
int forget(int a);                      //用户在忘记密码后给出密码提示的函数                           tips:the key on the computer
int youke(int a);                       //用户不想用登录的方式启动该程序所必要的函数                   name:passenger
int kaifarenyuan(int a);                //开发人员查询源代码时调用的函数                           sign in :login_vision1.0.4
int xuanze0(int a);                     //用户在未作出选择时所调用的函数
void xuanze1(int a);                    //用户在选择第一项时所调用的函数
void xuanze2(int aa);                   //用户在选择第二项时所调用的函数（游客模式无法进入）
void xuanze3(int a);                    //用户在选择第三项时所调用的函数
void xuanze4(int a);                    //用户在选择第四项时所调用的函数（游客模式无法进入）
void xuanze5(int a);                    //用户在选择第五项时所调用的函数（游客模式无法进入）
void xuanze6(int a);                    //用户在选择第六项时所调用的函数（仅有管理员模式才可进入）
void calc0(float a, char b, float c);   //调用简单的（加减乘除乘方开方）计算器函数
void calc1(int a);                      //调用较为复杂的阶乘函数
void xuanze1_1(int a);                  //1.圆锥体积与表面积
void xuanze1_2(int a);                  //1.圆台体积与表面积
void xuanze1_3(int a);                  //1.棱锥的体积与表面积
void xuanze1_4(int a);                  //1.球体的体积与表面积
void error_all(int a);                  //提示错误1
void error_calc0(int a);                //提示错误2
void error_calc1(int a);                //提示错误3
void error_other(int a);                //提示错误4
void tiaoshi(int a);                    //调试函数
void login1_1(int a);                   //正常用户启动主程序所调用的函数
void login2_1(int a);                   //游客进入主程序所调用的函数
void login3_1(int a);                   //管理员或开发人员进入本程序以及调出源代码所需要的函数
void xuanze4_1(int a);                  //4.1猜素数
void xuanze4_2(int a);                  //4.2猜水仙花数
void xuanze6_1(int a);                  //1.高级功能
int xuanze6_2(int a);                   //2.代码查询
void error_right(int a);                //权限管理
void xk(int a);                         //开放源代码许可
void login4(int a);                     //补丁程序
void xuanze4_3(int a);                  //验证哥德巴赫猜想的函数
void eve(int a);                        //验证偶数
void odd(int a);                        //验证奇数
int isprime(int a);                    //验证所判断的数字是否为奇数
int main()
{
	SetConsoleTitle(TEXT("WIN10系统小工具软件"));
	int a;
	//a = init(1);
	while(1)
	{
		a = init(1);
		link(a);
	}
	system("pause");
	return 0;
}
int init(int a)
{
	SetConsoleTitle(TEXT("WIN10系统小工具软件"));
	int b;
	printf("\n****************************************\n");
	printf("**         WIN10系统小工具软件        **\n");
	printf("**  请在下方所列出的小工具中做出选择  **\n");
	printf("**           version 1.0.1            **\n");
	printf("****************************************\n");
	printf("0.退出本程序\n");
	printf("1.win10 提高系统性能，可能引起CPU超频(WIN10卓越性能模式)\n");
	printf("2.win10 磁盘检查并修复损坏的文件以及扇区\n");
	printf("3.win10 检查文件与系统是否出现保护性冲突\n");
	printf("4.win10 列出现有的电源模式\n");
	printf("5.win10 完全关闭WIN10卓越性能模式\n");
	printf("6.win10 垃圾清理程序(目前只支持C盘文件清理)\n");
	printf("7.win10 启动命令提示符\n");
	printf("8.win10 启动powershell\n");
	printf("9.win10 系统文件修复\n");
	printf("10.win10 桌面图标异常修复\n");
	printf("11.win10 资源管理器异常修复\n");
	printf("12.win10 启动任务管理器\n");
	printf("13.win10 python环境完善(已经安装python环境)\n");
	printf("14.win10 python脚本运行加速\n");
	printf("15.win10 打包python脚本为可执行文件\n");
	printf("16.win10 高级计算器(目前处于禁用状态)\n");
    printf("17.win10 数学统计程序\n");
	printf("请做出选择\n");
	scanf_s("%d", &b);
	return b;
}
void link(int a)
{
	switch (a)
	{
		case 0:
		{
			SetConsoleTitle(TEXT("0.退出本程序"));
			printf("感谢您的使用，版本 v1.0.1\n");
			printf("程序制作：刘仁宇\n");
			exit(0);
		}
		break;
		case 1:
		{
			//cmd中代码为：powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61
			SetConsoleTitle(TEXT("WIN10系统小工具软件>1.win10 提高系统性能，可能引起CPU超频(WIN10卓越性能模式)"));
			connect_1(1);
		}
		break;
		case 2:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>2.win10 磁盘检查并修复损坏的文件以及扇区(需要以管理员模式运行)"));
			connect_2(1);
		}
		break;
		case 3:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>3.win10 检查文件与系统是否出现保护性冲突(需要以管理员模式运行)"));
			connect_3(1);
		}
		break;
		case 4:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>4.win10 列出现有的电源模式"));
			connect_4(1);
		}
		break;
		case 5:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>5.win10 完全关闭WIN10卓越性能模式(需要手动操作)"));
			connect_5(1);
		}
		break;
		case 6:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>6.win10 垃圾清理程序(目前只支持C盘文件清理)"));
			connect_6(1);
		}
		break;
		case 7:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>7.win10 启动命令提示符"));
			connect_7(1);
		}
		break;
		case 8:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>8.win10 启动powershell"));
			connect_8(1);
		}
		break;
		case 9:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>9.win10 系统文件修复"));
			connect_9(1);
		}
		break;
		case 10:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>10.win10 桌面图标异常修复"));
			connect_10(1);
		}
		break;
		case 11:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>11.win10 资源管理器异常修复"));
			connect_11(1);
		}
		break;
		case 12:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>12.win10 启动任务管理器"));
			connect_12(1);
		}
		break;
		case 13:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>13.win10 python环境完善(已经安装python环境)"));
			connect_13(1);
		}
		break;
		case 14:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>14.win10 python脚本运行加速"));
            connect_14(1);
		}
		break;
		case 15:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>15.win10 打包python脚本为可执行文件"));
            connect_15(1);
		}
		break;
		case 16:
		{
			SetConsoleTitle(TEXT("WIN10系统小工具软件>16.win10 高级计算器"));
            connect_16(1);
		}
		break;
        case 17:
        {
            SetConsoleTitle(TEXT("WIN10系统小工具软件>17.win10 数学统计程序"));
            connect_17(1);
        }
		default:
		{
			error_warnings(1);
		}
		break;
	}
}

//0.退出本程序
void connect_0(int a)
{
	printf("感谢您的使用，版本 v1.0.1\n");
	printf("程序制作：刘仁宇\n");
	exit(0);
}

//1.win10 提高系统性能，可能引起CPU超频(WIN10卓越性能模式)
void connect_1(int a)
{
	//cmd 中应该输入的代码为 powercfg - duplicatescheme e9a42b02 - d5df - 448d - aa00 - 03f14749eb61
	printf("正在生成新的电源方案，请稍后\n");
	system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
	printf("\n新的电源方案生成完成，该方案可以在一定的程度上提高电脑性能\n");
}

//2.win10 磁盘检查并修复损坏的文件以及扇区
void connect_2(int a)
{
	printf("开始连接管理员模式，");
	printf("请稍后\n");
	system("chkdsk");
}

//3.win10 检查文件与系统是否出现保护性冲突
void connect_3(int a)
{
	printf("开始连接管理员模式，请稍后\n");
	system("sfc /scannow");
}

//4.win10 列出现有的电源模式
void connect_4(int a)
{
	printf("正在连接电源管理模块，请稍后\n");
	system(" powercfg  /L");
	printf("\n电源管理模式已经全部列出\n");
}

//5.win10 完全关闭WIN10卓越性能模式
void connect_5(int a)
{
	printf("正在连接电源管理模块，请稍后\n");
	printf("正在尝试完全关闭WIN10卓越性能模式，请稍后\n");
	printf("未知GUID!!!");
	system(" powercfg  /L");
	printf("请在下方的窗口中输入powercfg  /d 以及删除的卓越性能模式的GUID");
	system("cmd");
}

//6.win10 垃圾清理程序(目前只支持C盘文件清理)
void connect_6(int a)
{
    printf("请选择垃圾清理程序的版本\n");
    printf("1.version1.0.1 正式版\n");
    printf("2.version1.0.2 正式版\n");
    printf("3.version1.0.3 BETA\n");
    printf("请做出选择：\n");
    scanf_s("%d", &a);
    if (a == 1)
    {
        system("@echo off");
        system("echo 这个脚本由刘仁宇编写");
        system("echo 本脚本版本号：version 1.0.1");
        system("echo 开始清理垃圾文件");
        system("del /f /s /q %temp%");
        //system("由于verson 1.0.2版本出错，暂时不开放version1.0.2");
    }
    if (a == 2)
    {
        system("echo 本程序由刘仁宇编写");
        system("echo version1.0.2");
        system("del /f /s /q %systemdrive%\\*.tmp ");
        system("del /f /s /q %systemdrive%\\*._mp ");
        system("del /f /s /q %systemdrive%\\*.log ");
        system("del /f /s /q %systemdrive%\\*.gid ");
        system("del /f /s /q %systemdrive%\\*.chk ");
        system("del /f /s /q %systemdrive%\\*.old ");
        system("del /f /s /q %systemdrive%\\recycled\\*.* ");
        system("del /f /s /q %windir%\\*.bak ");
        system("del /f /s /q %windir%\\prefetch\\*.*");
        system("rd /s /q %windir%\\temp & md %windir%\\temp");
        system("del /f /q %userprofile%\\cookies\\*.* ");
        system("del /f /q %userprofile%\\recent\\*.* ");
        system("del /f /s /q \"%userprofile%\\Local Settings\\Temporary Internet Files\\*.*\" ");
        system("del /f /s /q \"%userprofile%\\Local Settings\\Temp\\*.*\" ");
        system("del /f /s /q \"%userprofile%\\recent\\*.*\" ");
    }
    if (a == 3)
    {
        system("本程序由刘仁宇编写");
        system("echo version 1.0.3 BETA");
        system("del /f /s /q %temp%");
        system("del /f /s /q %systemdrive%\\*.tmp ");
        system("del /f /s /q %systemdrive%\\*._mp ");
        system("del /f /s /q %systemdrive%\\*.log ");
        system("del /f /s /q %systemdrive%\\*.gid ");
        system("del /f /s /q %systemdrive%\\*.chk ");
        system("del /f /s /q %systemdrive%\\*.old ");
        system("del /f /s /q %systemdrive%\\recycled\\*.* ");
        system("del /f /s /q %windir%\\*.bak ");
        system("del /f /s /q %windir%\\prefetch\\*.*");
        system("rd /s /q %windir%\\temp & md %windir%\\temp");
        system("del /f /q %userprofile%\\cookies\\*.* ");
        system("del /f /q %userprofile%\\recent\\*.* ");
        system("del /f /s /q \"%userprofile%\\Local Settings\\Temporary Internet Files\\*.*\" ");
        system("del /f /s /q \"%userprofile%\\Local Settings\\Temp\\*.*\" ");
        system("del /f /s /q \"%userprofile%\\recent\\*.*\" ");
    }
}

//7.win10 启动命令提示符
void connect_7(int a)
{
	system("cmd");
}

//8.win10 启动powershell
void connect_8(int a)
{
	system("powershell");
}

//9.win10 系统文件修复
void connect_9(int a)
{
	system("sfc /scannow");
}

//10.win10 桌面图标异常修复
void connect_10(int a)
{
	/**********\
	* @echo off
	taskkill /f /im explorer.exe
	*CD /d %userprofile%\AppData\Local
	*DEL IconCache.db /a
	*start explorer.exe
	*echo 执行完成
	\**********/
	system("该功能暂时不开放");
	system("由于该功能需要使用数据库文件，删除缓存文件等操作，可能会引发问题，建议不使用本功能");
}

//11.win10 资源管理器异常修复
void connect_11(int a)
{
	/*************\
	*start powershell
	*echo start-process powershell -verb runas
	*sfc /scannow
	*taskmgr
	*taskkill /f /im explorer.exe /t
	*start explorer.exe
	\***************/
	system("该功能暂不开放");
}

//12.win10 启动任务管理器
void connect_12(int a)
{
	system("taskmgr");
}

//13.win10 python环境完善(已经安装python环境)
void connect_13(int a)
{
	/************\
	 echo off
	echo this program is powered by lry
	echo 编写：刘仁宇
	pip install pip
	pip install --upgrade pip
	pip install --xpython
	pip install absl-py
	pip install arxiv2bib
	pip install astunparse
	pip install attrs
	pip install backcall
	pip install baidu-api
	pip install beautifulsoup4
	pip install bibtexparser
	pip install bs4
	pip install cachetools
	pip install certifi
	pip install cffi
	pip install chardet
	pip install click
	pip install colorma
	pip install commonmark
	pip install configparser
	pip install dacite
	pip install decorator
	pip install dialite
	pip install distlib
	pip install docutils
	pip install filetype
	pip install fixit
	pip install flake8
	pip install Flask
	pip install flatbuffers
	pip install flexx
	pip install future
	pip install gast
	pip install google
	pip install google-auth
	pip install google-auth-oauthlib
	pip install google-pasta
	pip install graphviz
	pip install grpcio
	pip install h5py
	pip install habanero
	pip install idna
	pip install ipython
	pip install ipython-genutils
	pip install isbnlib
	pip install isort
	pip install itchat
	pip install itsdangerous
	pip install jazzit
	pip install jedi
	pip install Jinja2
	pip install jsonschema
	pip install Keras
	pip install Keras-Preprocessing
	pip install Kivy
	pip install kivy-deps.angle
	pip install kivy-deps.glew
	pip install deps.sd12
	pip install Kivy-Garden
	pip install libcst
	pip install lxml
	pip install mach-nix
	pip install Markdown
	pip install MarkupSafe
	pip install mccabe
	pip install mutagen
	pip install mxnet
	pip install mypy-extensions
	pip install numpy
	pip install oauthlib
	pip install opt-einsum
	pip install packaging
	pip install pandas
	pip install pandasgui
	pip install papis
	pip install parso
	pip install pbr
	pip install pickleshare
	pip install Pillow
	pip install pip
	pip install pippi
	pip install playsound
	pip install plotly
	pip install prompt-toolkit
	pip install protobuf
	pip install pscript
	pip install pyasnl
	pip install pyasnl-modules
	pip install pycodestyle
	pip install pycparser
	pip install pyfiglet
	pip install pyflakes
	pip install pygame
	pip install Pygments
	pip install pyinspect
	pip install PyJWT
	pip install pylambdarest
	pip install pynput
	pip install pyparsing
	pip install pyperclip
	pip install pypiwin32
	pip install pypng
	pip install PyQRCode
	pip install PyQt5
	pip install PyQt5-sip
	pip install PyQtWebEngine
	pip install pyrsistent
	pip install PySoundFile
	pip install python-dateutil
	pip install python-doi
	pip install python-slugify
	pip install pytz
	pip install pywin32
	pip install PyYAML
	pip install redis
	pip install requests
	pip install requests-oauthlib
	pip install resolvelib
	pip install retrying
	pip install rich
	pip install rsa
	pip install scipy
	pip install setuptools
	pip install simplejson
	pip install six
	pip install soupsieve
	pip install stevedore
	pip install tensorboard
	pip install tensorboard-plugin-wit
	pip install tenserflow
	pip install tenserflow-estimator
	pip install termcolor
	pip install text-unidecode
	pip install Theano
	pip install tqdm
	pip install traitlets
	pip install tree-formet
	pip install typing-inspect
	pip install urllib3
	pip install wcwidth
	pip install webruntime
	pip install Werkzeug
	pip install wheel
	pip install wrapt
	pip install wxpython
	pip install Kivy
	pip install Flexx
	pip install PyQt
	pip install Tkinter
	pip install Pywin32
	pip install PyGTK
	pip install pyui4win
	pip install wxpython
	pip install pip
	PIP install tensorflow
	pip install --upgrade pip
	echo this program is powered by lry
	\************/
	system("echo 本组件由刘仁宇编写");
	system("pip install --upgrade pip");
	system("pip install pip");
	system("pip install --xpython");
	system("pip install absl-py");
	system("pip install arxiv2bib");
	system("pip install astunparse");
	system("pip install attrs");
	system("pip install backcall");
	system("pip install baidu-api");
	system("pip install beautifulsoup4");
	system("pip install bibtexparser");
	system("pip install bs4");
	system("pip install cachetools");
	system("pip install certifi");
	system("pip install cffi");
	system("pip install chardet");
	system("pip install click");
	system("pip install colorma");
	system("pip install commonmark");
	system("pip install configparser");
	system("pip install dacite");
	system("pip install decorator");
	system("pip install dialite");
	system("pip install distlib");
	system("pip install docutils");
	system("pip install filetype");
	system("pip install fixit");
	system("pip install flake8");
	system("pip install Flask");
	system("pip install flatbuffers");
	system("pip install flexx");
	system("pip install future");
	system("pip install gast");
	system("pip install google");
	system("pip install google-auth");
	system("pip install google-auth-oauthlib");
	system("pip install google-pasta");
	system("pip install graphviz");
	system("pip install grpcio");
	system("pip install h5py");
	system("pip install habanero");
	system("pip install idna");
	system("pip install ipython");
	system("pip install ipython-genutils");
	system("pip install isbnlib");
	system("pip install isort");
	system("pip install itchat");
	system("pip install itsdangerous");
	system("pip install jazzit");
	system("pip install jedi");
	system("pip install jinja2");
	system("pip install jsonschema");
	system("pip install keras");
	system("pip install keras-preprocessing");
	system("pip install kivy");
	system("pip install kivy-deps.angle");
	system("pip install kivy-deps.glew");
	system("pip install deps.sd12");
	system("pip install kivy-garden");
	system("pip install libcst");
	system("pip install lxml");
	system("pip install mach-nix");
	system("pip install markdown");
	system("pip install markupsafe");
	system("pip install mccabe");
	system("pip install mutagen");
	system("pip install mxnet");
	system("pip install mypy-extensions");
	system("pip install numpy");
	system("pip install oauthlib");
	system("pip install opt-einsum");
	system("pip install packaging");
	system("pip install pandas");
	system("pip install pandasgui");
	system("pip install papis");
	system("pip install parso");
	system("pip install pbr");
	system("pip install pickleshare");
	system("pip install pillow");
	system("pip install pip");
	system("pip install pippi");
	system("pip install playsound");
	system("pip install plotly");
	system("pip install prompt-toolkit");
	system("pip install protobuf");
	system("pip install pscript");
	system("pip install pynasl");
	system("pip install pynasl-modules");
	system("pip install pycodestyle");
	system("pip install pycparser");
	system("pip install pyfiglet");
	system("pip install pyflakes");
	system("pip install pygame");
	system("pip install pygments");
	system("pip install pyinspect");
	system("pip install pyjwt");
	system("pip install pylambdarest");
	system("pip install pynput");
	system("pip install pyparsing");
	system("pip install pyperclip");
	system("pip install pypiwin32");
	system("pip install pypng");
	system("pip install pyqrcode");
	system("pip install pyqt5");
	system("pip install pyqt5-sip");
	system("pip install pyqtwebengine");
	system("pip install pyrsistent");
	system("pip install pysoundfile");
	system("pip install python-dateutil");
	system("pip install python-doi");
	system("pip install python-sluhgify");
	system("pip install pytz");
	system("pip install pywin32");
	system("pip install pyyaml");
	system("pip install redis");
	system("pip install requsets");
	system("pip install requests-oauthlib");
	system("pip install resolvelib");
	system("pip install retrying");
	system("pip install rich");
	system("pip install rsa");
	system("pip install scipy");
	system("pip install setuptools");
	system("pip install simplejson");
	system("pip install six");
	system("pip install soupsieve");
	system("pip install stevedore");
	system("pip install tensorboard");
	system("pip install tensorboard-plugin-wit");
	system("pip install tensorflow");
	system("pip install tensorflow-estimator");
	system("pip install termcolor");
	system("pip install text-unidecode");
	system("pip install theano");
	system("pip install tqdm");
	system("pip install traitlets");
	system("pip install free-formet");
	system("pip install typing-inspect");
	system("pip install urllib3");
	system("pip install wcwidth");
	system("pip install webruntime");
	system("pip install werkzeug");
	system("pip install wheel");
	system("pip install wrapt");
	system("pip install wxpython");
	system("pip install kivy");
	system("pip install flexx");
	system("pip install pyqt");
	system("pip install tkinter");
	system("pip install pywin32");
	system("pip install pygtk");
	system("pip install pyui4win");
	system("pip install wxpython");
	system("pip install pip");
	system("pip install tensorflow");
	system("pip install --upgrade pip");
	system("pip install opencv-python");
	system("echo 本程序模块由刘仁宇编写");
	system("echo 版本1.0.1");
	system("echo version 1.0.1");
}
void connect_14(int a)
{
	system("echo 本模块正在开发，请期待后续版本");
}
void connect_15(int a)
{
	system("echo 本模块正在开发，请期待后续版本");
}

void connect_16(int a)
{
	int b = 0;
	login(b);
}

void connect_17(int a)
{
    printf("本程序由刘仁宇开发，可以进行简单的数学计算\n");
    printf("本程序可以实现的功能：1、数字之和 2、数字的组数 3、样本方差 4、总体方差 5、样本标准差 6、总体标准差 7、平均值 8、数字的平方和 9、数字的立方和 10、数字的四次方之和 11、数字的最大值 12、数字的最小值 13、残差平方和\n");
    printf("即将启动主程序 main.exe");
    printf("正在启动，请稍后");
    Sleep(1000);
    system("cls");
    int i = 0;
    for (a = 0; a < 100; a++)
    {
        for (i = 0; i < a; i++)
        {
            printf(">");
        }
        printf("\n 进度：%d%c", a + 1, '%');
        printf("\n 正在加载，请稍后");
        system("cls");
    }
    printf("请输入数据的组数：");
    scanf_s("%d", &a);
    //此处的a为即将输入的数字的组数
    double b[1000];
    //下面开始导入即将输入的数字（不可多于1000组，否则会使程序出错）
    i = 0;
    //此处的i为检测输入的数字是第几个数字
    for (i = 0; i < a; i++)
    {
        scanf_s("%lf", &b[i]);
        //开始按照顺序读取每一个数字
    }
    double c;
    //定义一个变量c,用于储存数字之和的结果
    c = 0;
    //对c进行初始化，赋值为0
    for (i = 0; i < a; i++)
    {
        c = c + b[i];
        //使用数组元素b[i]对c进行累加操作，最终的结果就是数字之和
    }
    //下面开始输出数字之和的结果
    printf("1、数字之和：%lf\n", c);
    //数字的和输出完成
    //下面开始输出数字的组数
    printf("2、数字的组数：%d\n", a);
    //数字的组数输出完成
    //下面开始计算样本的方差
    //首先要定义一个数组d[1000]
    double d[1000];
    //定义一个数e ,用于储存样本的方差
    double e;
    e = 0;
    //对e进行初始化操作
    for (i = 0; i < a; i++)
    {
        d[i] = fabs(b[i] - (c / a));
        //此时的d[i]为每一项的数字与样本平均值之间的差
        e = e + d[i] * d[i];
        //使用数组元素d[i]^2对e进行累加操作,最终的结果除以项数就是样本总体的方差
    }
    printf("3、样本的方差：%lf\n", (e / (a - 1.0)));
    printf("4、总体的方差：%lf\n", (e / a));
    printf("5、样本的标准差：%lf\n", sqrt(e / (a - 1.0)));
    printf("6、总体的标准差：%lf\n", sqrt(e / a));
    printf("7、平均值：%lf\n", (c / a));
    //下面开始计算数字的平方和
    //首先定义一个数组f[i]
    double f[1000];
    //开始定义一个数字g,用于储存数字的平方和
    double g;
    //对于g进行初始化
    g = 0;
    for (i = 0; i < a; i++)
    {
        f[i] = b[i] * b[i];
        //此时的f[i]为b[i]所对应的平方
        g = g + f[i];
    }
    printf("8、数字的平方和：%lf\n", g);
    //开始定义一个数组j[i]
    double j[1000];
    //开始定义一个数字k,用于储存数字的立方和
    double k;
    //对于k进行初始化
    k = 0;
    for (i = 0; i < a; i++)
    {
        j[i] = b[i] * b[i] * b[i];
        //此时的j[i]为b[i]的立方
        k = k + j[i];
    }
    printf("9、数字的立方和：%lf\n", k);
    //定义一个数组m[i]
    double m[1000];
    //开始定义一个数字n，用于储存数字的四次方之和
    double n;
    //对n进行初始化
    n = 0;
    for (i = 0; i < a; i++)
    {
        m[i] = pow(b[i], 4);
        n = n + m[i];
    }
    printf("10、数字的立方和为:%lf\n", n);
    double max;
    double min;
    max = b[0];
    min = b[0];
    for (i = 0; i < a; i++)
    {
        if (min > b[i])
        {
            b[i] = min;
        }
        if (max < b[i])
        {
            b[i] = max;
        }
    }
    printf("11、数字的最大值为：%lf\n", max);
    printf("12、数字的最小值为：%lf\n", min);
    double l;
    l = 0;
    for (i = 0; i < a; i++)
    {
        l = l + pow(d[i], 2);
    }
    printf("13、残差平方和为：%lf\n", l);
    Sleep(10000);
    system("pause");
}

//输入错误判断函数
void error_warnings(int a)
{
	if (a == 1)
	{
		printf("ERROR_INPUT!\n");
	}
}

int login(int a)
{
    a = 0;
    printf("\n***********************************************************");
    printf("\n*      该程序启动完成，请选择您的登录方式vision1.0.5      *");
    printf("\n*1.正常注册用户  2.游客登录模式  3.开发人员/管理员登录模式*");
    printf("\n***********************************************************");
    printf("\n* 请勿在此处输入与数字无关的其他字符，否则会使程序出现异常*");
    printf("\n*      输入与1，2，3无关的数字，将会使本程序自动退出      *");
    printf("\n***********************************************************\n");
    scanf_s("%d", &a);
    switch (a)
    {
    case 1:
    {
        login1(a);
    }
    break;
    case 2:
    {
        youke(a);
    }
    break;
    case 3:
    {
        login3(a);
    }
    break;
    default:
    {
        error_all(0);
    }
    break;
    }
    return 0;
}

void login1(int a)
{
    account(1);
}

void login2(int a)
{
    printf("name: passenger\n");
    login2_1(a);
}

void login3(int a)
{
    printf("\nname administrator/admin\n");
    printf("please input the password:\n");
    char ch[] = { 'l','o','g','i','n','_','v','i','s','i','o','n','1','.','0','.','5' };
    char b[17];
    int i = 0;
    int t = 0;
    while (i < 17 && t == 0)
    {
        scanf_s("%c", &b[i]);
        if (b[i] == '\n')
        {
            t = 1;
        }
        i++;
    }
    i = 0;
    t = -1;
    while (i < 17)
    {
        if (ch[i] == b[i])
        {
            i++;
        }
        else
        {
            t++;
            i = 0;
            login3(t);
        }
    }
    if (i == 17)
    {
        login3_1(1);
    }
}

void account(int a)
{
    printf("\nname 用户\n");
    printf("please input the account:\n");
    char ch[] = { 'q','w','e','r','t','y','u','i','o','p' };
    char b[10];
    int i = 0;
    int t = 0;
    while (i < 10 && t == 0)
    {
        scanf_s("%c", &b[i]);
        if (b[i] == '\n')
        {
            t = 1;
        }
        i++;
    }
    i = 0;
    t = -1;
    while (i < 10)
    {
        if (ch[i] == b[i])
        {
            i++;
        }
        else
        {
            t++;
            i = 0;
            //account(t);
            break;
        }
    }
    if (i != 10)
    {
        account(t);
    }
    else
    {
        password(1);
    }
}

int password(int a)
{
    printf("请输入密码：\n");
    char ch[] = { '1','2','3','4','5','6','7','8','9','0' };
    char b[10];
    int i = 0;
    int t = 0;
    while (i < 10 && t == 0)
    {
        scanf_s("%c", &b[i]);
        if (b[i] == '\n')
        {
            t = 1;
        }
        i++;
    }
    i = 0;
    t = -1;
    while (i < 10)
    {
        if (ch[i] == b[i])
        {
            i++;
        }
        else
        {
            t++;
            i = 0;
            //password(t);
            break;
        }
    }
    if (a == 3)
    {
        printf("系统检测到您已经有三次密码输入错误\n");
        printf("请做出以下选择：\n");
        printf("1.继续输入密码\n");
        printf("2.密码提示\n");
        scanf_s("%d", &t);
        if (t == 1)
        {
            t--;
        }
        else if (t == 2)
        {
            forget(t);
        }
    }
    a++;
    if (i != 10)
    {
        password(a);
    }
    else
    {
        login1_1(1);
    }
    return 0;
}

int forget(int a)
{
    printf("密码提示: the key on the computer");
    password(a);
    return 0;
}

int youke(int a)
{
    printf("WARNING!!! please mind your id: passenger\n");
    login2(2);
    return 0;
}

int kaifarenyuan(int a)
{
    printf("请选择模式\n");
    printf("1.高级功能\n");
    printf("2.代码信息查询\n");
    printf("3.调试\n");
    printf("4.查看源代码\n");
    int b;
    b = 0;
    scanf_s("%d", &b);
    switch (b)
    {
    case 1:
    {
        xuanze6_1(a);
    }
    break;
    case 2:
    {
        xuanze6_2(a);
    }
    break;
    case 3:
    {
        tiaoshi(a);
    }
    break;
    case 4:
    {
        xk(a);
    }
    break;
    default:
    {
        error_all(a);
    }
    break;
    }
    return 0;
}

int xuanze0(int a)
{
    printf("\n*********************************************************");
    printf("\n*                                                       *");
    printf("\n*              请选择你想要的计算模型                   *");
    printf("\n*        1.圆锥，圆台，棱锥，球体的体积与表面积         *");
    printf("\n*                 2.方程求根计算器                      *");
    printf("\n*                   3.普通计算器                        *");
    printf("\n*                   4.猜数字游戏                        *");
    printf("\n*                   5.矩阵计算器                        *");
    printf("\n*                   6.高级功能                          *");
    printf("\n*                                                       *");
    printf("\n*********************************************************");
    printf("\n多功能计算器启动");
    printf("\nversion1.0.1");
    printf("\n开发人员：刘仁宇");
    printf("\n请选择程序计算模型\n");
    scanf_s("%d", &a);
    return a;
}

void xuanze1(int a)
{
    printf("\n计算圆锥，圆台，棱锥，球体的体积与表面积程序启动");
    printf("\n*********************************************************");
    printf("\n*              请选择你想要的计算模型                   *");
    printf("\n*            1.计算直圆锥的表面积和体积                 *");
    printf("\n*             2.计算棱锥的表面积和体积                  *");
    printf("\n*             3.计算球体的表面积和体积                  *");
    printf("\n*             4.计算圆台的表面积和体积                  *");
    printf("\n*********************************************************\n");
    int m;
    scanf_s("%d", &m);
    switch (m)
    {
    case 1:
    {
        xuanze1_1(1);
    }
    break;
    case 2:
    {
        xuanze1_2(2);
    }
    break;
    case 3:
    {
        xuanze1_3(3);
    }
    break;
    case 4:
    {
        xuanze1_4(4);
    }
    break;
    default:
    {
        error_all(0);
    }
    break;
    }
}

void xuanze2(int aa)
{
    double a, b, c, d, e, x, date, x1, x2, m, n, a1, b1, c1, date1, y1, y2, x21, K, z, x3, f, t;
    /*****************************************************************************\
    开始输入一元四次方程的系数，并且导入到a,b,c,d,e中。
    \*****************************************************************************/
    printf("WARNING!!!");
    printf("\n如果a为0，则会自动转化为三次方程求解");
    printf("\n如果a和b都为0，则会自动转化为二次方程求解");
    printf("\n如果a,b,c都为0，则会自动转化为一次方程求解");
    printf("\n如果a,b,c,d都为0，则可能会导致程序运行异常");
    printf("\n如果输入与数字无关的字符，会使程序异常或自动退出");
    printf("\n一元四次方程求根程序启动\n");
    printf("powered by 刘仁宇\n");
    printf("version 1.0.1\n");
    printf("请输入一元四次方程\n");
    printf("ax^4+bx^3+cx^2+dx+e=0\n");
    printf("最好不要输入大小超过2的16次方的数字\n");
    printf("请输入四次项的系数a                  ");
    scanf_s("%lf", &a);
    printf("\n请输入三次项的系数b                  ");
    scanf_s("%lf", &b);
    printf("\n请输入二次项的系数c                  ");
    scanf_s("%lf", &c);
    printf("\n请输入一次项的系数d                  ");
    scanf_s("%lf", &d);
    printf("\n请输入常数项e                        ");
    scanf_s("%lf", &e);
    /****************************************************************************\
    一元四次方程的系数读取完毕，准备开始计算。
    \****************************************************************************/
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                if (d == 0)
                {
                    if (e == 0)
                    {
                        /*********************************************************\
                        开始处理特殊情况1
                        \*********************************************************/
                        printf(" 无穷多解");
                        printf("\n infinite solutions");
                    }
                    else
                    {
                        /*********************************************************\
                        开始处理特殊情况2
                        \*********************************************************/
                        printf(" 无解");
                        printf("\n no solutions");
                    }
                }
                else
                {
                    /************************************************************\
                    开始计算一元一次方程
                    \************************************************************/
                    x = -e / d;
                    printf("x=%lf", x);
                }
            }
            else
            {
                /****************************************************************\
                开始计算一元二次方程
                \****************************************************************/
                date = d * d - 4 * e * c;
                if (date > 0)
                {
                    m = -d / (2 * c);
                    n = sqrt(fabs(date)) / (2 * c);
                    printf("x1=%lf\n", m + n);
                    printf("x2=%lf", m - n);
                }
                if (date == 0)
                {
                    m = -d / (2 * c);
                    printf("x1=x2=%lf", m);
                }
                if (date < 0)
                {
                    m = -d / (2 * c);
                    n = sqrt(fabs(date)) / (2 * c);
                    printf("x1=%lf+%lfi", m, n);
                    printf("x2=%lf-%lfi", m, n);
                }
            }
        }
        else
        {
            /**********************************************************************\
            //开始计算一元三次方程
            \**********************************************************************/
            a1 = c * c - 3 * b * d;
            b1 = c * d - 9 * b * e;
            c1 = d * d - 3 * b * d;
            date1 = b1 * b1 - 4 * a1 * c1;
            /********************************************************************\
            此处的if为盛金公式1
            \********************************************************************/
            if (a1 == 0)
            {
                if (b1 == 0)
                {
                    x1 = -c / (3 * b);
                    printf("此时本方程有三个相同实根\n");
                    printf("x1=x2=x3=%lf", x1);
                }
            }
            /********************************************************************\
            此处的if为盛金公式2
            \********************************************************************/
            if (date1 > 0)
            {
                x3 = 0;
                y1 = a1 * c + 3 * b * (-b1 + sqrt(date1)) / 2;
                y2 = a1 * c + 3 * b * (-b1 - sqrt(date1)) / 2;
                x1 = (-c - pow(y1, 1 / 3) - pow(y2, 1 / 3)) / (3 * b);
                x2 = (-c + (1 / 2) * (pow(y1, 1 / 3) + pow(y2, 1 / 3)));
                x21 = (sqrt(3) / 2) * (pow(y1, 1 / 3) - pow(y2, 1 / 3));
                printf("此时本方程有一个实根和两个共轭复根");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf+%lf", x2, x21);
                printf("\nx3=%lf-%lf", x2, x21);
            }
            /******************************************************************\
            此处的if为盛金公式3
            \******************************************************************/
            if (date1 == 0)
            {
                if (a1 == 0)
                {
                }
                else
                {
                    K = b1 / a1;
                    x1 = -c / b + K;
                    x2 = -K / 2;
                    printf("此时本方程有一个实根和一对相同实根");
                    printf("\nx1=%lf", x1);
                    printf("\nx2=%lf", x2);
                    printf("\nx3=%lf", x3);
                }
            }
            /******************************************************************\
            此处的if为盛金公式4
            \******************************************************************/
            if (date1 < 0)
            {
                a1 = c * c - 3 * b * d;
                b1 = c * d - 9 * b * e;
                c1 = d * d - 3 * b * d;
                date1 = b1 * b1 - 4 * a1 * c1;
                if (a1 > 0)
                {
                    f = 1;
                }
                if (a1 == 0)
                {
                    f = 0;
                }
                if (a1 < 0)
                {
                    f = -1;
                }
                t = (2 * a1 * c - 3 * b * b1) / (2 * sqrt(a1 * a1 * a1));
                z = acos(t) / 3;
                x1 = (-c - 2 * sqrt(a1) * cos(z)) / (3 * b);
                x2 = (-c + sqrt(a1) * (cos(z) + sqrt(3) * sin(z))) / (3 * b);
                x3 = (-c + sqrt(a1) * (cos(z) - sqrt(3) * sin(z))) / (3 * b);
                printf("此时本方程有三个不同的实根");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf", x2);
                printf("\nx3=%lf", x3);
            }
        }
    }
    else
    {
        /*********************************************************************\
        //开始计算一元四次方程
        \*********************************************************************/
        //开始重新定义数组
        double A, B, C, D, E, F, date3, x1, x2, x3, x4, X1, X2, T, y1, y2, y3, x, yy1, yy2, yy3, yyy1, yyy2, yyy3, yyy4, yyyy1, yyyy2, yyyy3, yyyy4;
        E = 3 * b * b * b * b + 16 * a * a * c * c - 16 * a * b * b * c + 16 * a * a * b * d - 64 * a * a * a * e;
        F = -pow((b * b * b - 4 * a * b * c + 8 * a * a * d), 2);
        D = -(3 * pow(b, 2) - 8 * a * c);
        A = D * D - 3 * E;
        B = D * E - 9 * F;
        C = E * E - 3 * D * F;
        date3 = B * B - 4 * A * C;
        if (D == 0)
        {
            if (E == 0)
            {
                if (F == 0)
                {
                    x1 = -b / (4 * a);
                    printf("\n此时本方程有一个四重根");
                    printf("\nx1=%lf", x1);
                    printf("\nx2=%lf", x1);
                    printf("\nx3=%lf", x1);
                    printf("\nx4=%lf", x1);
                }
            }
        }
        if (A == 0)
        {
            if (B == 0)
            {
                if (C == 0)
                {
                    if (fabs(E) > 0)
                    {
                        if (fabs(F) > 0)
                        {
                            if (fabs(D) > 0)
                            {
                                x1 = -b / (4 * a) - F / (4 * a * D);
                                x2 = -b / (4 * a) + (3 * F) / (4 * a * D);
                                printf("\n此时本方程有一个三重根");
                                printf("\nx1=%lf", x1);
                                printf("\nx2=%lf", x2);
                                printf("\nx3=%lf", x2);
                                printf("\nx4=%lf", x2);
                            }
                        }
                    }
                }
            }
        }
        if (E == 0)
        {
            if (F == 0)
            {
                if (fabs(D) > 0)
                {
                    x1 = (-b + sqrt(fabs(D))) / (4 * a);		//注意sqrt 
                    x2 = (-b - sqrt(fabs(D))) / (4 * a);        //注意sqrt
                    printf("\n此时方程有两对重根");
                    printf("\nx1=%lf", x1);
                    printf("\nx2=%lf", x1);
                    printf("\nx3=%lf", x2);
                    printf("\nx4=%lf", x2);
                }
            }
        }
        if (date3 == 0)
        {
            if (fabs(A) > 0)		//注意sqrt 
            {
                X1 = -D + B / A;
                X2 = -B / (2 * A);
                x1 = (-b + sqrt(X1) + 2 * sqrt(X2)) / (4 * a);		//注意sqrt 
                x2 = (-b + sqrt(X1) - 2 * sqrt(X2)) / (4 * a);		//注意sqrt 
                x3 = (-b + sqrt(X1)) / (4 * a);					//注意sqrt 
                printf("\n此时方程有一对重根");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf", x2);
                printf("\nx3=%lf", x3);
                printf("\nx4=%lf", x3);
            }
        }
        if (date3 < 0)		//important 注意sqrt 
        {
            T = acos((2 * A * D - 3 * B) / (2 * A * sqrt(A)));
            y1 = -(D + 2 * sqrt(A)) * cos(T / 3);
            y2 = -(D + 2 * sqrt(A)) * cos(T / 3 + 2 * 3.1415926535 / 3);
            y3 = -(D + 2 * sqrt(A)) * cos(T / 3 - 2 * 3.1415926535 / 3);
            x = -b / (4 * a);
            yy1 = sqrt(fabs(y1)) / (4 * a);
            yy2 = sqrt(fabs(y2)) / (4 * a);
            yy3 = sqrt(fabs(y3)) / (4 * a);
            if (y1 >= 0)
            {
                if (y2 >= 0)
                {
                    if (y3 >= 0)
                    {
                        //y1>0,y2>0,y3>0
                        x1 = x + yy1 + yy2 + yy3;
                        x2 = x + yy1 - yy2 - yy3;
                        x3 = x + yy1 - yy2 + yy3;
                        x4 = x - yy1 - yy2 + yy3;
                        printf("\nx1=%lf", x1);
                        printf("\nx2=%lf", x2);
                        printf("\nx3=%lf", x3);
                        printf("\nx4=%lf", x4);
                    }
                    else
                    {
                        //y1>0,y2>0,y3<0
                        x1 = x + yy1 + yy2;
                        x2 = x + yy1 - yy2;
                        x3 = x + yy1 - yy2;
                        x4 = x - yy1 - yy2;
                        printf("\nx1=%lf+%lfi", x1, yy3);
                        printf("\nx2=%lf-%lfi", x2, yy3);
                        printf("\nx3=%lf+%lfi", x3, yy3);
                        printf("\nx4=%lf-%lfi", x4, yy3);
                    }
                }
                else
                {
                    if (y3 >= 0)
                    {
                        //y1>0,y2<0,y3>0
                        x1 = x + yy1 + yy3;
                        x2 = x + yy1 - yy3;
                        x3 = x + yy1 + yy3;
                        x4 = x - yy1 + yy3;
                        printf("\nx1=%lf+%lfi", x1, yy2);
                        printf("\nx2=%lf-%lfi", x2, yy2);
                        printf("\nx3=%lf-%lfi", x3, yy2);
                        printf("\nx4=%lf-%lfi", x4, yy2);
                    }
                    else
                    {
                        //y1>0,y2<0,y3<0
                        x1 = x + yy1;
                        x2 = x + yy1;
                        x3 = x + yy1;
                        x4 = x - yy1;
                        yyy1 = yy2 + yy3;
                        yyy2 = yy2 + yy3;
                        yyy3 = -yy2 + yy3;
                        yyy4 = -yy2 + yy3;
                        printf("\nx1=%lf+%lfi", x1, yyy1);
                        printf("\nx2=%lf+%lfi", x2, yyy2);
                        printf("\nx3=%lf+%lfi", x3, yyy3);
                        printf("\nx4=%lf+%lfi", x4, yyy4);
                    }
                }
            }
            else
            {
                if (y2 >= 0)
                {
                    if (y3 >= 0)
                    {
                        //y1<0,y2>0,y3>0
                        x1 = x + yy2 + yy3;
                        x2 = x - yy2 - yy3;
                        x3 = x - yy2 + yy3;
                        x4 = x + yy2 - yy3;
                        printf("\nx1=%lf+%lfi", x1, yy1);
                        printf("\nx2=%lf+%lfi", x2, yy1);
                        printf("\nx3=%lf-%lfi", x3, yy1);
                        printf("\nx4=%lf-%lfi", x4, yy1);
                    }
                    else
                    {
                        //y1<0,y2>0,y3<0
                        x1 = x + yy2;
                        x2 = x - yy2;
                        x3 = x - yy2;
                        x4 = x + yy2;
                        yyy1 = yy1 + yy3;
                        yyy2 = yy1 - yy3;
                        yyy3 = -yy1 + yy3;
                        yyy4 = -yy1 - yy3;
                        printf("\nx1=%lf+%lfi", x1, yyy1);
                        printf("\nx2=%lf+%lfi", x2, yyy2);
                        printf("\nx3=%lf+%lfi", x3, yyy3);
                        printf("\nx4=%lf+%lfi", x4, yyy4);
                    }
                }
                else
                {
                    if (y3 >= 0)
                    {
                        //y1<0,y2<0,y3>0
                        x1 = x + yy3;
                        x2 = x - yy3;
                        x3 = x + yy3;
                        x4 = x - yy3;
                        yyy1 = yy1 + yy2;
                        yyy2 = yy1 - yy2;
                        yyy3 = -yy1 - yy2;
                        yyy4 = -yy1 + yy2;
                        printf("\nx1=%lf+%lfi", x1, yyy1);
                        printf("\nx2=%lf+%lfi", x2, yyy2);
                        printf("\nx3=%lf+%lfi", x3, yyy3);
                        printf("\nx4=%lf+%lfi", x4, yyy4);
                    }
                    else
                    {
                        //y1<0,y2<0,y3<0
                        x1 = x;
                        x2 = x;
                        x3 = x;
                        x4 = x;
                        yyy1 = yy1 + yy2 + yy3;
                        yyy2 = yy1 - yy2 - yy3;
                        yyy3 = -yy1 - yy2 + yy3;
                        yyy4 = -yy1 + yy2 - yy3;
                        printf("\nx1=%lf+%lf", x1, yyy1);
                        printf("\nx2=%lf+%lf", x2, yyy2);
                        printf("\nx3=%lf+%lf", x3, yyy3);
                        printf("\nx4=%lf+%lf", x4, yyy4);
                    }
                }
            }
        }
        if (date3 > 0)		//注意sqrt 
        {
            double y1, y2, z1, z2, z, w1, w2, x1, x2, x3, x4;
            y1 = A * D + (3 / 2) * (-B + sqrt(date3));
            y2 = A * D + (3 / 2) * (-B - sqrt(date3));
            z1 = (-2 * D - pow(y1, 1 / 3) - pow(y2, 1 / 3)) / 6;
            z2 = sqrt(3) * (pow(y1, 1 / 3) - pow(y2, 1 / 3)) / 6;
            z = -(-D + pow(y1, 1 / 3) + pow(y2, 1 / 3));
            w1 = sqrt(2 * z1 + 2 * sqrt(pow(z1, 2) + pow(z2, 2)));
            w2 = sqrt(-2 * z1 + 2 * sqrt(pow(z1, 2) + pow(z2, 2)));
            x1 = (-b + 2 * w1) / (4 * a);
            x2 = (-b - 2 * w1) / (4 * a);
            x3 = (-b - 2 * w2) / (4 * a);
            x4 = (-b + 2 * w2) / (4 * a);
            T = sqrt(fabs(z)) / (4 * a);		//注意sqrt 
            printf("x1=%lf+%lfi", x1, T);
            printf("x2=%lf+%lfi", x2, T);
            printf("x3=%lf-%lfi", x3, T);
            printf("x4=%lf-%lfi", x4, T);
        }
    }
}

void xuanze3(int a)
{
    printf("选择计算的类型");
    printf("\n加减乘除乘方开方");
    printf("\n阶乘");
    scanf_s("%d", &a);
    switch (a)
    {
    case 1:
    {
        calc0;
    }
    break;
    case 2:
    {
        calc1;
    }
    break;
    default:
    {
        error_all;
    }
    }
}

void xuanze4(int a)
{
    int b;
    printf("请输入你想要猜的数字的类型\n");
    printf("***************************************\n");
    printf("*             1.猜素数                *\n");
    printf("*           2.猜水仙花数              *\n");
    printf("*        3.验证哥德巴赫猜想           *\n");
    printf("***************************************\n");
    scanf_s("%d", &b);
    switch (b)
    {
    case 1:
    {
        xuanze4_1(b);
    }
    break;
    case 2:
    {
        xuanze4_2(b);
    }
    break;
    case 3:
    {
        xuanze4_3(b);
    }
    default:
    {
        error_all(b);
    }
    break;
    }
}

void xuanze5(int a)
{
    printf("\n该模块正在开发中，请期待后续的版本");
}

void xuanze6(int a)
{
    printf("version1.0.5\n");
    printf("code 0x0032ef\n");
    kaifarenyuan(a);
}



void error_all(int a)
{
    printf("\n请做出正确的选择！！！");
}

void error_calc0(int a)
{
    printf("\nERRORR: 0x00001f\n 内存溢出\n");
}

void error_calc1(int a)
{
    printf("被阶乘的数字必须是整数！！！");
}

void error_other(int a)
{
    printf("检测到本程序出现未知错误，请与开发人员联系");
}

void tiaoshi(int a)
{
    printf("\n该模块正在开发，请期待后续的版本");
    login3_1(1);
    printf("\nversion 1.0.3");
}

void login1_1(int a)
{
    //while (1)
    {
        a = 0;
        a = xuanze0(a);
        switch (a)
        {
        case 1:
        {
            xuanze1(a);
        }
        break;
        case 2:
        {
            xuanze2(a);
        }
        break;
        case 3:
        {
            xuanze3(a);
        }
        break;
        case 4:
        {
            xuanze4(a);
        }
        break;
        case 5:
        {
            xuanze5(a);
        }
        break;
        case 6:
        {
            printf("你没有权限访问此选项\n");
            printf("you don't have the right to use this project!!!\n");
            printf("请做出选择\n");
            printf("1.重新选择选项");
            printf("2.以管理员的身份登录");
            printf("3.退出本程序");
            int b;
            b = 0;
            scanf_s("%d", &b);
            switch (b)
            {
            case 1:
            {
                login1_1(a);
            }
            break;
            case 2:
            {
                login3(a);
            }
            break;
            case 3:
            {
                init(1);
            }
            }
        }
        break;
        default:
        {
            error_all(a);
        }
        break;
        }
        a = 0;
        printf("是否退出本程序\n");
        printf("是请按1，否请按2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(0);
        }
        else if (a == 2)
        {
            printf("重新加载程序中，请稍后\n");
        }
    }
}

void login2_1(int a)
{
    //while (1)
    {
        int b = 0;
        b = xuanze0(a);
        switch (b)
        {
        case 1:
        {
            xuanze1(a);
        }
        break;
        case 2:
        {
            error_right(1);
        }
        break;
        case 3:
        {
            xuanze3(a);
        }
        break;
        case 4:
        {
            error_right(1);
        }
        break;
        case 5:
        {
            error_right(1);
        }
        break;
        case 6:
        {
            error_right(1);
        }
        break;
        default:
        {
            error_all(a);
        }
        break;
        }
        a = 0;
        printf("是否退出本程序\n");
        printf("是请按1，否请按2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(1);
        }
        else if (a == 2)
        {
            printf("重新加载程序中，请稍后\n");
        }
    }
}

void login3_1(int a)
{
    //while (1)
    {
        a = 0;
        a = xuanze0(a);
        switch (a)
        {
        case 1:
        {
            xuanze1(a);
        }
        break;
        case 2:
        {
            xuanze2(a);
        }
        break;
        case 3:
        {
            xuanze3(a);
        }
        break;
        case 4:
        {
            xuanze4(a);
        }
        break;
        case 5:
        {
            xuanze5(a);
        }
        break;
        case 6:
        {
            xuanze6(a);
        }
        break;
        default:
        {
            error_all(a);
        }
        break;
        }
        a = 0;
        printf("是否退出本程序\n");
        printf("是请按1，否请按2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(1);
        }
        else if (a == 2)
        {
            printf("重新加载程序中，请稍后\n");
        }
    }
}

void calc0(float a, char b, float c)
{
    float a12, c12, d12;
    char ch;
    scanf_s("%f%c%f", &a12, &ch, &c12);
    switch (ch)
    {
    case '+':
    {
        printf("\n%f+%f=%f", a12, c12, (float)a12 + (float)c12);
    }
    break;
    case '-':
    {
        printf("\n%f-%f=%f", a12, c12, (float)a12 - (float)c12);
    }
    break;
    case '*':
    {
        printf("\n%f*%f=%f", a12, c12, (float)a12 * (float)c12);
    }
    break;
    case '/':
    {
        if (c12 == 0)
        {
            printf("MATH ERROR\n除数不能为0");
        }
        else
        {
            printf("\n%f/%f=%f", a12, c12, (float)(a12) / c12);
        }
    }
    break;
    case '^':
    {
        printf("\n%f^%f=%f", a12, c12, pow(a12, c12));
    }
    default:
    {
        error_all(1);
    }
    }

}

void calc1(int a)
{
    int sum;
    sum = 1;
    while (a > 0)
    {
        sum = sum * a;
        a--;
    }
}

void xuanze1_1(int a)
{
    printf("计算直圆锥的表面积和体积:\n");
    {
        float r, h1, V1, S1;
        printf("请输入r,h\n");
        scanf_s("%f%f", &r, &h1);
        V1 = (float)3.14159 * r * r * h1 / 3;
        S1 = (float)3.14159 * r * r + (float)sqrt(r * r + h1 * h1) * 2 * (float)3.14159 * r;
        printf("V=%.2lf\n", V1);
        printf("S=%.2lf\n", S1);
    }
}

void xuanze1_2(int a)
{
    printf("计算棱锥的表面积和体积:\n");
    {
        float a, h2, V2, S2;
        printf("请输入r,h\n");
        scanf_s("%f%f", &a, &h2);
        V2 = a * a * h2 / 3;
        S2 = a * a + sqrt(h2 * h2 + a * a / 4) * a * 2;
        printf("V=%.2f\n", V2);
        printf("S=%.2f\n", S2);
    }
}

void xuanze1_3(int a)
{
    printf("计算球体的表面积和体积:\n");
    {
        float r3, V3, S3;
        printf("请输入r\n");
        scanf_s("%f", &r3);
        V3 = 4 * 3.14159 * r3 * r3 * r3 / 3;
        S3 = 4 * 3.14159 * r3 * r3;
        printf("V=%.2f\n", V3);
        printf("S=%.2f\n", S3);
    }
}

void xuanze1_4(int a)
{
    printf("计算圆台的表面积和体积:\n");
    {
        float R1, R2, h, V4, S4, l;/*l是母线长*/
        printf("r1=");
        scanf_s("%f", &R1);
        printf("r2=");
        scanf_s("%f", &R2);
        printf("h=");
        scanf_s("%f", &h);
        l = sqrt(h * h + (R1 - R2) * (R1 - R2));
        V4 = 3.14159 * R1 * R1 * h / 3 - 3.14159 * R2 * R2 * h / 3;
        S4 = 3.14159 * ((float)R1 * R1 + R2 * R2) + 3.14159 * ((float)R1 + R2) * l;
        printf("V=%.2f\n", V4);
        printf("S=%.2f\n", S4);
    }
}

void xuanze4_1(int a)
{
    printf("\n猜素数程序启动\n");
    printf("请输入您所猜的数字\n");
    /********************************************\
    此模块由魏君豪提供
    \********************************************/
    //模块启动
    int m = 0, n = 2, Isprime = 0;
    scanf_s("%d", &m);
    for (; n < m; n++)
    {
        if (fabs(m % n) > 0)
            Isprime = 1;
        continue;
    }
    if (Isprime == 0)
    {
        printf("素数\n");
    }
    else if (Isprime != 0)
    {
        printf("不是素数\n");
    }
    //模块结束
}

void xuanze4_2(int a)
{
    int x1, x2, x3, i;
    printf("请输入一个不大于999的三位整数\n");
    scanf_s("%d", &i);
    x1 = i / 100;
    x2 = i / 10 - x1 * 10;
    x3 = i % 10;

    if (i == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3)
    {
        printf("这是一个水仙花数\n");
    }
    else
    {
        printf("很抱歉你输错了\n");
    }
}

void xuanze6_1(int a)
{
    printf("高级功能模块启动成功\n");
    printf("version 1.0.5\n");
    printf("IDM:visual studio\n");
}

int xuanze6_2(int a)
{
    printf("\n代码查询程序启动\n");
    printf("\nhttps://blog.csdn.net/liourenyu/article/details/111770137\n");
    return a;
}

void error_right(int a)
{
    int b;
    b = 0;
    printf("\nyou don't have the right to see this thing\n");
    printf("\n你可以做出以下的选择\n");
    printf("1.重新选择");
    printf("2.使用更高权限的账户登录");
    printf("3.退出本程序");
    scanf_s("%d", &a);
    if (a == 1)
    {
        printf("请重新作出选择");
        xuanze0(a);
    }
    else if (a == 2)
    {
        printf("正在返回到登录模块，请稍后");
        login(a);
    }
    else if (a == 3)
    {
        init(1);
    }
    else if ((a != 1) && (a != 2) && (a != 3))
    {
        error_all(0);
        youke(a);
    }
}

void xk(int a)
{
    printf("\n系统检测到您有权限查看源代码\n");
    printf("\n请在浏览器中输入以下连接查看源代码\n");
    printf("\n模块禁用\n");
    printf("\n0^0\n");
}

void login4(int a)
{
    a = 0;
    account(a);
}

void xuanze4_3(int a)
{
    int b;
    printf("请输入您想要进行验证的数字\n");
    printf("数字输入的范围为\n");
    printf("奇数为9至65535\n");
    printf("偶数为6至65534\n");
    printf("如果数字大小不符合上述要求，则有可能使程序异常\n");
    printf("具体异常情况则会由电脑系统的位数决定\n");
    printf("请在下面输入您想要验证的数字\n");
    scanf_s("%d", &b);
    if (b % 2 == 0)
    {
        eve(b);
    }
    else if (b % 2 == 1)
    {
        odd(b);
    }
    else if ((b % 2 != 0) && (b % 2 != 1))
    {
        printf("未知错误，请与软件开发者联系\n");
        printf("错误代码：ERROR01\n");
        printf("严重性：高（等级1）\n");
        printf("ERROR!!!\n");
    }
}

void eve(int a)
{
    if (a < 6)
    {
        printf("系统检测到您所输入的数值过小，无法验证哥德巴赫猜想，请重新输入\n");
        printf("请在下方重新输入：\n");
        scanf_s("%d", &a);
        //eve(a);
        if (a % 2 == 0)
        {
            eve(a);
        }
        else if (a % 2 != 0)
        {
            odd(a);
        }
    }
    else if (a >= 6)
    {
        printf("系统检测到您所输入的数字正常，可以进行计算\n");
        printf("下面为对您所输入的数字进行分解的结果\n");
        int i, j;
        unsigned int eve[3];
        eve[0] = a;
        i = eve[0];
        for (j = 3; j <= i / 2; j++)
        {
            if (isprime(j) == 1)
            {
                if ((isprime(i - j) == 1))
                {
                    eve[1] = j;
                    eve[2] = i - j;
                    printf("%d=%d+%d\n", eve[0], eve[1], eve[2]);
                }
            }
        }
    }
}

void odd(int a)
{
    if (a < 9)
    {
        printf("系统检测到您所输入的数字过小，无法验证哥德巴赫猜想，请重新输入\n");
        printf("请在下方重新输入\n");
        scanf_s("%d", &a);
        //odd(a);
        if (a % 2 == 0)
        {
            eve(a);
        }
        else if (a % 2 != 0)
        {
            odd(a);
        }
    }
    else if (a >= 9)
    {
        unsigned int odd[4];
        printf("系统检测到您所输入的数字正常，可以进行计算\n");
        printf("下面为对您所输入的数字进行分解的结果\n");
        int i, j, k;
        odd[0] = a;
        i = odd[0];
        for (k = 3; k <= i / 3; k++)
        {
            if (isprime(k) == 1)
            {
                for (j = k; j < i / 2; j++)
                {
                    if (isprime(j) == 1)
                    {
                        if (isprime(i - k - j) == 1 && ((i - k - j) >= j))
                        {
                            odd[1] = k;
                            odd[2] = j;
                            odd[3] = i - k - j;
                            printf("%d=%d+%d+%d", odd[0], odd[1], odd[2], odd[3]);
                        }
                    }
                }
            }
        }
    }
}

int isprime(int a)
{
    int i, j = 1;
    for (i = 2; i <= (int)sqrt(a); i++)
    {
        if (a % i == 0)
        {
            j = 0;
            break;
        }
    }
    return (j);
}
