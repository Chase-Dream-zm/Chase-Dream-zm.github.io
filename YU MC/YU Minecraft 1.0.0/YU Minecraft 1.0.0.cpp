#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	srand(time(0));
	a1:
	  	cout<<"     YU Minecraft     "<<endl;
		cout<<"YU��Minecraft PC win��"; 
		cout<<endl<<"        ������";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"     YU Minecraft     "<<endl;
			cout<<"YU��Minecraft PC win��"; 
			cout<<endl<<"        ������";
			}
		Sleep(100);
		system("cls");
		cout<<endl<<"��ʼ����Ϸ��";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<endl<<"��ʼ����Ϸ��";
			}
		Sleep(100);
		system("cls");
		cout<<"������ϣ�";
		Sleep(800);
		system("cls");
	a2: 
		int sign;
		cout<<"sign in ����������������������������"<<endl<<endl;
		cout<<"�ο͵�¼"<<"       "<<"ע��"<<endl<<endl;
		cout<<"�ο͵�¼������1"<<endl<<"ע��������2"<<endl<<"�����룺";
		cin>>sign; 
		if(sign==1){
			system("cls");
			Sleep(500);
			goto b1;
		}else if(sign==2){
			cout<<"������δ���ţ�";
			Sleep(1000);
			system("cls");
			goto a2; 
		}else{
			cout<<"�������";
			Sleep(1000);
			system("cls");
			goto a2; 
		}
		b1:
			int main;
			cout<<"��ҳ��  ����������������������������"<<endl<<endl;
			cout<<"��ʼ��Ϸ"<<endl<<endl<<"����"<<endl<<endl;
			cout<<"��ʼ��Ϸ������1"<<endl<<"����������2"<<endl<<"�����룺";
			cin>>main; 
			if(main==1){
				system("cls");
				Sleep(500);
				goto c1;
			}else if(main==2){
				cout<<"������δ���ţ�";
				Sleep(1000);
				system("cls");
				goto b1; 
			}else{
				cout<<"�������";
				Sleep(1000);
				system("cls");
				goto b1; 
			}
			c1:
				int style,a,start;
				long long seed,name;
				if(a>0){
					cout<<"��������Ϸ��������������������������"<<endl<<endl;
					cout<<"��Ϸ����(���������Ҳ�����15λ)��"<<name<<endl;
					goto c2;
				}
				a=0;
				cout<<"��������Ϸ��������������������������"<<endl<<endl;
				cout<<"��Ϸ����(���������Ҳ�����15λ)��";
				cin>>name;
				a++;
			c2:
				if(style>0){
				cout<<endl<<"������ʽ��"<<"��ƽ̹"<<"  "<<"����"<<endl<<endl;
				cout<<"ѡ��ƽ̹������1"<<endl<<"ѡ������������2"<<endl<<"�����룺"<<style;
				cout<<endl<<endl<<"����ѡ��������ʽ"<<endl; 
				goto c3; 
				}
				cout<<endl<<"������ʽ��"<<"��ƽ̹"<<"  "<<"����"<<endl<<endl;
				cout<<"ѡ��ƽ̹������1"<<endl<<"ѡ������������2"<<endl<<"�����룺"; 
				cin>>style; 
				if(style==2){
					cout<<endl<<"����ѡ��������ʽ"<<endl; 
				}else if(style==1){
					cout<<"������δ���ţ�";
					style=0;
					Sleep(1000);
					system("cls");
					goto c1; 
				}else{
					cout<<"�������";
					style=0;
					Sleep(1000);
					system("cls");
					goto c1; 
				}
			c3:
				cout<<endl<<"�����ͼ����(������15λ)��";cin>>seed;
			c4:
				cout<<endl<<"����1��ɴ�����";cin>>start;
				if(start==1){
					system("cls");
					goto d1;
				}else{
					cout<<"�������"; 
					Sleep(1000);
					system("cls");
					goto c1; 
				}
				d1:
					cout<<"ע�⣺����Ϸһ�Ų��浵��";
					cout<<endl<<"����������";
					for(int a=1;a<=5;a++){
						for(int b=1;b<=3;b++){
							cout<<"."; 
							Sleep(200);
						} 
						system("cls");
						cout<<"ע�⣺����Ϸһ�Ų��浵��";
						cout<<endl<<"����������";
						}
					Sleep(100);
					system("cls");
					cout<<"������ϣ�";
					Sleep(1000);
					system("cls");
					int blood=10,ground,adt=0,event;
					int copper=0,iron=0,gold=0,diamond=0,emerald=0;
					goto d2;
				d2:
					if(blood<=0){
						cout<<"����Ѫ��Ϊ0��"<<endl;
						Sleep(800);
						cout<<"����������"<<endl;
						Sleep(800);
						cout<<"�����������λ�õ����ʣ�"<<endl<<endl; 
						Sleep(800);
						cout<<"ͭ����"<<copper<<"��    "<<"������"<<iron<<"��    "<<"�𶧣�"<<gold<<"��"<<endl;
						Sleep(800);
						cout<<"��ʯ��"<<diamond<<"��    "<<"�̱�ʯ��"<<emerald<<"��"<<endl;
						Sleep(800);
						cout<<endl<<"��ӭ�������棡"<<endl;
						Sleep(800);
						cout<<"���н�������ϵ��2174172727��QQ��"<<endl;
						Sleep(800);
						Sleep(800);
						cout<<"��������ǹ��������Ⱥ��574397146��QQ��"<<endl; 
						Sleep(800);
						cout<<"��л����֧�֣�"<<endl; 
						Sleep(800);
						cout<<"Goodbye��"<<endl; 
						Sleep(800);
						cout<<"��Ϸ����10����Զ��رգ�"<<endl; 
						Sleep(10000);
						return 0; 
					}
					cout<<"�������ƣ�"<<name<<"       "<<"�������ӣ�"<<seed<<"       "<<"������ʽ������"<<endl;
					cout<<"��ɫ���ƣ�ʷ�ٷ�"<<"       "<<"��ɫѪ����"<<blood<<"��       "<<"ð�մ�����"<<adt<<"��"<<endl;
					cout<<"���ڵ��Σ�";
					ground=rand()%15000+1;
					if(ground>=1&&ground<=10){
						cout<<"Ģ����"; 
					}else if(ground>10&&ground<=50){
						cout<<"���ʹ�ׯ+�Ӷ�������+�������ż�"; 
					}else if(ground>50&&ground<=110){
						cout<<"ɳĮ���+ɳĮ��ׯ"; 
					}else if(ground>110&&ground<=250){
						cout<<"ѩԭ��ׯ+ѩɽ"; 
					}else if(ground>250&&ground<=500){
						cout<<"����+��������"; 
					}else if(ground>500&&ground<=1000){
						cout<<"����ɽ"; 
					}else if(ground>1000&&ground<=2000){
						cout<<"ƽԭ��Ͽ��"; 
					}else if(ground>2000&&ground<=3000){
						cout<<"���йµ�"; 
					}else if(ground>3000&&ground<=5000){
						cout<<"������"; 
					}else if(ground>5000&&ground<=8500){
						cout<<"��ƽԭ"; 
					}else if(ground>8500&&ground<=15000){
						cout<<"����������"; 
					}
					cout<<endl<<endl; 
					cout<<"��Ʒ����������������������������������������������������" <<endl; 
					cout<<"ͭ����"<<copper<<"��    "<<"������"<<iron<<"��    "<<"�𶧣�"<<gold<<"��"<<endl;
					cout<<"��ʯ��"<<diamond<<"��    "<<"�̱�ʯ��"<<emerald<<"��"<<endl;
					cout<<"��������������������������������������������������������" <<endl<<endl; 
					cout<<"ð���¼���"<<endl;
					while(true){
						int explore;
						event=rand()%15000+1;
						if(event>=1&&event<=10){
							cout<<"���ֺ������+����"<<endl; 
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=20;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ50��Ѫ�������72���𶧣�10��������3����ʯ��10���ܲ������к��ܲ��Զ�ת��Ϊ10��Ѫ����"<<endl;
							adt++;
							blood-=40;
							iron+=10;
							gold+=72;
							diamond+=3;
							Sleep(5000);
							system("cls");
							blood-=7;
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>10&&event<=50){
							cout<<"����ɳĮ���+ɳĮ��ׯ";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ25��Ѫ�����2���̱�ʯ��2���𶧣�5��������10�����ܲ���2����������к��ܲ�������Զ�ת��Ϊ20��Ѫ����"<<endl;
							adt++;
							blood-=5;
							iron+=5;
							gold+=2;
							emerald+=2;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>50&&event<=110){
							cout<<"���ִ��ʹ�ׯ";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ5��Ѫ�����1����ʯ��5�����ܲ���2����������к��ܲ�������Զ�ת��Ϊ15��Ѫ����"<<endl;
							adt++;
							blood+=10;
							diamond+=1;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							} 
						}else if(event>110&&event<=250){
							cout<<"�����̱�ʯ";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"���1���̱�ʯ"<<endl;
							adt++;
							emerald++;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							} 
						}else if(event>250&&event<=500){
							cout<<"������ʯ";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"���3����ʯ"<<endl;
							adt++;
							diamond+=3;
							Sleep(2000);
							system("cls");
							goto d2; 
							} else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>500&&event<=1000){
							cout<<"���ֳ���";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ3��Ѫ�����10��������3�����ܲ������к��ܲ��Զ�ת��Ϊ3��Ѫ����"<<endl;
							adt++;
							iron+=10;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							} 
						}else if(event>1000&&event<=2000){
							cout<<"���ֽ��";
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"���5����"<<endl;
							adt++;
							gold+=5;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}     
						}else if(event>2000&&event<=3000){
							cout<<"���ִ������ż�"; 
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ5��Ѫ�������20���𶧣�5������"<<endl;
							adt++;
							blood-=5;
							iron+=5;
							gold+=20;
							Sleep(3000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>3000&&event<=5000){
							cout<<"������ͨ��ׯ"; 
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							}
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ʧ3��Ѫ�����2��������5�����ܲ���1����������к��ܲ�������Զ�ת��Ϊ10��Ѫ����"<<endl;
							adt++;
							blood+=7;
							iron+=2;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>5000&&event<=8500){
							cout<<"��������"; 
							cout<<"����1��ʼ̽������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"̽����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"̽����";
							} 
							system("cls");
							cout<<"̽���ɹ���"<<endl; 
							cout<<"��ϲ���5������"<<endl;
							adt++;
							iron+=5;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>8500&&event<=15000){
							cout<<"���ֽ�ʬ"; 
							cout<<"����1��ʼս������������������������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								cout<<"ս����";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"ս����";
							}
							system("cls");
							cout<<"ս���ɹ���"<<endl; 
							cout<<"��ʧ3��Ѫ�����1�����⣨���и����Զ�ת��Ϊ1��Ѫ������1��ͭ��"<<endl;
							adt++;
							blood-=2;
							copper++; 
							Sleep(5000);
							system("cls");
							goto d2; 
							}else{
								blood--;
								system("cls");
								goto d2; 
							}
						}
					}
}
