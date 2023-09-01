#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int n,m;
	char x=7;
	cout<<"简易节拍器"<<endl;
	Sleep(1000);
	cout<<"YUniverse出品"<<endl; 
	Sleep(1000); 
	cout<<"禁止私自搬运"<<endl;
	Sleep(800);
	cout<<"start"<<endl;
	Sleep(1000);
	cout<<"请输入速度(单位:毫秒/1000毫秒=1秒)：";
	cin>>n;
	cout<<"请输入循环次数：";
	cin>>m;
	for(int i=1;i<=m;i++){
		cout<<x;
		Sleep(n);
	}
	Sleep(1000);
	cout<<"播放已结束，谢谢你的使用，欢迎再次使用！"<<endl;
	Sleep(1000);
	cout<<"Goodbye!"<<endl;
	Sleep(1000);
	system("echo 按任意键退出...&pause>nul");
	return 0;
}

