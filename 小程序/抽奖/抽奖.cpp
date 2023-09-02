#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int n,a;
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
	cin>>n; 
	srand(time(0));
	if(n>1&&n<=10){
		if(n%2!=0){
			cout<<"金额不能为单数"<<endl;
			Sleep(800); 
		}
		else if(n%2==0){
			for(int i=1;i<=n/2;i++){
		cout<<"开始抽奖，第"<<i<<"次"<<endl;
		Sleep(800);
		cout<<"请稍等..."<<endl;
		Sleep(1800);
		a=rand()%20+1;
		switch(a) {
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
		if(n<=1){
			cout<<"金额太少"<<endl; 
			Sleep(800);
		}
		if(n>10){
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
	system("echo 按任意键退出...&pause>nul"); 
	return 0; 
} 
