#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
int init(int a);						//�������ģ��
void link(int a);						//ģ��֮������ģ��
void connect_0(int a);					//0.�˳�������
void connect_1(int a);					//1.win10 ���ϵͳ���ܣ���������CPU��Ƶ(WIN10׿Խ����ģʽ)
void connect_2(int a);					//2.win10 ���̼�鲢�޸��𻵵��ļ��Լ�����
void connect_3(int a);					//3.win10 ����ļ���ϵͳ�Ƿ���ֱ����Գ�ͻ
void connect_4(int a);					//4.win10 �г����еĵ�Դģʽ
void connect_5(int a);					//5.win10 ��ȫ�ر�WIN10׿Խ����ģʽ
void connect_6(int a);					//6.win10 �����������(Ŀǰֻ֧��C���ļ�����)
void connect_7(int a);					//7.win10 ����������ʾ��
void connect_8(int a);					//8.win10 ����powershell
void connect_9(int a);					//9.win10 ϵͳ�ļ��޸�
void connect_10(int a);					//10.win10 ����ͼ���쳣�޸�
void connect_11(int a);					//11.win10 ��Դ�������쳣�޸�
void connect_12(int a);					//12.win10 �������������
void connect_13(int a);					//13.win10 python��������(�Ѿ���װpython����)
void connect_14(int a);					//14.win10 python�ű����м���
void connect_15(int a);					//15.win10 ���python�ű�Ϊ��ִ�г���
void connect_16(int a);					//16.win10 �߼�������
void connect_17(int a);                 //17.win10 ��ѧͳ�Ƴ���
void error_warnings(int a);				//��������жϺ���
//ģ���ں���(16.�߼�������)
int login(int a);                       //�û���¼����Ҫ��ԭ����
void login1(int a);                     //����׼�����е�¼��ԭ����
void login2(int a);                     //�οͽ�����溯��
void login3(int a);                     //����Ա������溯��
void account(int a);                    //�û���¼�����˺�����Ҫ��ԭ����                            account:qwertyuiop
int password(int a);                    //�û���¼������������Ҫ��ԭ����                           password:1234567890
int forget(int a);                      //�û���������������������ʾ�ĺ���                           tips:the key on the computer
int youke(int a);                       //�û������õ�¼�ķ�ʽ�����ó�������Ҫ�ĺ���                   name:passenger
int kaifarenyuan(int a);                //������Ա��ѯԴ����ʱ���õĺ���                           sign in :login_vision1.0.4
int xuanze0(int a);                     //�û���δ����ѡ��ʱ�����õĺ���
void xuanze1(int a);                    //�û���ѡ���һ��ʱ�����õĺ���
void xuanze2(int aa);                   //�û���ѡ��ڶ���ʱ�����õĺ������ο�ģʽ�޷����룩
void xuanze3(int a);                    //�û���ѡ�������ʱ�����õĺ���
void xuanze4(int a);                    //�û���ѡ�������ʱ�����õĺ������ο�ģʽ�޷����룩
void xuanze5(int a);                    //�û���ѡ�������ʱ�����õĺ������ο�ģʽ�޷����룩
void xuanze6(int a);                    //�û���ѡ�������ʱ�����õĺ��������й���Աģʽ�ſɽ��룩
void calc0(float a, char b, float c);   //���ü򵥵ģ��Ӽ��˳��˷�����������������
void calc1(int a);                      //���ý�Ϊ���ӵĽ׳˺���
void xuanze1_1(int a);                  //1.Բ׶���������
void xuanze1_2(int a);                  //1.Բ̨���������
void xuanze1_3(int a);                  //1.��׶�����������
void xuanze1_4(int a);                  //1.��������������
void error_all(int a);                  //��ʾ����1
void error_calc0(int a);                //��ʾ����2
void error_calc1(int a);                //��ʾ����3
void error_other(int a);                //��ʾ����4
void tiaoshi(int a);                    //���Ժ���
void login1_1(int a);                   //�����û����������������õĺ���
void login2_1(int a);                   //�οͽ��������������õĺ���
void login3_1(int a);                   //����Ա�򿪷���Ա���뱾�����Լ�����Դ��������Ҫ�ĺ���
void xuanze4_1(int a);                  //4.1������
void xuanze4_2(int a);                  //4.2��ˮ�ɻ���
void xuanze6_1(int a);                  //1.�߼�����
int xuanze6_2(int a);                   //2.�����ѯ
void error_right(int a);                //Ȩ�޹���
void xk(int a);                         //����Դ�������
void login4(int a);                     //��������
void xuanze4_3(int a);                  //��֤��°ͺղ���ĺ���
void eve(int a);                        //��֤ż��
void odd(int a);                        //��֤����
int isprime(int a);                    //��֤���жϵ������Ƿ�Ϊ����
int main()
{
	SetConsoleTitle(TEXT("WIN10ϵͳС�������"));
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
	SetConsoleTitle(TEXT("WIN10ϵͳС�������"));
	int b;
	printf("\n****************************************\n");
	printf("**         WIN10ϵͳС�������        **\n");
	printf("**  �����·����г���С����������ѡ��  **\n");
	printf("**           version 1.0.1            **\n");
	printf("****************************************\n");
	printf("0.�˳�������\n");
	printf("1.win10 ���ϵͳ���ܣ���������CPU��Ƶ(WIN10׿Խ����ģʽ)\n");
	printf("2.win10 ���̼�鲢�޸��𻵵��ļ��Լ�����\n");
	printf("3.win10 ����ļ���ϵͳ�Ƿ���ֱ����Գ�ͻ\n");
	printf("4.win10 �г����еĵ�Դģʽ\n");
	printf("5.win10 ��ȫ�ر�WIN10׿Խ����ģʽ\n");
	printf("6.win10 �����������(Ŀǰֻ֧��C���ļ�����)\n");
	printf("7.win10 ����������ʾ��\n");
	printf("8.win10 ����powershell\n");
	printf("9.win10 ϵͳ�ļ��޸�\n");
	printf("10.win10 ����ͼ���쳣�޸�\n");
	printf("11.win10 ��Դ�������쳣�޸�\n");
	printf("12.win10 �������������\n");
	printf("13.win10 python��������(�Ѿ���װpython����)\n");
	printf("14.win10 python�ű����м���\n");
	printf("15.win10 ���python�ű�Ϊ��ִ���ļ�\n");
	printf("16.win10 �߼�������(Ŀǰ���ڽ���״̬)\n");
    printf("17.win10 ��ѧͳ�Ƴ���\n");
	printf("������ѡ��\n");
	scanf_s("%d", &b);
	return b;
}
void link(int a)
{
	switch (a)
	{
		case 0:
		{
			SetConsoleTitle(TEXT("0.�˳�������"));
			printf("��л����ʹ�ã��汾 v1.0.1\n");
			printf("����������������\n");
			exit(0);
		}
		break;
		case 1:
		{
			//cmd�д���Ϊ��powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>1.win10 ���ϵͳ���ܣ���������CPU��Ƶ(WIN10׿Խ����ģʽ)"));
			connect_1(1);
		}
		break;
		case 2:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>2.win10 ���̼�鲢�޸��𻵵��ļ��Լ�����(��Ҫ�Թ���Աģʽ����)"));
			connect_2(1);
		}
		break;
		case 3:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>3.win10 ����ļ���ϵͳ�Ƿ���ֱ����Գ�ͻ(��Ҫ�Թ���Աģʽ����)"));
			connect_3(1);
		}
		break;
		case 4:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>4.win10 �г����еĵ�Դģʽ"));
			connect_4(1);
		}
		break;
		case 5:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>5.win10 ��ȫ�ر�WIN10׿Խ����ģʽ(��Ҫ�ֶ�����)"));
			connect_5(1);
		}
		break;
		case 6:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>6.win10 �����������(Ŀǰֻ֧��C���ļ�����)"));
			connect_6(1);
		}
		break;
		case 7:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>7.win10 ����������ʾ��"));
			connect_7(1);
		}
		break;
		case 8:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>8.win10 ����powershell"));
			connect_8(1);
		}
		break;
		case 9:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>9.win10 ϵͳ�ļ��޸�"));
			connect_9(1);
		}
		break;
		case 10:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>10.win10 ����ͼ���쳣�޸�"));
			connect_10(1);
		}
		break;
		case 11:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>11.win10 ��Դ�������쳣�޸�"));
			connect_11(1);
		}
		break;
		case 12:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>12.win10 �������������"));
			connect_12(1);
		}
		break;
		case 13:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>13.win10 python��������(�Ѿ���װpython����)"));
			connect_13(1);
		}
		break;
		case 14:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>14.win10 python�ű����м���"));
            connect_14(1);
		}
		break;
		case 15:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>15.win10 ���python�ű�Ϊ��ִ���ļ�"));
            connect_15(1);
		}
		break;
		case 16:
		{
			SetConsoleTitle(TEXT("WIN10ϵͳС�������>16.win10 �߼�������"));
            //connect_16(1);
		}
		break;
        case 17:
        {
            SetConsoleTitle(TEXT("WIN10ϵͳС�������>17.win10 ��ѧͳ�Ƴ���"));
            connect_17(1);
        }
		default:
		{
			error_warnings(1);
		}
		break;
	}
}

