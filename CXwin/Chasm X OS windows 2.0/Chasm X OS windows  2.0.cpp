#include <bits/stdc++.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS 
#include<ctime>
#include<stdio.h>
using namespace std;
int main(){
	long long n=0,m,a=0,a00,a000=0;
	a1:
		cout<<"Chasm X OS windows 2.0 "<<endl;
		cout<<"海内存知己，天涯若比邻~"; 
		cout<<endl<<"        启动中";
		for(int a=1;a<=15;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"Chasm X OS windows 2.0 "<<endl;
			cout<<"海内存知己，天涯若比邻~"; 
			cout<<endl<<"        启动中";
		}
		system("cls");
		cout<<"正在初始化，请稍等";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"正在初始化，请稍等";
		}
		system("cls");
		if(a000==1) goto a6; 
		a0:
			cout<<"请输入 CXwin2.0 八位激活码:" ;
			cin>>a00;
			if(a00==33550336){
				cout<<"激活码正确！"<<endl;
				a000++;
				Sleep(1000);
		   		system("cls");
		   		goto a6; 
			}
			else{
				cout<<"激活码错误！"<<endl; 
				Sleep(1000);
		   		system("cls");
				goto a0;
			}
		a6:
			if(n>0){
				goto a2;
			}
		a5:
			cout<<"   Administrator   "<<endl;
			cout<<"┌────────┐"<<endl ;
			cout<<"│      ###       │"<<endl ;
			cout<<"│    #     #     │"<<endl ;
			cout<<"│   #       #    │"<<endl ;
			cout<<"│    #     #     │"<<endl ;
			cout<<"│      ###       │"<<endl ;
			cout<<"│    #     #     │"<<endl ;
			cout<<"│   #       #    │"<<endl ;
			cout<<"│  #         #   │"<<endl ;
			cout<<"└────────┘"<<endl <<endl;
			cout<<"请设置密码(只允许数字)：";
			cin>>n;
			int n000;
			cout<<"请重复密码：";
			cin>>n000;
			if(n000==n){
				cout<<"准备重启系统……"<<endl;  
				Sleep(3000);
	    		system("cls");
				goto a1; 
			}
			else{
				cout<<"重复错误！";
				Sleep(500);
	    		system("cls");
				goto a5; 
			}
	a2:
		cout<<"   Administrator   "<<endl;
		cout<<"┌────────┐"<<endl ;
		cout<<"│      ###       │"<<endl ;
		cout<<"│    #     #     │"<<endl ;
		cout<<"│   #       #    │"<<endl ;
		cout<<"│    #     #     │"<<endl ;
		cout<<"│      ###       │"<<endl ;
		cout<<"│    #     #     │"<<endl ;
		cout<<"│   #       #    │"<<endl ;
		cout<<"│  #         #   │"<<endl ;
		cout<<"└────────┘"<<endl <<endl;
		cout<<"请输入密码：";
		cin>>m;
		if(m==n){
			cout<<"密码正确"<<endl; 
			Sleep(500);
			goto a3; 
		} 
		cout<<"密码错误！"<<endl; 
		a++;
		Sleep(500);
	    system("cls");
		if(a>=5){
			cout<<"已锁定，10秒后解除！"<<endl; 
			Sleep(10000); 
		}
		Sleep(500);
		goto a2;
	a3:
		Sleep(500);
	    system("cls");
		cout<<"欢迎进入Chasm X OS windows 2.0 ！"<<endl;
		Sleep(1000);
	    system("cls");
		cout<<"请稍等";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"请稍等";
		}
	    system("cls");
		cout<<"正在加载Chasm X OS windows桌面";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"正在加载Chasm X OS windows桌面";
		}
	    system("cls");
		cout<<"正在加载Chasm X OS windows应用程序";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"正在加载Chasm X OS windows应用程序";
		}
	    system("cls");
		cout<<"加载完毕!"<<endl;
		Sleep(1000);
	    system("cls");
	    cout<<"您登陆的时间是:";
	    int b;
	    time_t nowtime;
		time(&nowtime); 
		tm* p = localtime(&nowtime); 
		printf("%04d:%02d:%02d %02d:%02d:%02d\n", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
		cout<<endl;
    a4:
    	cout<<"┌─────┐"<<"     "<<"┌─────┐"<<endl;
    	cout<<"│          │"<<"     "<<"│          │"<<endl;
    	cout<<"│          │"<<"     "<<"│          │"<<endl;
		cout<<"│  计算机  │"<<"     "<<"│   抽奖   │"<<endl;
    	cout<<"│          │"<<"     "<<"│          │"<<endl;
    	cout<<"│          │"<<"     "<<"│        ╱╲"<<endl;
    	cout<<"└─────┘"<<"     "<<"└────╲╱"<<endl<<endl;
		Sleep(500);
    	cout<<"┌─────┐"<<"     "<<"┌─────┐"<<endl;
    	cout<<"│          │"<<"     "<<"│          │"<<endl;
    	cout<<"│          │"<<"     "<<"│   选择   │"<<endl;
		cout<<"│   寻数   │"<<"     "<<"│  困难症  │"<<endl;
    	cout<<"│          │"<<"     "<<"│  的福音  │"<<endl;
    	cout<<"│        ╱╲"<<"     "<<"│        ╱╲"<<endl;
    	cout<<"└────╲╱"<<"     "<<"└────╲╱"<<endl<<endl;
		Sleep(500);
		cout<<"请选择您要打开的程序："<<endl;
		Sleep(100);
		cout<<"打开计算机请输入 1"<<endl;
		Sleep(100);
		cout<<"打开寻数游戏请输入 2"<<endl;
		Sleep(100);
		cout<<"打开抽奖游戏请输入 3"<<endl;
		Sleep(100);
		cout<<"打开选择困难症的福音请输入 4"<<endl<<"请输入：";
		cin>>b;
		if(b==1){
	   		system("cls");
			goto b1;
		}else if(b==2){
	   		system("cls");
			goto b2;
		}else if(b==3){
	   		system("cls");
			goto b3;
		}else if(b==4){
	   		system("cls");
			goto b4;
		}else{
			cout<<"输入错误！"; 
			Sleep(500);
	   		system("cls");
			goto a4; 
		}
		b1:
			int f;
			cout<<"—计算机——————————————————"<<endl;
			cout<<endl;
			cout<<"┌─┐硬盘（2）────────────       "<<endl;
			cout<<"│  │"<<endl;
			cout<<"│  └┐┌──┐ ┌───────┐     "<<endl;
			cout<<"│    ││    │ │本地磁盘(C：) │     "<<endl;
			cout<<"│    ││ C: │ └───────┘     "<<endl;
			cout<<"│    ││    │  ■■■■□□□□       "<<endl;
			cout<<"│    │└──┘  已用2GB，共4GB         "<<endl;
			cout<<"│    │"<<endl;
			Sleep(100);
			cout<<"│    │┌──┐ ┌───────┐     "<<endl;
			cout<<"│    ││    │ │本地磁盘(D：) │     "<<endl;
			cout<<"│    ││ D: │ └───────┘     "<<endl;
			cout<<"│    ││    │  ■■□□□□□□       "<<endl;
			cout<<"│    │└──┘  已用1GB，共4GB         "<<endl;
			cout<<"└──┘"<<endl;
			cout<<endl;
			Sleep(100);
			cout<<"请选择您要打开的磁盘：          "<<endl;
			Sleep(100);
			cout<<"打开本地磁盘(C:)请输入 1        "<<endl;
			Sleep(100);
			cout<<"打开本地磁盘(D:)请输入 2        "<<endl;
			Sleep(100);
			cout<<"返回上一级请输入 3              "<<endl<<"请输入：";
			cin>>f;
			Sleep(500);
			if(f==1){
		   		system("cls");
				goto d1;
			}else if(f==2){
		   		system("cls");
				goto d2;
			}else if(f==3){
		   		system("cls");
				goto a4;
			}else{
				cout<<"输入错误！"; 
				Sleep(500);
		   		system("cls");
				goto b1; 
			}
			d1:
				int g; 
				cout<<"—C:/ ———————————————————————————————"<<endl;
				cout<<"┌──┐|名称                            |类型          |大小    "<<endl; 
				cout<<"│    │———————————————————————————"<<endl;
				cout<<"│    │|用户                            |锁定文件夹    |1.32GB   "<<endl;
				Sleep(100);
				cout<<"│    │|YU游戏库                        |文件夹        |614.1MB   "<<endl;
				Sleep(100);
				cout<<"│    │|Chasm X OS                      |文件夹        |81.92MB    "<<endl<<"└──┘———————————————————————————"<<endl;
				Sleep(100);
				cout<<endl<<"请选择您要打开的文件："<<endl;
				Sleep(100);
				cout<<"打开“用户”请输入 1"<<endl;
				Sleep(100);
				cout<<"打开“YU游戏库”请输入 2"<<endl;
				Sleep(100);
				cout<<"打开“Chasm X OS”请输入 3"<<endl;
				Sleep(100);
				cout<<"返回上一级请输入 4"<<endl<<"请输入：";
				cin>>g;
				if(g==1){
					cout<<"无法打开此文件夹！"; 
					Sleep(1000);
			   		system("cls");
					goto d1; 
				}else if(g==2){
			   		system("cls");
					goto e0;
				}else if(g==3){
			   		system("cls");
					goto e1;
				}else if(g==4){
			   		system("cls");
					goto b1;
				}else{
					cout<<"输入错误！"; 
					Sleep(500);
			   		system("cls");
					goto d1; 
				}
				e0:
					int o;
					cout<<"—C:/ YU游戏库/ ————————————————————————"<<endl;
					cout<<"┌──┐|名称                            |类型          |大小      "<<endl; 
					cout<<"│    │———————————————————————————"<<endl;
					cout<<"│    │|寻数.exe                        |应用程序      |354.1MB   "<<endl;
					Sleep(100);
					cout<<"│    │|抽奖.exe                        |应用程序      |140,800KB   "<<endl;
					Sleep(100);
					cout<<"│    │|选择困难症的福音.exe            |应用程序      |125,400KB    "<<endl<<"└──┘———————————————————————————"<<endl;
					Sleep(100);
					cout<<endl<<"请选择您要打开的文件："<<endl;
					Sleep(100);
					cout<<"打开“寻数.exe”请输入 1"<<endl;
					Sleep(100);
					cout<<"打开“抽奖.exe”请输入 2"<<endl;
					Sleep(100);
					cout<<"打开“选择困难症的福音.exe”请输入 3"<<endl;
					Sleep(100);
					cout<<"返回上一级请输入 4"<<endl<<"请输入：";
					cin>>o;
					if(o==1){
				   		system("cls");
						goto b2; 
					}else if(o==2){
				   		system("cls");
						goto b3;
					}else if(o==3){
				   		system("cls");
						goto b4;
					}else if(o==4){
				   		system("cls");
						goto d1;
					}else{
						cout<<"输入错误！"; 
						Sleep(500);
				   		system("cls");
						goto e0; 
					}
				e1: 
					int h;
					cout<<"—C:/ Chasm X OS/ ———————————————————————"<<endl;
					cout<<"┌──┐|名称                            |类型          |大小      "<<endl; 
					cout<<"│    │———————————————————————————"<<endl;
					cout<<"│    │|简介及说明.txt                  |文本文档      |512KB   "<<endl;
					Sleep(100);
					cout<<"│    │|Chasm X 官网网址.txt            |文本文档      |256KB   "<<endl;
					Sleep(100);
					cout<<"│    │|CXAY工作室官网网址.txt          |文本文档      |256KB   "<<endl;
					Sleep(100);
					cout<<"│    │|系统后台管理                    |锁定文件夹    |43.12MB   "<<endl;
					Sleep(100);
					cout<<"│    │|恢复OS.exe                      |应用程序      |37.8MB    "<<endl<<"└──┘———————————————————————————"<<endl;
					Sleep(100);
					cout<<"请选择您要打开的文件："<<endl;
					Sleep(100);
					cout<<"打开“简介及说明.txt”请输入 1"<<endl;
					Sleep(100);
					cout<<"打开“Chasm X 官网网址.txt”请输入 2"<<endl;
					Sleep(100);
					cout<<"打开“CXAY工作室官网网址.txt”请输入 3"<<endl;
					Sleep(100);
					cout<<"打开“系统后台管理”请输入 4"<<endl;
					Sleep(100);
					cout<<"打开“恢复OS.exe”请输入 5"<<endl;
					Sleep(100);
					cout<<"返回上一级请输入 6"<<endl<<"请输入：";
					cin>>h;
					if(h==4){
						cout<<"无法打开此文件夹！"; 
						Sleep(1000);
				   		system("cls");
						goto e1; 
					}else if(h==1){
				   		system("cls");
						goto f1;
					}else if(h==2){
				   		system("cls");
						goto f2;
					}else if(h==3){
				   		system("cls");
						goto f3;
					}else if(h==6){
				   		system("cls");
						goto d1;
					}else if(h==5){
						cout<<"您没有权限！"; 
						Sleep(1000);
				   		system("cls");
						goto e1; 
					}else{
						cout<<"输入错误！"; 
						Sleep(500);
				   		system("cls");
						goto e1; 
					}
					f1:
						int i;
						cout<<"—C:/ Chasm X OS/ 简介及说明.txt————————————————"<<endl;
						cout<<"简介："<<endl; 
						cout<<"Chasm X OS windows 2.0是基于windows系统内部并以Chasm X OS windows 体验版为基础开发的新一代系统内"<<endl<<"嵌套微型系统，主要用于宣传与体验及U盘系统基础，并为以后的新版本系统打下基础。"<<endl<<endl;
						cout<<"说明："<<endl;
						cout<<"桌面上程序图标带有◇菱形图标的为快捷方式，如果有其他问题请联系QQ:2174172727"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
						cin>>i;
						if(i==1){
							system("cls");
							goto e1;
						}else{
							cout<<"输入错误！";
							Sleep(1000);
							system("cls");
							goto f1; 
						}
					f2:
						int j;
						cout<<"—C:/ Chasm X OS/ Chasm X 官网网址.txt—————————————"<<endl;
						cout<<"https://chase-dream-zm.github.io/chasmx.html"<<endl<<"欢迎欣赏官网！"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
						cin>>j;
						if(j==1){
							system("cls");
							goto e1;
						}else{
							cout<<"输入错误！";
							Sleep(1000);
							system("cls");
							goto f2; 
						}
					f3:
						int k;
						cout<<"—C:/ Chasm X OS/ CXAY工作室官网网址.txt————————————"<<endl<<endl;
						cout<<"https://chase-dream-zm.github.io/cxay.html"<<endl<<"欢迎欣赏官网！"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
						cin>>k;
						if(k==1){
							system("cls");
							goto e1;
						}else{
							cout<<"输入错误！";
							Sleep(1000);
							system("cls");
							goto f3; 
						}
			d2:
				int l; 
				cout<<"—D:/ —————————————————————————————"<<endl;
				cout<<"┌──┐|名称                            |类型          |大小    "<<endl; 
				cout<<"│    │———————————————————————————"<<endl;
				cout<<"│    │|我的文档                        |文件夹        |1GB   "<<endl<<"└──┘———————————————————————————"<<endl;
				Sleep(100);
				cout<<"打开“我的文档”请输入 1" <<endl;
				Sleep(100);
				cout<<"返回上一级请输入 2"<<endl<<"请输入："; 
				cin>>l;
				if(l==2){
					system("cls");
					goto b1;
				}else if(l==1){
					system("cls");
					goto g1;
				}else{
					cout<<"输入错误！";
					Sleep(1000);
					system("cls");
					goto d2; 
				}
				g1:
					int p0; 
					cout<<"—D:/ 我的文档/ ————————————————————————"<<endl;
					cout<<"┌──┐|名称                            |类型          |大小    "<<endl; 
					cout<<"│    │———————————————————————————"<<endl;
					cout<<"│    │|我的图片                        |文件夹        |1GB   "<<endl<<"└──┘———————————————————————————"<<endl;
					Sleep(100);
					cout<<"打开“我的图片”请输入 1" <<endl;
					Sleep(100);
					cout<<"返回上一级请输入 2"<<endl<<"请输入："; 
					cin>>p0;
					if(p0==2){
						system("cls");
						goto d2;
					}else if(p0==1){
						system("cls");
						goto h1;
					}else{
						cout<<"输入错误！";
						Sleep(1000);
						system("cls");
						goto g1; 
					}
					h1:
						int p00; 
						cout<<"—D:/ 我的文档/ 我的图片/ ———————————————————"<<endl;
						cout<<"┌──┐|名称                            |类型          |大小    "<<endl; 
						cout<<"│    │———————————————————————————"<<endl;
						cout<<"│    │|我的头像.png                    |PNG 图片文件  |473KB   "<<endl;
						cout<<"│    │|计算机图标.ico                  |ICO 图片文件  |450KB   "<<endl;
						cout<<"│    │|寻数图标.ico                    |ICO 图片文件  |450KB   "<<endl;
						cout<<"│    │|抽奖图标.ico                    |ICO 图片文件  |450KB   "<<endl;
						cout<<"│    │|选择困难症的福音图标.ico        |ICO 图片文件  |457KB   "<<endl;
						cout<<"│    │|寻数规则及注意事项图片.png      |PNG 图片文件  |716KB   "<<endl;
						cout<<"│    │|快捷方式标志图标.ico            |ICO 图片文件  |220KB   "<<endl;
						cout<<"│    │|C:盘图标.ico                    |ICO 图片文件  |440KB  "<<endl;
						cout<<"│    │|D:盘图标.ico                    |ICO 图片文件  |440KB   "<<endl;
						cout<<"│    │|内部图片                        |锁定文件夹    |1020MB   "<<endl<<"└──┘———————————————————————————"<<endl;
						Sleep(100);
						cout<<"打开“我的头像.png”请输入 1" <<endl;
						Sleep(100);
						cout<<"打开“计算机图标.ico”请输入 2" <<endl;
						Sleep(100);
						cout<<"打开“寻数图标.ico”请输入 3" <<endl;
						Sleep(100);
						cout<<"打开“抽奖图标.ico”请输入 4" <<endl;
						Sleep(100);
						cout<<"打开“选择困难症的福音图标.ico”请输入 5" <<endl;
						Sleep(100);
						cout<<"打开“寻数规则及注意事项图片.png”请输入 6" <<endl;
						Sleep(100);
						cout<<"打开“快捷方式标志图标.ico”请输入 7" <<endl;
						Sleep(100);
						cout<<"打开“C:盘图标.ico”请输入 8" <<endl;
						Sleep(100);
						cout<<"打开“D:盘图标.ico”请输入 9" <<endl;
						Sleep(100);
						cout<<"打开“内部图片”请输入 10" <<endl;
						Sleep(100);
						cout<<"返回上一级请输入 11"<<endl<<"请输入："; 
						cin>>p00;
						if(p00==1){
							system("cls");
							goto i1;
						}else if(p00==2){
							system("cls");
							goto i2;
						}else if(p00==3){
							system("cls");
							goto i3;
						}else if(p00==4){
							system("cls");
							goto i4;
						}else if(p00==5){
							system("cls");
							goto i5;
						}else if(p00==6){
							system("cls");
							goto i6;
						}else if(p00==7){
							system("cls");
							goto i7;
						}else if(p00==8){
							system("cls");
							goto i8;
						}else if(p00==9){
							system("cls");
							goto i9;
						}else if(p00==10){
							cout<<"无法打开此文件夹！";
							Sleep(1000);
							system("cls");
							goto h1;
						}else if(p00==11){
							system("cls");
							goto g1;
						}else{
							cout<<"输入错误！";
							Sleep(1000);
							system("cls");
							goto h1;
						}
						i1:
							int q;
							cout<<"—D:/ 我的文档/ 我的图片/ 我的头像.ico————————————"<<endl<<endl;
							cout<<"┌────────┐"<<endl ;
							cout<<"│      ###       │"<<endl ;
							cout<<"│    #     #     │"<<endl ;
							cout<<"│   #       #    │"<<endl ;
							cout<<"│    #     #     │"<<endl ;
							cout<<"│      ###       │"<<endl ;
							cout<<"│    #     #     │"<<endl ;
							cout<<"│   #       #    │"<<endl ;
							cout<<"│  #         #   │"<<endl ;
							cout<<"└────────┘"<<endl <<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>q;
							if(q==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i1; 
							}
						i2:
							int r;
							cout<<"—D:/ 我的文档/ 我的图片/ 计算机图标.ico————————————"<<endl<<endl;
							cout<<"┌─────┐"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
							cout<<"│  计算机  │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"└─────┘"<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>r;
							if(r==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i2; 
							}
						i3:
							int s;
							cout<<"—D:/ 我的文档/ 我的图片/ 寻数图标.ico—————————————"<<endl<<endl;
							cout<<"┌─────┐"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
							cout<<"│   寻数   │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"└─────┘"<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>s;
							if(s==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i3; 
							}
						i4:
							int t;
							cout<<"—D:/ 我的文档/ 我的图片/ 抽奖图标.ico—————————————"<<endl<<endl;
							cout<<"┌─────┐"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
							cout<<"│   抽奖   │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"└─────┘"<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>t;
							if(t==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i4; 
							}
						i5: 
							int u;
							cout<<"—D:/ 我的文档/ 我的图片/ 选择困难症的福音.ico—————————"<<endl<<endl;
							cout<<"┌─────┐"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"│   选择   │"<<endl;
							cout<<"│  困难症  │"<<endl;
					    	cout<<"│  的福音  │"<<endl;
					    	cout<<"│          │"<<endl;
					    	cout<<"└─────┘"<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>u;
							if(u==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i5; 
							}
						i6:
							int v;
							cout<<"—D:/ 我的文档/ 我的图片/ 寻数规则及注意事项图片.png——————"<<endl<<endl;
							cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl;
							cout<<"#                                                           #"<<endl; 
							cout<<"#                  —游戏规则及其他事项—                   #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  1.本游戏主要玩法为：系统会在规定范围内随机选取一个数，然 #"<<endl; 
							cout<<"#    后玩家需要在规定步数内根据系统提示选择出系统先前选的那 #"<<endl; 
							cout<<"#    个数，规定步数内选出即为胜利，反之为失败。             #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  2.游戏规则出现后10秒会出现选择界面，请根据要求选择。     #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  3.游戏结束后按任意键即可退出。                           #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  4.本游戏版权归YUniverse所有，未经允许禁止搬运，抄袭。违  #"<<endl; 
							cout<<"#    者必究，后果自负！                                     #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  5.所有输入仅限正整数，如果输入其他数字，程序将错误！！   #"<<endl; 
							cout<<"#                                                           #"<<endl; 
							cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>v;
							if(v==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i6; 
							}
						i7:
							int w;
							cout<<"—D:/ 我的文档/ 我的图片/ 快捷方式标志图标.ico—————————"<<endl<<endl;
							cout<<"╱╲"<<endl; 
							cout<<"╲╱"<<endl<<endl; 
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>w;
							if(w==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i7; 
							}
						i8:
							int x0;
							cout<<"—D:/ 我的文档/ 我的图片/ C:盘图标.ico—————————————"<<endl<<endl;
							cout<<"┌──┐ ┌───────┐     "<<endl;
							cout<<"│    │ │本地磁盘(C：) │     "<<endl;
							cout<<"│ C: │ └───────┘     "<<endl;
							cout<<"│    │  ■■■■□□□□      "<<endl;
							cout<<"└──┘  已用2GB，共4GB        "<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>x0;
							if(x0==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i8; 
							}
						i9:
							int y0;
							cout<<"—D:/ 我的文档/ 我的图片/ D:盘图标.ico—————————————"<<endl<<endl;
							cout<<"┌──┐ ┌───────┐     "<<endl;
							cout<<"│    │ │本地磁盘(D：) │     "<<endl;
							cout<<"│ D: │ └───────┘     "<<endl;
							cout<<"│    │  ■■□□□□□□      "<<endl;
							cout<<"└──┘  已用1GB，共4GB        "<<endl<<endl;
							cout<<"返回上一级请输入 1"<<endl<<"请输入："; 
							cin>>y0;
							if(y0==1){
								system("cls");
								goto h1;
							}else{
								cout<<"输入错误！";
								Sleep(1000);
								system("cls");
								goto i9; 
							}
		b2:
			cout<<"—C:/ YU游戏库/ 寻数.exe————————————————————"<<endl;
			int d,e,foot,num,range,c;
			cout<<"寻数"<<endl;
			Sleep(800); 
			cout<<"YUniverse出品"<<endl;
			Sleep(800); 
			cout<<"加载中……"<<endl<<endl<<endl;
			Sleep(2800);
		//———————————————————————————————————————————— 
			cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl;
			cout<<"#                                                           #"<<endl; 
			cout<<"#                  —游戏规则及其他事项—                   #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  1.本游戏主要玩法为：系统会在规定范围内随机选取一个数，然 #"<<endl; 
			cout<<"#    后玩家需要在规定步数内根据系统提示选择出系统先前选的那 #"<<endl; 
			cout<<"#    个数，规定步数内选出即为胜利，反之为失败。             #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  2.游戏规则出现后10秒会出现选择界面，请根据要求选择。     #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  3.游戏结束后按任意键即可退出。                           #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  4.本游戏版权归YUniverse所有，未经允许禁止搬运，抄袭。违  #"<<endl; 
			cout<<"#    者必究，后果自负！                                     #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  5.所有输入仅限正整数，如果输入其他数字，程序将错误！！   #"<<endl; 
			cout<<"#                                                           #"<<endl; 
			cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl<<endl<<endl;
		//————————————————————————————————————————————
			Sleep(10000); 
			cout<<"请选择范围："<<endl;
			Sleep(800); 
			cout<<"1~100(请输入1)"<<endl;
			Sleep(800);   
			cout<<"1~1000(请输入2)"<<endl;
			Sleep(800);  
			cout<<"请输入：";
			cin>>d;
			if(d!=1&&d!=2){
				cout<<"输入错误！"<<endl;
				goto c2;
			} 
			cout<<"好的，你已选择范围";
			if(d==1){
				cout<<"1~100"<<endl<<endl;
				range=100;
			} 
			if(d==2){
				cout<<"1~1000"<<endl<<endl;
				range=1000;
			} 
			Sleep(800); 
			
			cout<<"请选择步数（越多难度越小）："<<endl;
			Sleep(800); 
			cout<<"3步(请输入1)"<<endl;  
			Sleep(500); 
			cout<<"5步(请输入2)"<<endl;  
			Sleep(500); 
			cout<<"10步(请输入3)"<<endl; 
			Sleep(500); 
			cout<<"15步(请输入4)"<<endl;  
			Sleep(500); 
			cout<<"请输入：";
			cin>>e;
			if(e<1||e>4){
				cout<<"输入错误！"<<endl;
				goto c2;
			} 
			cout<<"好的，你已选择";
			if(e==1){
				cout<<"3步"<<endl<<endl<<endl;
				foot=3;
			} 
			if(e==2){
				cout<<"5步"<<endl<<endl<<endl;
				foot=5;
			}
			if(e==3){
				cout<<"10步"<<endl<<endl<<endl;
				foot=10;
			} 
			if(e==4){
				cout<<"15步"<<endl<<endl<<endl;
				foot=15;
			} 
			Sleep(1000);
		//————————————————————————————————————————————
			cout<<"游戏开始！"<<endl;
			Sleep(500);
			srand(time(0));
			num=rand()%range+1; 
			while(foot!=0){
				if(d==1){
					cout<<"请在1~100中选一个数：";
				} 
				if(d==2){
					cout<<"请在1~1000中选一个数：";
				} 
				cin>>c;
				foot--;
				if(c>num){
					cout<<"比目标数大！"<<endl; 
				}
				if(c<num){
					cout<<"比目标数小！"<<endl; 
				}
				if(c==num){
					cout<<"恭喜你，找到了！！！"<<endl<<endl; 
					goto c1;
				}
			}
			cout<<"步数已用完，你失败了，再接再厉吧！"<<endl;
			cout<<"公布目标数："<<num<<endl<<endl<<endl; 
			c1: 
			Sleep(800);
			cout<<"欢迎你的游玩！"<<endl; 
			Sleep(800);
			cout<<"若有建议请联系：2174172727（QQ）"<<endl;
			Sleep(800);
			cout<<"想加入我们工作室请进群：574397146（QQ）"<<endl; 
			Sleep(800);
			cout<<"感谢您的支持！"<<endl;
			Sleep(800);
			cout<<"Goodbye！"<<endl; 
			c2: 
			Sleep(1000);
			cout<<"游戏结束，为你返回桌面";
			Sleep(1000);
		   	system("cls");
			goto a4; 
		b3:
			cout<<"—C:/ YU游戏库/ 抽奖.exe————————————————————"<<endl;
			int n1,a11;
			cout<<"抽奖小游戏"<<endl;
			Sleep(800);
			cout<<"YUniverse出品"<<endl;
			Sleep(800);
			cout<<"禁止私自搬运"<<endl;
			Sleep(800);
			cout<<"抽奖规则："<<endl;
			Sleep(800);
			cout<<"  1.两元抽奖一次"<<endl;
			Sleep(800);
			cout<<"  2.奖项有：一等奖(5%)、二等奖(10%)、三等奖(25%)和幸等奖(60%)"<<endl; 
			Sleep(800);
			cout<<"  3.钱数输入不能有单数,且不超过10元"<<endl;
			Sleep(800);
			cout<<"请输入金额：";
			cin>>n1; 
			srand(time(0));
			if(n1>1&&n1<=10){
				if(n1%2!=0){
					cout<<"金额不能为单数"<<endl;
					Sleep(800); 
				}
				else if(n1%2==0){
					for(int i=1;i<=n1/2;i++){
				cout<<"开始抽奖，第"<<i<<"次"<<endl;
				Sleep(800);
				cout<<"请稍等..."<<endl;
				Sleep(1800);
				a11=rand()%20+1;
				switch(a11) {
					case 1: 
						cout<<"恭喜你获得一等奖！"<<endl;
						break;
					case 2:
					case 3:
						cout<<"恭喜你获得二等奖！"<<endl;
						break;
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
						cout<<"恭喜你获得三等奖！"<<endl;
						break;
					case 9:
					case 10:
					case 11:
					case 12:
					case 13:
					case 14:
					case 15:
					case 16:
					case 17:
					case 18:
					case 19:
					case 20:
						cout<<"恭喜你获得幸运奖！"<<endl;
						break;
				}
				cout<<endl; 
				Sleep(800);
			}
				}
			}
			else {
				if(n1<=1){
					cout<<"金额太少"<<endl; 
					Sleep(800);
				}
				if(n1>10){
					cout<<"金额过多"<<endl; 
					Sleep(800);
				}
			}
			
			cout<<"全部抽奖已结束，谢谢您的使用。"<<endl;
			Sleep(800);
			cout<<"欢迎再次使用！"<<endl;
			Sleep(800);
			cout<<"goodbye!"<<endl;
			Sleep(800);
			cout<<"游戏结束，为你返回桌面";
			Sleep(1000);
		   	system("cls");
			goto a4; 
		b4:
			cout<<"—C:/ YU游戏库/ 选择困难症的福音.exe——————————————"<<endl;
			int n2,m1;
			cout<<"选择困难症的福音"<<endl;
			Sleep(1000);
			cout<<"帮助每一个选择困难症做选择"<<endl;
			Sleep(1000);
			cout<<"YUniverse出品"<<endl; 
			Sleep(1000);
			cout<<"禁止私自搬运"<<endl;
			Sleep(800);
			cout<<"下面请输入选择项目的个数:";
			cin>>n2;
			srand(time(0));
			m1=rand()%n2+1;
			cout<<"请稍等..."<<endl;
			Sleep(1500);
			cout<<"已为你做好选择:"<<"第"<<m1<<"项"<<endl;
			Sleep(1000);
			cout<<"谢谢你的使用，欢迎再次使用！"<<endl;
			Sleep(1000);
			cout<<"Goodbye!"<<endl;
			Sleep(1000);
			cout<<"游戏结束，为你返回桌面";
			Sleep(1000);
		   	system("cls");
			goto a4; 
	return 0; 
}
