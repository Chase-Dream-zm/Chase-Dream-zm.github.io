#include <bits/stdc++.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS //VS�б��붨��,���򱨴�
#include<ctime>
#include<stdio.h>
using namespace std;
int main(){
	long long n=0,m,a=0,a00,a000=0;
	a1:
		cout<<"Chasm X OS windows ����� ������";
		for(int a=1;a<=15;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"Chasm X OS windows ����� ������";
		}
		system("cls");
		cout<<"���Ե�";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"���Ե�";
		}
		system("cls");
		if(a000==1) goto a6; 
		a0:
			cout<<"������Chasm X OS������:" ;
			cin>>a00;
			if(a00==202323){
				cout<<"��������ȷ��"<<endl;
				a000++;
				Sleep(1000);
		   		system("cls");
		   		goto a6; 
			}
			else{
				cout<<"���������"<<endl; 
				Sleep(1000);
		   		system("cls");
				goto a0;
			}
		a6:
		if(n>0){
			goto a2;
		}
		a5:
		cout<<"���������룺";
		cin>>n;
		cout<<"׼������"<<endl; 
		Sleep(3000);
	    system("cls");
		goto a1; 
	a2:
		cout<<"���������룺";
		cin>>m;
		if(m==n){
			cout<<"������ȷ"<<endl; 
			Sleep(500);
			goto a3; 
		} 
		cout<<"�������"<<endl; 
		a++;
		Sleep(500);
	    system("cls");
		if(a>=10){
			cout<<"��������10�������"<<endl; 
			Sleep(10000); 
		}
		Sleep(500);
		goto a2;
	a3:
		Sleep(500);
	    system("cls");
		cout<<"��ӭ����Chasm X OS"<<endl;
		Sleep(1000);
	    system("cls");
		cout<<"���Ե�";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"���Ե�";
		}
	    system("cls");
		cout<<"���ڼ���Chasm X OS����";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"���ڼ���Chasm X OS����";
		}
	    system("cls");
		cout<<"���ڼ���Chasm X OSӦ�ó���";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"���ڼ���Chasm X OSӦ�ó���";
		}
	    system("cls");
		cout<<"�������"<<endl;
		Sleep(1000);
	    system("cls");
	    cout<<"����½��ʱ����:";
	    int b;
	    time_t nowtime;
		time(&nowtime); //��ȡ1970��1��1��0��0��0�뵽���ھ���������
		tm* p = localtime(&nowtime); //������ת��Ϊ����ʱ��,���1900����,��Ҫ+1900,��Ϊ0-11,����Ҫ+1
		printf("%04d:%02d:%02d %02d:%02d:%02d\n", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
		cout<<endl;
    a4:
		cout<<"�˵���"<<endl<<endl;
		Sleep(500);
		cout<<"Ѱ����Ϸ.exe"<<endl<<endl;
		Sleep(500);
		cout<<"�齱��Ϸ.exe"<<endl<<endl;
		Sleep(500);
		cout<<"ѡ������֢�ĸ���.exe"<<endl<<endl;
		Sleep(500);
		cout<<"��ѡ����Ҫ�򿪵ĳ���"<<endl;
		Sleep(100);
		cout<<"�򿪴˵��������� 1"<<endl;
		Sleep(100);
		cout<<"��Ѱ����Ϸ������ 2"<<endl;
		Sleep(100);
		cout<<"�򿪳齱��Ϸ������ 3"<<endl;
		Sleep(100);
		cout<<"��ѡ������֢�ĸ��������� 4"<<endl;
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
			cout<<"�������"; 
			Sleep(500);
	   		system("cls");
			goto a4; 
		}
		b1:
			int f;
			cout<<"���ش���(C:)    1GB���� ��2GB"<<endl;
			Sleep(100);
			cout<<"���ش���(D:)    1GB���� ��1GB"<<endl<<endl;
			Sleep(100);
			cout<<"��ѡ����Ҫ�򿪵Ĵ��̣�"<<endl;
			Sleep(100);
			cout<<"�򿪱��ش���(C:)������ 1"<<endl;
			Sleep(100);
			cout<<"�򿪱��ش���(D:)������ 2"<<endl;
			Sleep(100);
			cout<<"������һ�������� 3"<<endl;
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
				cout<<"�������"; 
				Sleep(500);
		   		system("cls");
				goto b1; 
			}
			d1:
				int g; 
				cout<<"�û�    �����ļ���  974MB"<<endl;
				Sleep(100);
				cout<<"Chasm X OS windows �����    �ļ���  50MB"<<endl<<endl;
				Sleep(100);
				cout<<"��ѡ����Ҫ�򿪵��ļ���"<<endl;
				Sleep(100);
				cout<<"�򿪡��û��������� 1"<<endl;
				Sleep(100);
				cout<<"�򿪡�Chasm X OS windows ����桱������ 2"<<endl;
				Sleep(100);
				cout<<"������һ�������� 3"<<endl;
				cin>>g;
				if(g==1){
					cout<<"�޷��򿪴��ļ��У�"; 
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
					cout<<"�������"; 
					Sleep(500);
			   		system("cls");
					goto d1; 
				}
				e1: 
					int h;
					cout<<"���.txt    �ı��ĵ�  5MB"<<endl;
					Sleep(100);
					cout<<"Chasm X ������ַ.txt    �ı��ĵ�  3MB"<<endl;
					Sleep(100);
					cout<<"CXAY�����ҹ�����ַ.txt    �ı��ĵ�  2MB"<<endl;
					Sleep(100);
					cout<<"�ļ���    �����ļ���  40MB"<<endl<<endl;
					Sleep(100);
					cout<<"��ѡ����Ҫ�򿪵��ļ���"<<endl;
					Sleep(100);
					cout<<"�򿪡����.txt�������� 1"<<endl;
					Sleep(100);
					cout<<"�򿪡�Chasm X ������ַ.txt�������� 2"<<endl;
					Sleep(100);
					cout<<"�򿪡�CXAY�����ҹ�����ַ.txt�������� 3"<<endl;
					Sleep(100);
					cout<<"�򿪡��ļ��С������� 4"<<endl;
					Sleep(100);
					cout<<"������һ�������� 5"<<endl;
					cin>>h;
					if(h==4){
						cout<<"�޷��򿪴��ļ��У�"; 
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
						cout<<"�������"; 
						Sleep(500);
				   		system("cls");
						goto e1; 
					}
					f1:
						int i;
						cout<<"Chasm X OS windows ������ǻ���windowsϵͳ�����������΢��ϵͳ"<<endl<<"��Ҫ�������������飬Ϊ�Ժ����ʽϵͳ���»�����"<<endl<<endl;
						cout<<"������һ�������� 1"<<endl; 
						cin>>i;
						if(i==1){
							system("cls");
							goto e1;
						}else{
							cout<<"�������";
							Sleep(1000);
							system("cls");
							goto f1; 
						}
					f2:
						int j;
						cout<<"https://chase-dream-zm.github.io/chasmx.html"<<endl<<endl;
						cout<<"������һ�������� 1"<<endl; 
						cin>>j;
						if(j==1){
							system("cls");
							goto e1;
						}else{
							cout<<"�������";
							Sleep(1000);
							system("cls");
							goto f2; 
						}
					f3:
						int k;
						cout<<"https://chase-dream-zm.github.io/cxay.html"<<endl<<endl;
						cout<<"������һ�������� 1"<<endl; 
						cin>>k;
						if(k==1){
							system("cls");
							goto e1;
						}else{
							cout<<"�������";
							Sleep(1000);
							system("cls");
							goto f3; 
						}
			d2:
				int l; 
				cout<<"������Ϊ�գ�"<<endl<<endl;
				cout<<"������һ�������� 1"<<endl; 
				cin>>l;
				if(l==1){
					system("cls");
					goto b1;
				}else{
					cout<<"�������";
					Sleep(1000);
					system("cls");
					goto d2; 
						}
		b2:
			int d,e,foot,num,range,c;
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
			cin>>d;
			if(d!=1&&d!=2){
				cout<<"�������"<<endl;
				goto c2;
			} 
			cout<<"�õģ�����ѡ��Χ";
			if(d==1){
				cout<<"1~100"<<endl<<endl;
				range=100;
			} 
			if(d==2){
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
			cin>>e;
			if(e<1||e>4){
				cout<<"�������"<<endl;
				goto c2;
			} 
			cout<<"�õģ�����ѡ��";
			if(e==1){
				cout<<"3��"<<endl<<endl<<endl;
				foot=3;
			} 
			if(e==2){
				cout<<"5��"<<endl<<endl<<endl;
				foot=5;
			}
			if(e==3){
				cout<<"10��"<<endl<<endl<<endl;
				foot=10;
			} 
			if(e==4){
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
				if(d==1){
					cout<<"����1~100��ѡһ������";
				} 
				if(d==2){
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
					goto c1;
				}
			}
			cout<<"���������꣬��ʧ���ˣ��ٽ������ɣ�"<<endl;
			cout<<"����Ŀ������"<<num<<endl<<endl<<endl; 
			c1: 
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
			c2: 
			Sleep(1000);
			cout<<"��Ϸ������Ϊ�㷵������";
			Sleep(1000);
		   	system("cls");
			goto a4; 
		b3:
			int n1,a11;
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
			cin>>n1; 
			srand(time(0));
			if(n1>1&&n1<=10){
				if(n1%2!=0){
					cout<<"����Ϊ����"<<endl;
					Sleep(800); 
				}
				else if(n1%2==0){
					for(int i=1;i<=n1/2;i++){
				cout<<"��ʼ�齱����"<<i<<"��"<<endl;
				Sleep(800);
				cout<<"���Ե�..."<<endl;
				Sleep(1800);
				a11=rand()%20+1;
				switch(a11) {
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
				if(n1<=1){
					cout<<"���̫��"<<endl; 
					Sleep(800);
				}
				if(n1>10){
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
			cout<<"��Ϸ������Ϊ�㷵������";
			Sleep(1000);
		   	system("cls");
			goto a4; 
		b4:
			int n2,m1;
			cout<<"ѡ������֢�ĸ���"<<endl;
			Sleep(1000);
			cout<<"����ÿһ��ѡ������֢��ѡ��"<<endl;
			Sleep(1000);
			cout<<"YUniverse��Ʒ"<<endl; 
			Sleep(1000);
			cout<<"��ֹ˽�԰���"<<endl;
			Sleep(800);
			cout<<"����������ѡ����Ŀ�ĸ���:";
			cin>>n2;
			srand(time(0));
			m1=rand()%n2+1;
			cout<<"���Ե�..."<<endl;
			Sleep(1500);
			cout<<"��Ϊ������ѡ��:"<<"��"<<m1<<"��"<<endl;
			Sleep(1000);
			cout<<"лл���ʹ�ã���ӭ�ٴ�ʹ�ã�"<<endl;
			Sleep(1000);
			cout<<"Goodbye!"<<endl;
			Sleep(1000);
			cout<<"��Ϸ������Ϊ�㷵������";
			Sleep(1000);
		   	system("cls");
			goto a4; 
	return 0; 
}