//0.�˳�������
void connect_0(int a)
{
	printf("��л����ʹ�ã��汾 v1.0.1\n");
	printf("����������������\n");
	exit(0);
}

//1.win10 ���ϵͳ���ܣ���������CPU��Ƶ(WIN10׿Խ����ģʽ)
void connect_1(int a)
{
	//cmd ��Ӧ������Ĵ���Ϊ powercfg - duplicatescheme e9a42b02 - d5df - 448d - aa00 - 03f14749eb61
	printf("���������µĵ�Դ���������Ժ�\n");
	system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
	printf("\n�µĵ�Դ����������ɣ��÷���������һ���ĳ̶�����ߵ�������\n");
}

//2.win10 ���̼�鲢�޸��𻵵��ļ��Լ�����
void connect_2(int a)
{
	printf("��ʼ���ӹ���Աģʽ��");
	printf("���Ժ�\n");
	system("chkdsk");
}

//3.win10 ����ļ���ϵͳ�Ƿ���ֱ����Գ�ͻ
void connect_3(int a)
{
	printf("��ʼ���ӹ���Աģʽ�����Ժ�\n");
	system("sfc /scannow");
}

//4.win10 �г����еĵ�Դģʽ
void connect_4(int a)
{
	printf("�������ӵ�Դ����ģ�飬���Ժ�\n");
	system(" powercfg  /L");
	printf("\n��Դ����ģʽ�Ѿ�ȫ���г�\n");
}

