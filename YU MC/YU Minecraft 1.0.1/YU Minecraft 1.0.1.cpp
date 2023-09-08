#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int rolename;
	int password=0,password1;
	srand(time(0));
	a1:
	  	cout<<"     YU Minecraft     "<<endl;
		cout<<"YU仿Minecraft PC win版"; 
		cout<<endl<<"        启动中";
		for(int a=1;a<=10;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"     YU Minecraft     "<<endl;
			cout<<"YU仿Minecraft PC win版"; 
			cout<<endl<<"        启动中";
			}
		Sleep(100);
		system("cls");
		cout<<"初始化游戏中";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<"初始化游戏中";
			}
		Sleep(100);
		system("cls");
		cout<<"加载完毕！";
		Sleep(800);
		system("cls");
	a2: 
		int sign;
		cout<<"登录or注册 ——————————————"<<endl<<endl;
		cout<<"┌────┐"<<"       "<<"┌──┐"<<"       "<<"┌──┐"<<endl;
		cout<<"│游客登录│"<<"       "<<"│注册│"<<"       "<<"│登录│"<<endl;
		cout<<"└────┘"<<"       "<<"└──┘"<<"       "<<"└──┘"<<endl<<endl;
		cout<<"游客登录请输入1"<<endl<<"注册请输入2"<<endl<<"登录请输入3"<<endl<<"请输入：";
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
			cout<<"输入错误！";
			Sleep(1000);
			system("cls");
			goto a2; 
		}
		b0:
			int password2;
			if(password==0){
				cout<<"您还没有账号，请注册！"<<endl;
				Sleep(800);
				cout<<"即将为你返回“登录or注册”页"; 
				Sleep(1000);
				system("cls");
				goto a2; 
			} else{
				cout<<"请输入密码：";
				cin>>password2;
				if(password2==password){
					cout<<"密码正确！";
					Sleep(1000);
					system("cls");
					goto b1; 
				}else{
					cout<<"密码错误！";
					password2=0;
					Sleep(1000);
					system("cls");
					goto b0; 
				}
			}
		b2:
			cout<<"请设置密码（只能是数字，至少六位）：";
			cin>>password;
			cout<<"请重复密码："; 
			cin>>password1;
			if(password1==password){
				cout<<"注册成功！"; 
				Sleep(1000);
				system("cls");
				goto b1; 
			}else{
				cout<<"重复错误，请重新设置密码！";
				Sleep(1000);
				system("cls");
				goto b2; 
			} 
		b1:
			int main;
			cout<<"主页面  ——————————————"<<endl<<endl;
			cout<<"角色名称：";
			if(rolename==1){
				cout<<"史蒂夫";
			}else if(rolename==2){
				cout<<"爱丽丝"; 
			}else{
				cout<<"未命名";
			}
			cout<<endl<<endl;
			cout<<"┌────┐"<<"       "<<"┌──┐"<<endl;
			cout<<"│开始游戏│"<<"       "<<"│设置│"<<endl;
			cout<<"└────┘"<<"       "<<"└──┘"<<endl<<endl;
			cout<<"开始游戏请输入1"<<endl<<"设置请输入2"<<endl<<"请输入：";
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
				cout<<"输入错误！";
				Sleep(1000);
				system("cls");
				goto b1; 
			}
			c0:
				cout<<"主页面  ——————————————"<<endl<<endl;
				cout<<"角色名称设置："<<endl;
				cout<<"预选名称：史蒂夫     爱丽丝"<<endl<<endl;
				cout<<"选择“史蒂夫”请输入1"<<endl<<"选择“爱丽丝”请输入2"<<endl<<"请输入：";
				cin>>rolename;
				cout<<"设置完成！"<<endl<<"为您返回主页面！";
				Sleep(1000); 
				system("cls");
				goto b1; 
			c1:
				int style,a,start;
				long long seed,name;
				if(a>0){
					cout<<"创建新游戏—————————————"<<endl<<endl;
					cout<<"游戏名称(仅限数字且不超过15位)："<<name<<endl;
					goto c2;
				}
				a=0;
				cout<<"创建新游戏—————————————"<<endl<<endl;
				cout<<"游戏名称(仅限数字且不超过15位)：";
				cin>>name;
				a++;
			c2:
				if(style>0){
				cout<<endl<<"世界样式："<<"超平坦"<<"  "<<"无限"<<endl<<endl;
				cout<<"选择超平坦请输入1"<<endl<<"选择无限请输入2"<<endl<<"请输入："<<style;
				cout<<endl<<endl<<"您已选择无限样式"<<endl; 
				goto c3; 
				}
				cout<<endl<<"世界样式："<<"超平坦"<<"  "<<"无限"<<endl<<endl;
				cout<<"选择超平坦请输入1"<<endl<<"选择无限请输入2"<<endl<<"请输入："; 
				cin>>style; 
				if(style==2){
					cout<<endl<<"您已选择无限样式"<<endl; 
				}else if(style==1){
					cout<<"功能暂未开放！";
					style=0;
					Sleep(1000);
					system("cls");
					goto c1; 
				}else{
					cout<<"输入错误！";
					style=0;
					Sleep(1000);
					system("cls");
					goto c1; 
				}
			c3:
				cout<<endl<<"输入地图种子(不超过15位)：";cin>>seed;
			c4:
				cout<<endl<<"输入1完成创建：";cin>>start;
				if(start==1){
					system("cls");
					goto d1;
				}else{
					cout<<"输入错误！"; 
					Sleep(1000);
					system("cls");
					goto c1; 
				}
				d1:
					cout<<"注意：本游戏一概不存档！";
					cout<<endl<<"生成世界中";
					for(int a=1;a<=5;a++){
						for(int b=1;b<=3;b++){
							cout<<"."; 
							Sleep(200);
						} 
						system("cls");
						cout<<"注意：本游戏一概不存档！";
						cout<<endl<<"生成世界中";
						}
					Sleep(100);
					system("cls");
					cout<<"生成完毕！";
					Sleep(1000);
					system("cls");
					int blood=10,ground,adt=0,event;
					int copper=0,iron=0,gold=0,diamond=0,emerald=0,stone=0,wood=0,board=0,woodenstick=0,staging=0,mPickaxe=0,sPickaxe=0,tPickaxe=0,jPickaxe=0,zPickaxe=0;
					goto d2;
				d2:
					if(blood<=0){
						cout<<"您的血量为0了"<<endl;
						Sleep(800);
						cout<<"您已死亡！"<<endl;
						Sleep(800);
						cout<<"以下是您本次获得的物资："<<endl<<endl; 
						Sleep(800);
						cout<<"铜锭："<<copper<<"个        "<<"铁锭："<<iron<<"个        "<<"金锭："<<gold<<"个        "<<endl;
						cout<<"钻石："<<diamond<<"颗        "<<"绿宝石："<<emerald<<"颗      "<<"原石："<<stone<<"块        "<<endl;
						cout<<"原木："<<wood<<"块        "<<"木板："<<board<<"块        "<<"木棍："<<woodenstick<<"根        "<<endl;
						cout<<"工作台："<<staging<<"个      "<<"木稿："<<mPickaxe<<"把        "<<"石镐："<<sPickaxe<<"把        "<<endl;
						cout<<"铁镐："<<tPickaxe<<"把        "<<"金镐："<<jPickaxe<<"把        "<<"钻石镐："<<zPickaxe<<"把      "<<endl;
						Sleep(800);
						cout<<endl<<"欢迎您的游玩！"<<endl;
						Sleep(800);
						cout<<"若有建议请联系：2174172727（QQ）"<<endl;
						Sleep(800);
						cout<<"想加入我们工作室请进群：574397146（QQ）"<<endl; 
						Sleep(800);
						cout<<"感谢您的支持！"<<endl; 
						Sleep(800);
						cout<<"Goodbye！"<<endl; 
						Sleep(800);
						cout<<"将在10秒后为您退出游戏！"<<endl; 
						Sleep(10000);
						system("cls");
						return 0; 
					}
					cout<<"——基本信息————————————————————————————" <<endl; 
					cout<<"世界名称："<<name<<"       "<<"世界种子："<<seed<<"       "<<"世界样式：无限"<<endl;
					cout<<"角色名称：";
					if(rolename==1){
						cout<<"史蒂夫";
					} else if(rolename==2){
						cout<<"爱丽丝"; 
					}else{
						cout<<"未命名"; 
					}
					cout<<"       "<<"角色血量："<<blood<<"滴       "<<"冒险次数："<<adt<<"次"<<endl;
					cout<<"随机所在地形：";
					ground=rand()%15000+1;
					if(ground>=1&&ground<=10){
						cout<<"蘑菇岛"; 
					}else if(ground>10&&ground<=50){
						cout<<"陶土山"; 
					}else if(ground>50&&ground<=110){
						cout<<"沼泽"; 
					}else if(ground>110&&ground<=250){
						cout<<"雨林"; 
					}else if(ground>250&&ground<=500){
						cout<<"雪原+雪山"; 
					}else if(ground>500&&ground<=1000){
						cout<<"沙漠"; 
					}else if(ground>1000&&ground<=2000){
						cout<<"平原大峡谷"; 
					}else if(ground>2000&&ground<=3000){
						cout<<"海中孤岛"; 
					}else if(ground>3000&&ground<=5000){
						cout<<"森林"; 
					}else if(ground>5000&&ground<=8500){
						cout<<"草原"; 
					}else if(ground>8500&&ground<=15000){
						cout<<"海边树林"; 
					}
					cout<<endl<<"——————————————————————————————————" <<endl; 
					cout<<endl<<endl; 
					cout<<"——物品栏—————————————————————————" <<endl; 
					cout<<"铜锭："<<copper<<"个        "<<"铁锭："<<iron<<"个        "<<"金锭："<<gold<<"个        "<<endl;
					cout<<"钻石："<<diamond<<"颗        "<<"绿宝石："<<emerald<<"颗      "<<"原石："<<stone<<"块        "<<endl;
					cout<<"原木："<<wood<<"块        "<<"木板："<<board<<"块        "<<"木棍："<<woodenstick<<"根        "<<endl;
					cout<<"工作台："<<staging<<"个      "<<"木稿："<<mPickaxe<<"把        "<<"石镐："<<sPickaxe<<"把        "<<endl;
					cout<<"铁镐："<<tPickaxe<<"把        "<<"金镐："<<jPickaxe<<"把        "<<"钻石镐："<<zPickaxe<<"把      "<<endl;
					cout<<"——————————————————————————————" <<endl<<endl; 
					cout<<"生存事件："<<endl;
					while(true){
						int explore,wood1,board1,woodenstick1,staging1,mPickaxe1,sPickaxe1,tPickaxe1,jPickaxe1,zPickaxe1;
						if(wood>=1){
							cout<<"可以用原木合成木板，合成请输入1，跳过输入2："; 
							cin>>wood1;
							if(wood1==1){
								wood--;
								board+=4;
								system("cls");
								goto d2; 
							}
						} 
						if(board>=1){
							cout<<"可以用木板合成木棍，合成请输入1，跳过输入2："; 
							cin>>board1;
							if(board1==1){
								board--;
								woodenstick+=4;
								system("cls");
								goto d2; 
							}
						}
						if(board>=4){
							cout<<"可以用木板合成工作台，合成请输入1，跳过输入2："; 
							cin>>staging1;
							if(staging1==1){
								board-=4;
								staging++;
								system("cls");
								goto d2;
							};
						}
						if(staging>=1&&board>=3&&woodenstick>=2){
							cout<<"可以合成木稿，合成请输入1，跳过输入2："; 
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
							cout<<"可以合成石稿，合成请输入1，跳过输入2："; 
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
							cout<<"可以合成铁稿，合成请输入1，跳过输入2："; 
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
							cout<<"可以合成金稿，合成请输入1，跳过输入2："; 
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
							cout<<"可以合成钻石稿，合成请输入1，跳过输入2："; 
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
							cout<<"发现海底神殿+沉船+海底遗迹"<<endl; 
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=20;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失60滴血量，获得200个金锭，60个铁锭，10个钻石，5个原木，10胡萝卜（所有胡萝卜自动转化为10滴血量）"<<endl;
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
							cout<<"发现沙漠神殿+沙漠村庄";
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失30滴血，获得5个绿宝石，10个金锭，60个铁锭，10个胡萝卜，2个面包（所有胡萝卜和面包自动转化为20滴血量）"<<endl;
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
							cout<<"发现大型村庄";
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失10滴血，获得1个钻石，5个铜锭，10个原木，20个铁锭，5个胡萝卜，2个面包（所有胡萝卜和面包自动转化为15滴血量）"<<endl;
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
							cout<<"发现绿宝石";
							cout<<"输入1开始挖掘，输入2跳过本次挖掘并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d20;
									}
									cout<<"你没有可使用的镐子，无法挖掘！"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d20:
								system("cls");
								cout<<"挖掘中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"挖掘中";
							}
							system("cls");
							cout<<"挖掘成功！"<<endl; 
							cout<<"获得1个绿宝石"<<endl;
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
							cout<<"发现钻石";
							cout<<"输入1开始挖掘，输入2跳过本次挖掘并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d30;
									}
									cout<<"你没有可使用的镐子，无法挖掘！"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d30:
								system("cls");
								cout<<"挖掘中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"挖掘中";
							}
							system("cls");
							cout<<"挖掘成功！"<<endl; 
							cout<<"获得3个钻石"<<endl;
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
							cout<<"发现传送门遗迹"; 
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失7滴血量，获得20个金锭，5个铁锭，5个铜锭"<<endl;
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
							cout<<"发现金矿";
							cout<<"输入1开始挖掘，输入2跳过本次挖掘并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(tPickaxe<=0){
									if(jPickaxe>0||zPickaxe>0){
										goto d31;
									}
									cout<<"你没有可使用的镐子，无法挖掘！"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d31:
								system("cls");
								cout<<"挖掘中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"挖掘中";
							}
							system("cls");
							cout<<"挖掘成功！"<<endl; 
							cout<<"获得5个金锭"<<endl;
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
							cout<<"发现沉船";
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失3滴血，获得20个铁锭，5个原木，4个胡萝卜（所有胡萝卜自动转化为4滴血量）"<<endl;
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
							cout<<"发现普通村庄"; 
							cout<<"输入1开始探索，输入2跳过本次探索并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"探索中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"探索中";
							}
							system("cls");
							cout<<"探索成功！"<<endl; 
							cout<<"损失5滴血，获得10个铁锭，5个原木，5个胡萝卜，1个面包（所有胡萝卜和面包自动转化为10滴血量）"<<endl;
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
							cout<<"发现铁矿"; 
							cout<<"输入1开始挖掘，输入其他数字跳过本次挖掘并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(sPickaxe<=0){
									if(tPickaxe>0||jPickaxe>0||zPickaxe>0){
										goto d32;
									}
									cout<<"你没有可使用的镐子，无法挖掘！"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d32: 
								system("cls");
								cout<<"挖掘中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"挖掘中";
							} 
							system("cls");
							cout<<"挖掘成功！"<<endl; 
							cout<<"恭喜获得10个铁锭"<<endl;
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
							cout<<"发现石头"; 
							cout<<"输入1开始挖掘，输入2跳过本次挖掘并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								if(mPickaxe<=0){
									if(sPickaxe>0||tPickaxe>0||jPickaxe>0||zPickaxe>0){
										goto d33;
									}
									cout<<"你没有可使用的镐子，无法挖掘！"; 
									Sleep(1000);
									system("cls");
									goto d2; 
								}
								d33:
								system("cls");
								cout<<"挖掘中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"挖掘中";
							} 
							system("cls");
							cout<<"挖掘成功！"<<endl; 
							cout<<"恭喜获得15个原石"<<endl;
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
							cout<<"发现原木"; 
							cout<<"输入1开始砍伐，输入2跳过本次砍伐并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"砍伐中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"砍伐中";
							} 
							system("cls");
							cout<<"砍伐成功！"<<endl; 
							cout<<"恭喜获得5个原木"<<endl;
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
							cout<<"发现僵尸"; 
							cout<<"输入1开始战斗，输入2跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"战斗中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"战斗中";
							}
							system("cls");
							cout<<"战斗成功！"<<endl; 
							cout<<"损失4滴血，获得1个腐肉（所有腐肉自动转化为1滴血量），10个铜锭"<<endl;
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
							cout<<"发现原木"; 
							cout<<"输入1开始砍伐，输入2跳过本次砍伐并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
								system("cls");
								cout<<"砍伐中";
								for(int a=1;a<=5;a++){
									for(int b=1;b<=3;b++){
										cout<<"."; 
										Sleep(200);
									} 
									system("cls");
									cout<<"砍伐中";
							} 
							system("cls");
							cout<<"砍伐成功！"<<endl; 
							cout<<"恭喜获得5个原木"<<endl;
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
