#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int n,a;
	cout<<"�齱С��Ϸ"<<endl;
	Sleep(800);
	cout<<"YUniverse��Ʒ"<<endl;
	Sleep(800);
	cout<<"��ֹ˽�԰���"<<endl;
	Sleep(800);
	cout<<"�齱����"<<endl;
	Sleep(800);
	cout<<"  1.��Ԫ�齱һ��"<<endl;
	Sleep(800);
	cout<<"  2.�����У�һ�Ƚ�(5%)�����Ƚ�(10%)�����Ƚ�(25%)���ҵȽ�(60%)"<<endl; 
	Sleep(800);
	cout<<"  3.Ǯ�����벻���е���,�Ҳ�����10Ԫ"<<endl;
	Sleep(800);
	cout<<"�������";
	cin>>n; 
	srand(time(0));
	if(n>1&&n<=10){
		if(n%2!=0){
			cout<<"����Ϊ����"<<endl;
			Sleep(800); 
		}
		else if(n%2==0){
			for(int i=1;i<=n/2;i++){
		cout<<"��ʼ�齱����"<<i<<"��"<<endl;
		Sleep(800);
		cout<<"���Ե�..."<<endl;
		Sleep(1800);
		a=rand()%20+1;
		switch(a) {
			case 1: 
				cout<<"��ϲ����һ�Ƚ���"<<endl;
				break;
			case 2:
			case 3:
				cout<<"��ϲ���ö��Ƚ���"<<endl;
				break;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				cout<<"��ϲ�������Ƚ���"<<endl;
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
				cout<<"��ϲ�������˽���"<<endl;
				break;
		}
		cout<<endl; 
		Sleep(800);
	}
		}
	}
	else {
		if(n<=1){
			cout<<"���̫��"<<endl; 
			Sleep(800);
		}
		if(n>10){
			cout<<"������"<<endl; 
			Sleep(800);
		}
	}
	
	cout<<"ȫ���齱�ѽ�����лл����ʹ�á�"<<endl;
	Sleep(800);
	cout<<"��ӭ�ٴ�ʹ�ã�"<<endl;
	Sleep(800);
	cout<<"goodbye!"<<endl;
	Sleep(800);
	system("echo ��������˳�...&pause>nul"); 
	return 0; 
} 