//5.win10 ��ȫ�ر�WIN10׿Խ����ģʽ
void connect_5(int a)
{
	printf("�������ӵ�Դ����ģ�飬���Ժ�\n");
	printf("���ڳ�����ȫ�ر�WIN10׿Խ����ģʽ�����Ժ�\n");
	printf("δ֪GUID!!!");
	system(" powercfg  /L");
	printf("�����·��Ĵ���������powercfg  /d �Լ�ɾ����׿Խ����ģʽ��GUID");
	system("cmd");
}

//6.win10 �����������(Ŀǰֻ֧��C���ļ�����)
void connect_6(int a)
{
    printf("��ѡ�������������İ汾\n");
    printf("1.version1.0.1 ��ʽ��\n");
    printf("2.version1.0.2 ��ʽ��\n");
    printf("3.version1.0.3 BETA\n");
    printf("������ѡ��\n");
    scanf_s("%d", &a);
    if (a == 1)
    {
        system("@echo off");
        system("echo ����ű����������д");
        system("echo ���ű��汾�ţ�version 1.0.1");
        system("echo ��ʼ���������ļ�");
        system("del /f /s /q %temp%");
        //system("����verson 1.0.2�汾������ʱ������version1.0.2");
    }
    if (a == 2)
    {
        system("echo ���������������д");
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
        system("���������������д");
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

//7.win10 ����������ʾ��
void connect_7(int a)
{
	system("cmd");
}

//8.win10 ����powershell
void connect_8(int a)
{
	system("powershell");
}

//9.win10 ϵͳ�ļ��޸�
void connect_9(int a)
{
	system("sfc /scannow");
}

//10.win10 ����ͼ���쳣�޸�
void connect_10(int a)
{
	/**********\
	* @echo off
	taskkill /f /im explorer.exe
	*CD /d %userprofile%\AppData\Local
	*DEL IconCache.db /a
	*start explorer.exe
	*echo ִ�����
	\**********/
	system("�ù�����ʱ������");
	system("���ڸù�����Ҫʹ�����ݿ��ļ���ɾ�������ļ��Ȳ��������ܻ��������⣬���鲻ʹ�ñ�����");
}

//11.win10 ��Դ�������쳣�޸�
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
	system("�ù����ݲ�����");
}

//12.win10 �������������
void connect_12(int a)
{
	system("taskmgr");
}

//13.win10 python��������(�Ѿ���װpython����)
void connect_13(int a)
{
	/************\
	 echo off
	echo this program is powered by lry
	echo ��д��������
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
	system("echo ��������������д");
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
	system("echo ������ģ�����������д");
	system("echo �汾1.0.1");
	system("echo version 1.0.1");
}
void connect_14(int a)
{
	system("echo ��ģ�����ڿ��������ڴ������汾");
}
void connect_15(int a)
{
	system("echo ��ģ�����ڿ��������ڴ������汾");
}

void connect_16(int a)
{
	int b = 0;
	login(b);
}

void connect_17(int a)
{
    printf("��������������������Խ��м򵥵���ѧ����\n");
    printf("���������ʵ�ֵĹ��ܣ�1������֮�� 2�����ֵ����� 3���������� 4�����巽�� 5��������׼�� 6�������׼�� 7��ƽ��ֵ 8�����ֵ�ƽ���� 9�����ֵ������� 10�����ֵ��Ĵη�֮�� 11�����ֵ����ֵ 12�����ֵ���Сֵ 13���в�ƽ����\n");
    printf("�������������� main.exe");
    printf("�������������Ժ�");
    Sleep(1000);
    system("cls");
    int i = 0;
    for (a = 0; a < 100; a++)
    {
        for (i = 0; i < a; i++)
        {
            printf(">");
        }
        printf("\n ���ȣ�%d%c", a + 1, '%');
        printf("\n ���ڼ��أ����Ժ�");
        system("cls");
    }
    printf("���������ݵ�������");
    scanf_s("%d", &a);
    //�˴���aΪ������������ֵ�����
    double b[1000];
    //���濪ʼ���뼴����������֣����ɶ���1000�飬�����ʹ�������
    i = 0;
    //�˴���iΪ�������������ǵڼ�������
    for (i = 0; i < a; i++)
    {
        scanf_s("%lf", &b[i]);
        //��ʼ����˳���ȡÿһ������
    }
    double c;
    //����һ������c,���ڴ�������֮�͵Ľ��
    c = 0;
    //��c���г�ʼ������ֵΪ0
    for (i = 0; i < a; i++)
    {
        c = c + b[i];
        //ʹ������Ԫ��b[i]��c�����ۼӲ��������յĽ����������֮��
    }
    //���濪ʼ�������֮�͵Ľ��
    printf("1������֮�ͣ�%lf\n", c);
    //���ֵĺ�������
    //���濪ʼ������ֵ�����
    printf("2�����ֵ�������%d\n", a);
    //���ֵ�����������
    //���濪ʼ���������ķ���
    //����Ҫ����һ������d[1000]
    double d[1000];
    //����һ����e ,���ڴ��������ķ���
    double e;
    e = 0;
    //��e���г�ʼ������
    for (i = 0; i < a; i++)
    {
        d[i] = fabs(b[i] - (c / a));
        //��ʱ��d[i]Ϊÿһ�������������ƽ��ֵ֮��Ĳ�
        e = e + d[i] * d[i];
        //ʹ������Ԫ��d[i]^2��e�����ۼӲ���,���յĽ����������������������ķ���
    }
    printf("3�������ķ��%lf\n", (e / (a - 1.0)));
    printf("4������ķ��%lf\n", (e / a));
    printf("5�������ı�׼�%lf\n", sqrt(e / (a - 1.0)));
    printf("6������ı�׼�%lf\n", sqrt(e / a));
    printf("7��ƽ��ֵ��%lf\n", (c / a));
    //���濪ʼ�������ֵ�ƽ����
    //���ȶ���һ������f[i]
    double f[1000];
    //��ʼ����һ������g,���ڴ������ֵ�ƽ����
    double g;
    //����g���г�ʼ��
    g = 0;
    for (i = 0; i < a; i++)
    {
        f[i] = b[i] * b[i];
        //��ʱ��f[i]Ϊb[i]����Ӧ��ƽ��
        g = g + f[i];
    }
    printf("8�����ֵ�ƽ���ͣ�%lf\n", g);
    //��ʼ����һ������j[i]
    double j[1000];
    //��ʼ����һ������k,���ڴ������ֵ�������
    double k;
    //����k���г�ʼ��
    k = 0;
    for (i = 0; i < a; i++)
    {
        j[i] = b[i] * b[i] * b[i];
        //��ʱ��j[i]Ϊb[i]������
        k = k + j[i];
    }
    printf("9�����ֵ������ͣ�%lf\n", k);
    //����һ������m[i]
    double m[1000];
    //��ʼ����һ������n�����ڴ������ֵ��Ĵη�֮��
    double n;
    //��n���г�ʼ��
    n = 0;
    for (i = 0; i < a; i++)
    {
        m[i] = pow(b[i], 4);
        n = n + m[i];
    }
    printf("10�����ֵ�������Ϊ:%lf\n", n);
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
    printf("11�����ֵ����ֵΪ��%lf\n", max);
    printf("12�����ֵ���СֵΪ��%lf\n", min);
    double l;
    l = 0;
    for (i = 0; i < a; i++)
    {
        l = l + pow(d[i], 2);
    }
    printf("13���в�ƽ����Ϊ��%lf\n", l);
    Sleep(10000);
    system("pause");
}

//��������жϺ���
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
    printf("\n*      �ó���������ɣ���ѡ�����ĵ�¼��ʽvision1.0.5      *");
    printf("\n*1.����ע���û�  2.�ο͵�¼ģʽ  3.������Ա/����Ա��¼ģʽ*");
    printf("\n***********************************************************");
    printf("\n* �����ڴ˴������������޹ص������ַ��������ʹ��������쳣*");
    printf("\n*      ������1��2��3�޹ص����֣�����ʹ�������Զ��˳�      *");
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
    printf("\nname �û�\n");
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
    printf("���������룺\n");
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
        printf("ϵͳ��⵽���Ѿ������������������\n");
        printf("����������ѡ��\n");
        printf("1.������������\n");
        printf("2.������ʾ\n");
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
    printf("������ʾ: the key on the computer");
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
    printf("��ѡ��ģʽ\n");
    printf("1.�߼�����\n");
    printf("2.������Ϣ��ѯ\n");
    printf("3.����\n");
    printf("4.�鿴Դ����\n");
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
    printf("\n*              ��ѡ������Ҫ�ļ���ģ��                   *");
    printf("\n*        1.Բ׶��Բ̨����׶����������������         *");
    printf("\n*                 2.�������������                      *");
    printf("\n*                   3.��ͨ������                        *");
    printf("\n*                   4.��������Ϸ                        *");
    printf("\n*                   5.���������                        *");
    printf("\n*                   6.�߼�����                          *");
    printf("\n*                                                       *");
    printf("\n*********************************************************");
    printf("\n�๦�ܼ���������");
    printf("\nversion1.0.1");
    printf("\n������Ա��������");
    printf("\n��ѡ��������ģ��\n");
    scanf_s("%d", &a);
    return a;
}

void xuanze1(int a)
{
    printf("\n����Բ׶��Բ̨����׶������������������������");
    printf("\n*********************************************************");
    printf("\n*              ��ѡ������Ҫ�ļ���ģ��                   *");
    printf("\n*            1.����ֱԲ׶�ı���������                 *");
    printf("\n*             2.������׶�ı���������                  *");
    printf("\n*             3.��������ı���������                  *");
    printf("\n*             4.����Բ̨�ı���������                  *");
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
    ��ʼ����һԪ�Ĵη��̵�ϵ�������ҵ��뵽a,b,c,d,e�С�
    \*****************************************************************************/
    printf("WARNING!!!");
    printf("\n���aΪ0������Զ�ת��Ϊ���η������");
    printf("\n���a��b��Ϊ0������Զ�ת��Ϊ���η������");
    printf("\n���a,b,c��Ϊ0������Զ�ת��Ϊһ�η������");
    printf("\n���a,b,c,d��Ϊ0������ܻᵼ�³��������쳣");
    printf("\n��������������޹ص��ַ�����ʹ�����쳣���Զ��˳�");
    printf("\nһԪ�Ĵη��������������\n");
    printf("powered by ������\n");
    printf("version 1.0.1\n");
    printf("������һԪ�Ĵη���\n");
    printf("ax^4+bx^3+cx^2+dx+e=0\n");
    printf("��ò�Ҫ�����С����2��16�η�������\n");
    printf("�������Ĵ����ϵ��a                  ");
    scanf_s("%lf", &a);
    printf("\n�������������ϵ��b                  ");
    scanf_s("%lf", &b);
    printf("\n������������ϵ��c                  ");
    scanf_s("%lf", &c);
    printf("\n������һ�����ϵ��d                  ");
    scanf_s("%lf", &d);
    printf("\n�����볣����e                        ");
    scanf_s("%lf", &e);
    /****************************************************************************\
    һԪ�Ĵη��̵�ϵ����ȡ��ϣ�׼����ʼ���㡣
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
                        ��ʼ�����������1
                        \*********************************************************/
                        printf(" ������");
                        printf("\n infinite solutions");
                    }
                    else
                    {
                        /*********************************************************\
                        ��ʼ�����������2
                        \*********************************************************/
                        printf(" �޽�");
                        printf("\n no solutions");
                    }
                }
                else
                {
                    /************************************************************\
                    ��ʼ����һԪһ�η���
                    \************************************************************/
                    x = -e / d;
                    printf("x=%lf", x);
                }
            }
            else
            {
                /****************************************************************\
                ��ʼ����һԪ���η���
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
            //��ʼ����һԪ���η���
            \**********************************************************************/
            a1 = c * c - 3 * b * d;
            b1 = c * d - 9 * b * e;
            c1 = d * d - 3 * b * d;
            date1 = b1 * b1 - 4 * a1 * c1;
            /********************************************************************\
            �˴���ifΪʢ��ʽ1
            \********************************************************************/
            if (a1 == 0)
            {
                if (b1 == 0)
                {
                    x1 = -c / (3 * b);
                    printf("��ʱ��������������ͬʵ��\n");
                    printf("x1=x2=x3=%lf", x1);
                }
            }
            /********************************************************************\
            �˴���ifΪʢ��ʽ2
            \********************************************************************/
            if (date1 > 0)
            {
                x3 = 0;
                y1 = a1 * c + 3 * b * (-b1 + sqrt(date1)) / 2;
                y2 = a1 * c + 3 * b * (-b1 - sqrt(date1)) / 2;
                x1 = (-c - pow(y1, 1 / 3) - pow(y2, 1 / 3)) / (3 * b);
                x2 = (-c + (1 / 2) * (pow(y1, 1 / 3) + pow(y2, 1 / 3)));
                x21 = (sqrt(3) / 2) * (pow(y1, 1 / 3) - pow(y2, 1 / 3));
                printf("��ʱ��������һ��ʵ�������������");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf+%lf", x2, x21);
                printf("\nx3=%lf-%lf", x2, x21);
            }
            /******************************************************************\
            �˴���ifΪʢ��ʽ3
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
                    printf("��ʱ��������һ��ʵ����һ����ͬʵ��");
                    printf("\nx1=%lf", x1);
                    printf("\nx2=%lf", x2);
                    printf("\nx3=%lf", x3);
                }
            }
            /******************************************************************\
            �˴���ifΪʢ��ʽ4
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
                printf("��ʱ��������������ͬ��ʵ��");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf", x2);
                printf("\nx3=%lf", x3);
            }
        }
    }
    else
    {
        /*********************************************************************\
        //��ʼ����һԪ�Ĵη���
        \*********************************************************************/
        //��ʼ���¶�������
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
                    printf("\n��ʱ��������һ�����ظ�");
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
                                printf("\n��ʱ��������һ�����ظ�");
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
                    x1 = (-b + sqrt(fabs(D))) / (4 * a);		//ע��sqrt 
                    x2 = (-b - sqrt(fabs(D))) / (4 * a);        //ע��sqrt
                    printf("\n��ʱ�����������ظ�");
                    printf("\nx1=%lf", x1);
                    printf("\nx2=%lf", x1);
                    printf("\nx3=%lf", x2);
                    printf("\nx4=%lf", x2);
                }
            }
        }
        if (date3 == 0)
        {
            if (fabs(A) > 0)		//ע��sqrt 
            {
                X1 = -D + B / A;
                X2 = -B / (2 * A);
                x1 = (-b + sqrt(X1) + 2 * sqrt(X2)) / (4 * a);		//ע��sqrt 
                x2 = (-b + sqrt(X1) - 2 * sqrt(X2)) / (4 * a);		//ע��sqrt 
                x3 = (-b + sqrt(X1)) / (4 * a);					//ע��sqrt 
                printf("\n��ʱ������һ���ظ�");
                printf("\nx1=%lf", x1);
                printf("\nx2=%lf", x2);
                printf("\nx3=%lf", x3);
                printf("\nx4=%lf", x3);
            }
        }
        if (date3 < 0)		//important ע��sqrt 
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
        if (date3 > 0)		//ע��sqrt 
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
            T = sqrt(fabs(z)) / (4 * a);		//ע��sqrt 
            printf("x1=%lf+%lfi", x1, T);
            printf("x2=%lf+%lfi", x2, T);
            printf("x3=%lf-%lfi", x3, T);
            printf("x4=%lf-%lfi", x4, T);
        }
    }
}

