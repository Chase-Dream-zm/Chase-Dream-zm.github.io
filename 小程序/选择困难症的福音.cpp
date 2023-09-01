#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int n,m;
	cout<<"选择困难症的福音"<<endl;
	Sleep(1000);
	cout<<"帮助每一个选择困难症做选择"<<endl;
	Sleep(1000);
	cout<<"YUniverse出品"<<endl; 
	Sleep(1000);
	cout<<"禁止私自搬运"<<endl;
	Sleep(800);
	cout<<"下面请输入选择项目的个数:";
	cin>>n;
	srand(time(0));
	m=rand()%n+1;
	cout<<"请稍等..."<<endl;
	Sleep(1500);
	cout<<"已为你做好选择:"<<"第"<<m<<"项"<<endl;
	Sleep(1000);
	cout<<"谢谢你的使用，欢迎再次使用！"<<endl;
	Sleep(1000);
	cout<<"Goodbye!"<<endl;
	Sleep(1000);
	system("echo 按任意键退出...&pause>nul");
	return 0;
}
