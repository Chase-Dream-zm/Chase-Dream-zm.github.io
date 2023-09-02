#include <bits/stdc++.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS //VS中必须定义,否则报错
#include<ctime>
#include<stdio.h>
using namespace std;
int main(){
	long long n=0,m,a=0,a00,a000=0;
	a1:
		cout<<"Chasm X OS windows 体验版 启动中";
		for(int a=1;a<=15;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"Chasm X OS windows 体验版 启动中";
		}
		system("cls");
		cout<<"请稍等";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"请稍等";
		}
		system("cls");
		if(a000==1) goto a6; 
		a0:
			cout<<"请输入Chasm X OS激活码:" ;
			cin>>a00;
			if(a00==202323){
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
		cout<<"请设置密码：";
		cin>>n;
		cout<<"准备重启"<<endl; 
		Sleep(3000);
	    system("cls");
		goto a1; 
	a2:
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
		if(a>=10){
			cout<<"已锁定，10秒后解除！"<<endl; 
			Sleep(10000); 
		}
		Sleep(500);
		goto a2;
	a3:
		Sleep(500);
	    system("cls");
		cout<<"欢迎进入Chasm X OS"<<endl;
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
		cout<<"正在加载Chasm X OS桌面";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"正在加载Chasm X OS桌面";
		}
	    system("cls");
		cout<<"正在加载Chasm X OS应用程序";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"正在加载Chasm X OS应用程序";
		}
	    system("cls");
		cout<<"加载完毕"<<endl;
		Sleep(1000);
	    system("cls");
	    cout<<"您登陆的时间是:";
	    int b;
	    time_t nowtime;
		time(&nowtime); //获取1970年1月1日0点0分0秒到现在经过的秒数
		tm* p = localtime(&nowtime); //将秒数转换为本地时间,年从1900算起,需要+1900,月为0-11,所以要+1
		printf("%04d:%02d:%02d %02d:%02d:%02d\n", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
		cout<<endl;
    a4:
		cout<<"此电脑"<<endl<<endl;
		Sleep(500);
		cout<<"寻数游戏.exe"<<endl<<endl;
		Sleep(500);
		cout<<"抽奖游戏.exe"<<endl<<endl;
		Sleep(500);
		cout<<"选择困难症的福音.exe"<<endl<<endl;
		Sleep(500);
		cout<<"请选择您要打开的程序："<<endl;
		Sleep(100);
		cout<<"打开此电脑请输入 1"<<endl;
		Sleep(100);
		cout<<"打开寻数游戏请输入 2"<<endl;
		Sleep(100);
		cout<<"打开抽奖游戏请输入 3"<<endl;
		Sleep(100);
		cout<<"打开选择困难症的福音请输入 4"<<endl;
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
			cout<<"本地磁盘(C:)    1GB可用 共2GB"<<endl;
			Sleep(100);
			cout<<"本地磁盘(D:)    1GB可用 共1GB"<<endl<<endl;
			Sleep(100);
			cout<<"请选择您要打开的磁盘："<<endl;
			Sleep(100);
			cout<<"打开本地磁盘(C:)请输入 1"<<endl;
			Sleep(100);
			cout<<"打开本地磁盘(D:)请输入 2"<<endl;
			Sleep(100);
			cout<<"返回上一级请输入 3"<<endl;
			cin>>f;
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
				cout<<"用户    锁定文件夹  974MB"<<endl;
				Sleep(100);
				cout<<"Chasm X OS windows 体验版    文件夹  50MB"<<endl<<endl;
				Sleep(100);
				cout<<"请选择您要打开的文件："<<endl;
				Sleep(100);
				cout<<"打开“用户”请输入 1"<<endl;
				Sleep(100);
				cout<<"打开“Chasm X OS windows 体验版”请输入 2"<<endl;
				Sleep(100);
				cout<<"返回上一级请输入 3"<<endl;
				cin>>g;
				if(g==1){
					cout<<"无法打开此文件夹！"; 
					Sleep(1000);
			   		system("cls");
					goto d1; 
				}else if(g==2){
			   		system("cls");
					goto e1;
				}else if(g==3){
			   		system("cls");
					goto b1;
				}else{
					cout<<"输入错误！"; 
					Sleep(500);
			   		system("cls");
					goto d1; 
				}
				e1: 
					int h;
					cout<<"简介.txt    文本文档  5MB"<<endl;
					Sleep(100);
					cout<<"Chasm X 官网网址.txt    文本文档  3MB"<<endl;
					Sleep(100);
					cout<<"CXAY工作室官网网址.txt    文本文档  2MB"<<endl;
					Sleep(100);
					cout<<"文件夹    锁定文件夹  40MB"<<endl<<endl;
					Sleep(100);
					cout<<"请选择您要打开的文件："<<endl;
					Sleep(100);
					cout<<"打开“简介.txt”请输入 1"<<endl;
					Sleep(100);
					cout<<"打开“Chasm X 官网网址.txt”请输入 2"<<endl;
					Sleep(100);
					cout<<"打开“CXAY工作室官网网址.txt”请输入 3"<<endl;
					Sleep(100);
					cout<<"打开“文件夹”请输入 4"<<endl;
					Sleep(100);
					cout<<"返回上一级请输入 5"<<endl;
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
					}else if(h==5){
				   		system("cls");
						goto d1;
					}else{
						cout<<"输入错误！"; 
						Sleep(500);
				   		system("cls");
						goto e1; 
					}
					f1:
						int i;
						cout<<"Chasm X OS windows 体验版是基于windows系统开发的体验版微型系统"<<endl<<"主要用于宣传与体验，为以后的正式系统打下基础。"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl; 
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
						cout<<"https://chase-dream-zm.github.io/chasmx.html"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl; 
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
						cout<<"https://chase-dream-zm.github.io/cxay.html"<<endl<<endl;
						cout<<"返回上一级请输入 1"<<endl; 
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
				cout<<"本磁盘为空！"<<endl<<endl;
				cout<<"返回上一级请输入 1"<<endl; 
				cin>>l;
				if(l==1){
					system("cls");
					goto b1;
				}else{
					cout<<"输入错误！";
					Sleep(1000);
					system("cls");
					goto d2; 
						}
		b2:
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