void xuanze3(int a)
{
    printf("ѡ����������");
    printf("\n�Ӽ��˳��˷�����");
    printf("\n�׳�");
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
    printf("����������Ҫ�µ����ֵ�����\n");
    printf("***************************************\n");
    printf("*             1.������                *\n");
    printf("*           2.��ˮ�ɻ���              *\n");
    printf("*        3.��֤��°ͺղ���           *\n");
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
    printf("\n��ģ�����ڿ����У����ڴ������İ汾");
}

void xuanze6(int a)
{
    printf("version1.0.5\n");
    printf("code 0x0032ef\n");
    kaifarenyuan(a);
}



void error_all(int a)
{
    printf("\n��������ȷ��ѡ�񣡣���");
}

void error_calc0(int a)
{
    printf("\nERRORR: 0x00001f\n �ڴ����\n");
}

void error_calc1(int a)
{
    printf("���׳˵����ֱ���������������");
}

void error_other(int a)
{
    printf("��⵽���������δ֪�������뿪����Ա��ϵ");
}

void tiaoshi(int a)
{
    printf("\n��ģ�����ڿ��������ڴ������İ汾");
    login3_1(1);
    printf("\nversion 1.0.3");
}

void login1_1(int a)
{
    while (1)
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
            printf("��û��Ȩ�޷��ʴ�ѡ��\n");
            printf("you don't have the right to use this project!!!\n");
            printf("������ѡ��\n");
            printf("1.����ѡ��ѡ��");
            printf("2.�Թ���Ա����ݵ�¼");
            printf("3.�˳�������");
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
        printf("�Ƿ��˳�������\n");
        printf("���밴1�����밴2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(0);
        }
        else if (a == 2)
        {
            printf("���¼��س����У����Ժ�\n");
        }
    }
}

