#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int rolename;
	int password=0,password1;
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
		cout<<"��ʼ����Ϸ��";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"��ʼ����Ϸ��";
			}
		Sleep(100);
		system("cls");
		cout<<"������ϣ�";
		Sleep(800);
		system("cls");
	a2: 
		int sign;
		cout<<"��¼orע�� ����������������������������"<<endl<<endl;
		cout<<"������������"<<"       "<<"��������"<<"       "<<"��������"<<endl;
		cout<<"���ο͵�¼��"<<"       "<<"��ע�ᩦ"<<"       "<<"����¼��"<<endl;
		cout<<"������������"<<"       "<<"��������"<<"       "<<"��������"<<endl<<endl;
		cout<<"�ο͵�¼������1"<<endl<<"ע��������2"<<endl<<"��¼������3"<<endl<<"�����룺";
		cin>>sign; 
		if(sign==1){
			system("cls");
			Sleep(500);
			goto b1;
		}else if(sign==2){
			system("cls");
			Sleep(500);
			goto b2;
		}else if(sign==3){
			system("cls");
			Sleep(500);
			goto b0;
		}else{
			cout<<"�������";
			Sleep(1000);
			system("cls");
			goto a2; 
		}
		b0:
			int password2;
			if(password==0){
				cout<<"����û���˺ţ���ע�ᣡ"<<endl;
				Sleep(800);
				cout<<"����Ϊ�㷵�ء���¼orע�ᡱҳ"; 
				Sleep(1000);
				system("cls");
				goto a2; 
			} else{
				cout<<"���������룺";
				cin>>password2;
				if(password2==password){
					cout<<"������ȷ��";
					Sleep(1000);
					system("cls");
					goto b1; 
				}else{
					cout<<"�������";
					password2=0;
					Sleep(1000);
					system("cls");
					goto b0; 
				}
			}
		b2:
			cout<<"���������루ֻ�������֣�������λ����";
			cin>>password;
			cout<<"���ظ����룺"; 
			cin>>password1;
			if(password1==password){
				cout<<"ע��ɹ���"; 
				Sleep(1000);
				system("cls");
				goto b1; 
			}else{
				cout<<"�ظ������������������룡";
				Sleep(1000);
				system("cls");
				goto b2; 
			} 
		b1:
			int main;
			cout<<"��ҳ��  ����������������������������"<<endl<<endl;
			cout<<"��ɫ���ƣ�";
			if(rolename==1){
				cout<<"ʷ�ٷ�";
			}else if(rolename==2){
				cout<<"����˿"; 
			}else{
				cout<<"δ����";
			}
			cout<<endl<<endl;
			cout<<"������������"<<"       "<<"��������"<<endl;
			cout<<"����ʼ��Ϸ��"<<"       "<<"�����é�"<<endl;
			cout<<"������������"<<"       "<<"��������"<<endl<<endl;
			cout<<"��ʼ��Ϸ������1"<<endl<<"����������2"<<endl<<"�����룺";
			cin>>main; 
			if(main==1){
				system("cls");
				Sleep(500);
				goto c1;
			}else if(main==2){
				system("cls");
				Sleep(500);
				goto c0;
			}else{
				cout<<"�������";
				Sleep(1000);
				system("cls");
				goto b1; 
			}
			c0:
				cout<<"��ҳ��  ����������������������������"<<endl<<endl;
				cout<<"��ɫ�������ã�"<<endl;
				cout<<"Ԥѡ���ƣ�ʷ�ٷ�     ����˿"<<endl<<endl;
				cout<<"ѡ��ʷ�ٷ�������1"<<endl<<"ѡ�񡰰���˿��������2"<<endl<<"�����룺";
				cin>>rolename;
				cout<<"������ɣ�"<<endl<<"Ϊ��������ҳ�棡";
				Sleep(1000); 
				system("cls");
				goto b1; 
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
					int copper=0,iron=0,gold=0,diamond=0,emerald=0,stone=0,wood=0,board=0,woodenstick=0,staging=0,mPickaxe=0,sPickaxe=0,tPickaxe=0,jPickaxe=0,zPickaxe=0;
					goto d2;
				d2:
					if(blood<=0){
						cout<<"����Ѫ��Ϊ0��"<<endl;
						Sleep(800);
						cout<<"����������"<<endl;
						Sleep(800);
						cout<<"�����������λ�õ����ʣ�"<<endl<<endl; 
						Sleep(800);
						cout<<"ͭ����"<<copper<<"��        "<<"������"<<iron<<"��        "<<"�𶧣�"<<gold<<"��        "<<endl;
						cout<<"��ʯ��"<<diamond<<"��        "<<"�̱�ʯ��"<<emerald<<"��      "<<"ԭʯ��"<<stone<<"��        "<<endl;
						cout<<"ԭľ��"<<wood<<"��        "<<"ľ�壺"<<board<<"��        "<<"ľ����"<<woodenstick<<"��        "<<endl;
						cout<<"����̨��"<<staging<<"��      "<<"ľ�壺"<<mPickaxe<<"��        "<<"ʯ�䣺"<<sPickaxe<<"��        "<<endl;
						cout<<"���䣺"<<tPickaxe<<"��        "<<"��䣺"<<jPickaxe<<"��        "<<"��ʯ�䣺"<<zPickaxe<<"��      "<<endl;
						Sleep(800);
						cout<<endl<<"��ӭ�������棡"<<endl;
						Sleep(800);
						cout<<"���н�������ϵ��2174172727��QQ��"<<endl;
						Sleep(800);
						cout<<"��������ǹ��������Ⱥ��574397146��QQ��"<<endl; 
						Sleep(800);
						cout<<"��л����֧�֣�"<<endl; 
						Sleep(800);
						cout<<"Goodbye��"<<endl; 
						Sleep(800);
						cout<<"����10���Ϊ���˳���Ϸ��"<<endl; 
						Sleep(10000);
						system("cls");
						return 0; 
					}
					cout<<"����������Ϣ��������������������������������������������������������" <<endl; 
					cout<<"�������ƣ�"<<name<<"       "<<"�������ӣ�"<<seed<<"       "<<"������ʽ������"<<endl;
					cout<<"��ɫ���ƣ�";
					if(rolename==1){
						cout<<"ʷ�ٷ�";
					} else if(rolename==2){
						cout<<"����˿"; 
					}else{
						cout<<"δ����"; 
					}
					cout<<"       "<<"��ɫѪ����"<<blood<<"��       "<<"ð�մ�����"<<adt<<"��"<<endl;
					cout<<"������ڵ��Σ�";
					ground=rand()%15000+1;
					if(ground>=1&&ground<=10){
						cout<<"Ģ����"; 
					}else if(ground>10&&ground<=50){
						cout<<"����ɽ"; 
					}else if(ground>50&&ground<=110){
						cout<<"����"; 
					}else if(ground>110&&ground<=250){
						cout<<"����"; 
					}else if(ground>250&&ground<=500){
						cout<<"ѩԭ+ѩɽ"; 
					}else if(ground>500&&ground<=1000){
						cout<<"ɳĮ"; 
					}else if(ground>1000&&ground<=2000){
						cout<<"ƽԭ��Ͽ��"; 
					}else if(ground>2000&&ground<=3000){
						cout<<"���йµ�"; 
					}else if(ground>3000&&ground<=5000){
						cout<<"ɭ��"; 
					}else if(ground>5000&&ground<=8500){
						cout<<"��ԭ"; 
					}else if(ground>8500&&ground<=15000){
						cout<<"��������"; 
					}
					cout<<endl<<"��������������������������������������������������������������������" <<endl; 
					cout<<endl<<endl; 
					cout<<"������Ʒ����������������������������������������������������" <<endl; 
					cout<<"ͭ����"<<copper<<"��        "<<"������"<<iron<<"��        "<<"�𶧣�"<<gold<<"��        "<<endl;
					cout<<"��ʯ��"<<diamond<<"��        "<<"�̱�ʯ��"<<emerald<<"��      "<<"ԭʯ��"<<stone<<"��        "<<endl;
					cout<<"ԭľ��"<<wood<<"��        "<<"ľ�壺"<<board<<"��        "<<"ľ����"<<woodenstick<<"��        "<<endl;
					cout<<"����̨��"<<staging<<"��      "<<"ľ�壺"<<mPickaxe<<"��        "<<"ʯ�䣺"<<sPickaxe<<"��        "<<endl;
					cout<<"���䣺"<<tPickaxe<<"��        "<<"��䣺"<<jPickaxe<<"��        "<<"��ʯ�䣺"<<zPickaxe<<"��      "<<endl;
					cout<<"������������������������������������������������������������" <<endl<<endl; 
					cout<<"�����¼���"<<endl;
					while(true){
						int explore,wood1,board1,woodenstick1,staging1,mPickaxe1,sPickaxe1,tPickaxe1,jPickaxe1,zPickaxe1;
						if(wood>=1){
							cout<<"������ԭľ�ϳ�ľ�壬�ϳ�������1����������2��"; 
							cin>>wood1;
							if(wood1==1){
								wood--;
								board+=4;
								system("cls");
								goto d2; 
							}
						} 
						if(board>=1){
							cout<<"������ľ��ϳ�ľ�����ϳ�������1����������2��"; 
							cin>>board1;
							if(board1==1){
								board--;
								woodenstick+=4;
								system("cls");
								goto d2; 
							}
						}
						if(board>=4){
							cout<<"������ľ��ϳɹ���̨���ϳ�������1����������2��"; 
							cin>>staging1;
							if(staging1==1){
								board-=4;
								staging++;
								system("cls");
								goto d2;
							};
						}
						if(staging>=1&&board>=3&&woodenstick>=2){
							cout<<"���Ժϳ�ľ�壬�ϳ�������1����������2��"; 
							cin>>mPickaxe1;
							if(mPickaxe1==1){
								board-=3;
								woodenstick-=2;
								mPickaxe++; 
								system("cls");
								goto d2; 
							}
						}
						if(staging>=1&&stone>=3&&woodenstick>=2){
							cout<<"���Ժϳ�ʯ�壬�ϳ�������1����������2��"; 
							cin>>sPickaxe1;
							if(sPickaxe1==1){
								stone-=3;
								woodenstick-=2;
								sPickaxe++; 
								system("cls");
								goto d2; 
							}
						}
						if(staging>=1&&iron>=3&&woodenstick>=2){
							cout<<"���Ժϳ����壬�ϳ�������1����������2��"; 
							cin>>tPickaxe1;
							if(tPickaxe1==1){
								iron-=3;
								woodenstick-=2;
								tPickaxe++; 
								system("cls");
								goto d2; 
							}
						}
						if(staging>=1&&gold>=3&&woodenstick>=2){
							cout<<"���Ժϳɽ�壬�ϳ�������1����������2��"; 
							cin>>jPickaxe1;
							if(jPickaxe1==1){
								gold-=3;
								woodenstick-=2;
								jPickaxe++; 
								system("cls");
								goto d2;
							} 
						}
						if(staging>=1&&diamond>=3&&woodenstick>=2){
							cout<<"���Ժϳ���ʯ�壬�ϳ�������1����������2��"; 
							cin>>zPickaxe1;
							if(zPickaxe1==1){
								diamond-=3;
								woodenstick-=2;
								zPickaxe++; 
								system("cls");
								goto d2; 
							}
						}
						event=rand()%80000+1;
						if(event>=1&&event<=100){
							cout<<"���ֺ������+����+�����ż�"<<endl; 
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ60��Ѫ�������200���𶧣�60��������10����ʯ��5��ԭľ��10���ܲ������к��ܲ��Զ�ת��Ϊ10��Ѫ����"<<endl;
							adt++;
							blood-=50;
							iron+=60;
							gold+=200;
							wood+=5; 
							diamond+=10;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>100&&event<=250){
							cout<<"����ɳĮ���+ɳĮ��ׯ";
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ30��Ѫ�����5���̱�ʯ��10���𶧣�60��������10�����ܲ���2����������к��ܲ�������Զ�ת��Ϊ20��Ѫ����"<<endl;
							adt++;
							blood-=10;
							iron+=60;
							gold+=10;
							emerald+=5;
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>250&&event<=450){
							cout<<"���ִ��ʹ�ׯ";
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ10��Ѫ�����1����ʯ��5��ͭ����10��ԭľ��20��������5�����ܲ���2����������к��ܲ�������Զ�ת��Ϊ15��Ѫ����"<<endl;
							adt++;
							blood+=2;
							iron+=20;
							copper+=5; 
							diamond+=1;
							wood+=10; 
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>450&&event<=700){
							cout<<"�����̱�ʯ";
							cout<<"����1��ʼ�ھ�����2���������ھ򲢼���1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d20;
									}
									cout<<"��û�п�ʹ�õĸ��ӣ��޷��ھ�"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d20:
								system("cls");
								cout<<"�ھ���";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"�ھ���";
							}
							system("cls");
							cout<<"�ھ�ɹ���"<<endl; 
							cout<<"���1���̱�ʯ"<<endl;
							adt++;
							emerald++;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>700&&event<=1000){
							cout<<"������ʯ";
							cout<<"����1��ʼ�ھ�����2���������ھ򲢼���1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d30;
									}
									cout<<"��û�п�ʹ�õĸ��ӣ��޷��ھ�"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d30:
								system("cls");
								cout<<"�ھ���";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"�ھ���";
							}
							system("cls");
							cout<<"�ھ�ɹ���"<<endl; 
							cout<<"���3����ʯ"<<endl;
							adt++;
							diamond+=3;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>1000&&event<=1450){
							cout<<"���ִ������ż�"; 
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ7��Ѫ�������20���𶧣�5��������5��ͭ��"<<endl;
							adt++;
							blood-=7;
							iron+=5;
							gold+=20;
							copper+=5; 
							Sleep(3000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>1450&&event<=2400){
							cout<<"���ֽ��";
							cout<<"����1��ʼ�ھ�����2���������ھ򲢼���1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d31;
									}
									cout<<"��û�п�ʹ�õĸ��ӣ��޷��ھ�"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d31:
								system("cls");
								cout<<"�ھ���";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"�ھ���";
							}
							system("cls");
							cout<<"�ھ�ɹ���"<<endl; 
							cout<<"���5����"<<endl;
							adt++;
							gold+=5;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							} 
						}else if(event>2400&&event<=3400){
							cout<<"���ֳ���";
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ3��Ѫ�����20��������5��ԭľ��4�����ܲ������к��ܲ��Զ�ת��Ϊ4��Ѫ����"<<endl;
							adt++;
							iron+=10;
							blood++;
							wood+=5; 
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>3400&&event<=5400){
							cout<<"������ͨ��ׯ"; 
							cout<<"����1��ʼ̽��������2��������̽��������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ5��Ѫ�����10��������5��ԭľ��5�����ܲ���1����������к��ܲ�������Զ�ת��Ϊ10��Ѫ����"<<endl;
							adt++;
							blood+=5;
							iron+=5;
							wood+=5; 
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>5400&&event<=8540){
							cout<<"��������"; 
							cout<<"����1��ʼ�ھ����������������������ھ򲢼���1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(sPickaxe<=0){
									if(tPickaxe>0||jPickaxe>0||zPickaxe>0){
										goto d32;
									}
									cout<<"��û�п�ʹ�õĸ��ӣ��޷��ھ�"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d32: 
								system("cls");
								cout<<"�ھ���";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"�ھ���";
							} 
							system("cls");
							cout<<"�ھ�ɹ���"<<endl; 
							cout<<"��ϲ���10������"<<endl;
							adt++;
							iron+=5;
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>8540&&event<=15400){
							cout<<"����ʯͷ"; 
							cout<<"����1��ʼ�ھ�����2���������ھ򲢼���1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(mPickaxe<=0){
									if(sPickaxe>0||tPickaxe>0||jPickaxe>0||zPickaxe>0){
										goto d33;
									}
									cout<<"��û�п�ʹ�õĸ��ӣ��޷��ھ�"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d33:
								system("cls");
								cout<<"�ھ���";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"�ھ���";
							} 
							system("cls");
							cout<<"�ھ�ɹ���"<<endl; 
							cout<<"��ϲ���15��ԭʯ"<<endl;
							adt++;
							stone+=15; 
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>16000&&event<=34000){
							cout<<"����ԭľ"; 
							cout<<"����1��ʼ����������2�������ο���������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"������";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"������";
							} 
							system("cls");
							cout<<"�����ɹ���"<<endl; 
							cout<<"��ϲ���5��ԭľ"<<endl;
							adt++;
							wood+=5; 
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>34000&&event<=50000||event>15400&&event<16000){
							cout<<"���ֽ�ʬ"; 
							cout<<"����1��ʼս��������2��������ð�ղ�����1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
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
							cout<<"��ʧ4��Ѫ�����1�����⣨���и����Զ�ת��Ϊ1��Ѫ������10��ͭ��"<<endl;
							adt++;
							blood-=3;
							copper+=10; 
							Sleep(5000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}else if(event>50000&&event<=80000){
							cout<<"����ԭľ"; 
							cout<<"����1��ʼ����������2�������ο���������1��Ѫ���������룺"; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"������";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"������";
							} 
							system("cls");
							cout<<"�����ɹ���"<<endl; 
							cout<<"��ϲ���5��ԭľ"<<endl;
							adt++;
							wood+=5; 
							Sleep(2000);
							system("cls");
							goto d2; 
							}else if(explore==2){
								blood--;
								system("cls");
								goto d2; 
							}
						}
					}
}
