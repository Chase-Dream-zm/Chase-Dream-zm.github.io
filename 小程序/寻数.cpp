#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int a,b,foot,num,range,c;
	cout<<"Ѱ��"<<endl;
	Sleep(800); 
	cout<<"YUniverse��Ʒ"<<endl;
	Sleep(800); 
	cout<<"�����С���"<<endl<<endl<<endl;
	Sleep(2800);
//���������������������������������������������������������������������������������������� 
	cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl;
	cout<<"#                                                           #"<<endl; 
	cout<<"#                  ����Ϸ�����������                   #"<<endl; 
	cout<<"#                                                           #"<<endl; 
	cout<<"#  1.����Ϸ��Ҫ�淨Ϊ��ϵͳ���ڹ涨��Χ�����ѡȡһ������Ȼ #"<<endl; 
	cout<<"#    �������Ҫ�ڹ涨�����ڸ���ϵͳ��ʾѡ���ϵͳ��ǰѡ���� #"<<endl; 
	cout<<"#    �������涨������ѡ����Ϊʤ������֮Ϊʧ�ܡ�             #"<<endl; 
	cout<<"#                                                           #"<<endl; 
	cout<<"#  2.��Ϸ������ֺ�10������ѡ����棬�����Ҫ��ѡ��     #"<<endl; 
	cout<<"#                                                           #"<<endl; 
	cout<<"#  3.��Ϸ����������������˳���                           #"<<endl; 
	cout<<"#                                                           #"<<endl; 
	cout<<"#  4.����Ϸ��Ȩ��YUniverse���У�δ�������ֹ���ˣ���Ϯ��Υ  #"<<endl; 
	cout<<"#    �߱ؾ�������Ը���                                     #"<<endl; 
	cout<<"#                                                           #"<<endl; 
	cout<<"#  # # # # # # # # # # # # # # # # # # # # # # # # # # # #  #"<<endl<<endl<<endl;
//����������������������������������������������������������������������������������������
	Sleep(10000); 
	cout<<"��ѡ��Χ��"<<endl;
	Sleep(800); 
	cout<<"1~100(������1)"<<endl;
	Sleep(800);   
	cout<<"1~1000(������2)"<<endl;
	Sleep(800);  
	cout<<"�����룺";
	cin>>a;
	if(a!=1&&a!=2){
		cout<<"�������"<<endl;
		goto a2;
	} 
	cout<<"�õģ�����ѡ��Χ";
	if(a==1){
		cout<<"1~100"<<endl<<endl;
		range=100;
	} 
	if(a==2){
		cout<<"1~1000"<<endl<<endl;
		range=1000;
	} 
	Sleep(800); 
	
	cout<<"��ѡ������Խ���Ѷ�ԽС����"<<endl;
	Sleep(800); 
	cout<<"3��(������1)"<<endl;  
	Sleep(500); 
	cout<<"5��(������2)"<<endl;  
	Sleep(500); 
	cout<<"10��(������3)"<<endl; 
	Sleep(500); 
	cout<<"15��(������4)"<<endl;  
	Sleep(500); 
	cout<<"�����룺";
	cin>>b;
	if(b<1||b>4){
		cout<<"�������"<<endl;
		goto a2;
	} 
	cout<<"�õģ�����ѡ��";
	if(b==1){
		cout<<"3��"<<endl<<endl<<endl;
		foot=3;
	} 
	if(b==2){
		cout<<"5��"<<endl<<endl<<endl;
		foot=5;
	}
	if(b==3){
		cout<<"10��"<<endl<<endl<<endl;
		foot=10;
	} 
	if(b==4){
		cout<<"15��"<<endl<<endl<<endl;
		foot=15;
	} 
	Sleep(1000);
//����������������������������������������������������������������������������������������
	cout<<"��Ϸ��ʼ��"<<endl;
	Sleep(500);
	srand(time(0));
	num=rand()%range+1; 
	while(foot!=0){
		if(a==1){
			cout<<"����1~100��ѡһ������";
		} 
		if(a==2){
			cout<<"����1~1000��ѡһ������";
		} 
		cin>>c;
		foot--;
		if(c>num){
			cout<<"��Ŀ������"<<endl; 
		}
		if(c<num){
			cout<<"��Ŀ����С��"<<endl; 
		}
		if(c==num){
			cout<<"��ϲ�㣬�ҵ��ˣ�����"<<endl<<endl; 
			goto a1;
		}
	}
	cout<<"���������꣬��ʧ���ˣ��ٽ������ɣ�"<<endl;
	cout<<"����Ŀ������"<<num<<endl<<endl<<endl; 
	a1: 
	Sleep(800);
	cout<<"��ӭ������棡"<<endl; 
	Sleep(800);
	cout<<"���н�������ϵ��2174172727��QQ��"<<endl;
	Sleep(800);
	cout<<"��������ǹ��������Ⱥ��574397146��QQ��"<<endl; 
	Sleep(800);
	cout<<"��л����֧�֣�"<<endl;
	Sleep(800);
	cout<<"Goodbye��"<<endl; 
	a2: 
	Sleep(800);
	system("echo ��������˳�...&pause>nul");
	return 0;
} 