void login2_1(int a)
{
    while (1)
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
        printf("�Ƿ��˳�������\n");
        printf("���밴1�����밴2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(1);
        }
        else if (a == 2)
        {
            printf("���¼��س����У����Ժ�\n");
        }
    }
}

void login3_1(int a)
{
    while (1)
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
        printf("�Ƿ��˳�������\n");
        printf("���밴1�����밴2\n");
        scanf_s("%d", &a);
        if (a == 1)
        {
            init(1);
        }
        else if (a == 2)
        {
            printf("���¼��س����У����Ժ�\n");
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
            printf("MATH ERROR\n��������Ϊ0");
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
    printf("����ֱԲ׶�ı���������:\n");
    {
        float r, h1, V1, S1;
        printf("������r,h\n");
        scanf_s("%f%f", &r, &h1);
        V1 = (float)3.14159 * r * r * h1 / 3;
        S1 = (float)3.14159 * r * r + (float)sqrt(r * r + h1 * h1) * 2 * (float)3.14159 * r;
        printf("V=%.2lf\n", V1);
        printf("S=%.2lf\n", S1);
    }
}

void xuanze1_2(int a)
{
    printf("������׶�ı���������:\n");
    {
        float a, h2, V2, S2;
        printf("������r,h\n");
        scanf_s("%f%f", &a, &h2);
        V2 = a * a * h2 / 3;
        S2 = a * a + sqrt(h2 * h2 + a * a / 4) * a * 2;
        printf("V=%.2f\n", V2);
        printf("S=%.2f\n", S2);
    }
}

void xuanze1_3(int a)
{
    printf("��������ı���������:\n");
    {
        float r3, V3, S3;
        printf("������r\n");
        scanf_s("%f", &r3);
        V3 = 4 * 3.14159 * r3 * r3 * r3 / 3;
        S3 = 4 * 3.14159 * r3 * r3;
        printf("V=%.2f\n", V3);
        printf("S=%.2f\n", S3);
    }
}

void xuanze1_4(int a)
{
    printf("����Բ̨�ı���������:\n");
    {
        float R1, R2, h, V4, S4, l;/*l��ĸ�߳�*/
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
    printf("\n��������������\n");
    printf("�����������µ�����\n");
    /********************************************\
    ��ģ����κ�����ṩ
    \********************************************/
    //ģ������
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
        printf("����\n");
    }
    else if (Isprime != 0)
    {
        printf("��������\n");
    }
    //ģ�����
}

void xuanze4_2(int a)
{
    int x1, x2, x3, i;
    printf("������һ��������999����λ����\n");
    scanf_s("%d", &i);
    x1 = i / 100;
    x2 = i / 10 - x1 * 10;
    x3 = i % 10;

    if (i == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3)
    {
        printf("����һ��ˮ�ɻ���\n");
    }
    else
    {
        printf("�ܱ�Ǹ�������\n");
    }
}

void xuanze6_1(int a)
{
    printf("�߼�����ģ�������ɹ�\n");
    printf("version 1.0.5\n");
    printf("IDM:visual studio\n");
}

int xuanze6_2(int a)
{
    printf("\n�����ѯ��������\n");
    printf("\nhttps://blog.csdn.net/liourenyu/article/details/111770137\n");
    return a;
}

void error_right(int a)
{
    int b;
    b = 0;
    printf("\nyou don't have the right to see this thing\n");
    printf("\n������������µ�ѡ��\n");
    printf("1.����ѡ��");
    printf("2.ʹ�ø���Ȩ�޵��˻���¼");
    printf("3.�˳�������");
    scanf_s("%d", &a);
    if (a == 1)
    {
        printf("����������ѡ��");
        xuanze0(a);
    }
    else if (a == 2)
    {
        printf("���ڷ��ص���¼ģ�飬���Ժ�");
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
    printf("\nϵͳ��⵽����Ȩ�޲鿴Դ����\n");
    printf("\n����������������������Ӳ鿴Դ����\n");
    printf("\nģ�����\n");
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
    printf("����������Ҫ������֤������\n");
    printf("��������ķ�ΧΪ\n");
    printf("����Ϊ9��65535\n");
    printf("ż��Ϊ6��65534\n");
    printf("������ִ�С����������Ҫ�����п���ʹ�����쳣\n");
    printf("�����쳣�������ɵ���ϵͳ��λ������\n");
    printf("����������������Ҫ��֤������\n");
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
        printf("δ֪�������������������ϵ\n");
        printf("������룺ERROR01\n");
        printf("�����ԣ��ߣ��ȼ�1��\n");
        printf("ERROR!!!\n");
    }
}

void eve(int a)
{
    if (a < 6)
    {
        printf("ϵͳ��⵽�����������ֵ��С���޷���֤��°ͺղ��룬����������\n");
        printf("�����·��������룺\n");
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
        printf("ϵͳ��⵽����������������������Խ��м���\n");
        printf("����Ϊ��������������ֽ��зֽ�Ľ��\n");
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
        printf("ϵͳ��⵽������������ֹ�С���޷���֤��°ͺղ��룬����������\n");
        printf("�����·���������\n");
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
        printf("ϵͳ��⵽����������������������Խ��м���\n");
        printf("����Ϊ��������������ֽ��зֽ�Ľ��\n");
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