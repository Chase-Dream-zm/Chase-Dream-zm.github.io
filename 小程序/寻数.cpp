#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int a,b,foot,num,range,c;
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
	cin>>a;
	if(a!=1&&a!=2){
		cout<<"输入错误！"<<endl;
		goto a2;
	} 
	cout<<"好的，你已选择范围";
	if(a==1){
		cout<<"1~100"<<endl<<endl;
		range=100;
	} 
	if(a==2){
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
	cin>>b;
	if(b<1||b>4){
		cout<<"输入错误！"<<endl;
		goto a2;
	} 
	cout<<"好的，你已选择";
	if(b==1){
		cout<<"3步"<<endl<<endl<<endl;
		foot=3;
	} 
	if(b==2){
		cout<<"5步"<<endl<<endl<<endl;
		foot=5;
	}
	if(b==3){
		cout<<"10步"<<endl<<endl<<endl;
		foot=10;
	} 
	if(b==4){
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
		if(a==1){
			cout<<"请在1~100中选一个数：";
		} 
		if(a==2){
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
			goto a1;
		}
	}
	cout<<"步数已用完，你失败了，再接再厉吧！"<<endl;
	cout<<"公布目标数："<<num<<endl<<endl<<endl; 
	a1: 
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
	a2: 
	Sleep(800);
	system("echo 按任意键退出...&pause>nul");
	return 0;
} 
