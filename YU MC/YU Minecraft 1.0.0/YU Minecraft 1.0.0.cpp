#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
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
		cout<<endl<<"初始化游戏中";
		for(int a=1;a<=5;a++){
			for(int b=1;b<=3;b++){
				cout<<"."; 
				Sleep(200);
			} 
			system("cls");
			cout<<endl<<"初始化游戏中";
			}
		Sleep(100);
		system("cls");
		cout<<"加载完毕！";
		Sleep(800);
		system("cls");
	a2: 
		int sign;
		cout<<"sign in ——————————————"<<endl<<endl;
		cout<<"游客登录"<<"       "<<"注册"<<endl<<endl;
		cout<<"游客登录请输入1"<<endl<<"注册请输入2"<<endl<<"请输入：";
		cin>>sign; 
		if(sign==1){
			system("cls");
			Sleep(500);
			goto b1;
		}else if(sign==2){
			cout<<"功能暂未开放！";
			Sleep(1000);
			system("cls");
			goto a2; 
		}else{
			cout<<"输入错误！";
			Sleep(1000);
			system("cls");
			goto a2; 
		}
		b1:
			int main;
			cout<<"主页面  ——————————————"<<endl<<endl;
			cout<<"开始游戏"<<endl<<endl<<"设置"<<endl<<endl;
			cout<<"开始游戏请输入1"<<endl<<"设置请输入2"<<endl<<"请输入：";
			cin>>main; 
			if(main==1){
				system("cls");
				Sleep(500);
				goto c1;
			}else if(main==2){
				cout<<"功能暂未开放！";
				Sleep(1000);
				system("cls");
				goto b1; 
			}else{
				cout<<"输入错误！";
				Sleep(1000);
				system("cls");
				goto b1; 
			}
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
					cout<<endl<<"加载世界中";
					for(int a=1;a<=5;a++){
						for(int b=1;b<=3;b++){
							cout<<"."; 
							Sleep(200);
						} 
						system("cls");
						cout<<"注意：本游戏一概不存档！";
						cout<<endl<<"加载世界中";
						}
					Sleep(100);
					system("cls");
					cout<<"加载完毕！";
					Sleep(1000);
					system("cls");
					int blood=10,ground,adt=0,event;
					int copper=0,iron=0,gold=0,diamond=0,emerald=0;
					goto d2;
				d2:
					if(blood<=0){
						cout<<"您的血量为0了"<<endl;
						Sleep(800);
						cout<<"您已死亡！"<<endl;
						Sleep(800);
						cout<<"以下是您本次获得的物资："<<endl<<endl; 
						Sleep(800);
						cout<<"铜锭："<<copper<<"个    "<<"铁锭："<<iron<<"个    "<<"金锭："<<gold<<"个"<<endl;
						Sleep(800);
						cout<<"钻石："<<diamond<<"颗    "<<"绿宝石："<<emerald<<"颗"<<endl;
						Sleep(800);
						cout<<endl<<"欢迎您的游玩！"<<endl;
						Sleep(800);
						cout<<"若有建议请联系：2174172727（QQ）"<<endl;
						Sleep(800);
						Sleep(800);
						cout<<"想加入我们工作室请进群：574397146（QQ）"<<endl; 
						Sleep(800);
						cout<<"感谢您的支持！"<<endl; 
						Sleep(800);
						cout<<"Goodbye！"<<endl; 
						Sleep(800);
						cout<<"游戏将在10秒后自动关闭！"<<endl; 
						Sleep(10000);
						return 0; 
					}
					cout<<"世界名称："<<name<<"       "<<"世界种子："<<seed<<"       "<<"世界样式：无限"<<endl;
					cout<<"角色名称：史蒂夫"<<"       "<<"角色血量："<<blood<<"滴       "<<"冒险次数："<<adt<<"次"<<endl;
					cout<<"所在地形：";
					ground=rand()%15000+1;
					if(ground>=1&&ground<=10){
						cout<<"蘑菇岛"; 
					}else if(ground>10&&ground<=50){
						cout<<"大型村庄+掠夺者哨塔+传送门遗迹"; 
					}else if(ground>50&&ground<=110){
						cout<<"沙漠神殿+沙漠村庄"; 
					}else if(ground>110&&ground<=250){
						cout<<"雪原村庄+雪山"; 
					}else if(ground>250&&ground<=500){
						cout<<"雨林+丛林神庙"; 
					}else if(ground>500&&ground<=1000){
						cout<<"陶土山"; 
					}else if(ground>1000&&ground<=2000){
						cout<<"平原大峡谷"; 
					}else if(ground>2000&&ground<=3000){
						cout<<"海中孤岛"; 
					}else if(ground>3000&&ground<=5000){
						cout<<"白桦林"; 
					}else if(ground>5000&&ground<=8500){
						cout<<"大平原"; 
					}else if(ground>8500&&ground<=15000){
						cout<<"海边橡树林"; 
					}
					cout<<endl<<endl; 
					cout<<"物品栏—————————————————————————" <<endl; 
					cout<<"铜锭："<<copper<<"个    "<<"铁锭："<<iron<<"个    "<<"金锭："<<gold<<"个"<<endl;
					cout<<"钻石："<<diamond<<"颗    "<<"绿宝石："<<emerald<<"颗"<<endl;
					cout<<"————————————————————————————" <<endl<<endl; 
					cout<<"冒险事件："<<endl;
					while(true){
						int explore;
						event=rand()%15000+1;
						if(event>=1&&event<=10){
							cout<<"发现海底神殿+沉船"<<endl; 
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失50滴血量，获得72个金锭，10个铁锭，3个钻石，10胡萝卜（所有胡萝卜自动转化为10滴血量）"<<endl;
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
							cout<<"发现沙漠神殿+沙漠村庄";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失25滴血，获得2个绿宝石，2个金锭，5个铁锭，10个胡萝卜，2个面包（所有胡萝卜和面包自动转化为20滴血量）"<<endl;
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
							cout<<"发现大型村庄";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失5滴血，获得1个钻石，5个胡萝卜，2个面包（所有胡萝卜和面包自动转化为15滴血量）"<<endl;
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
							cout<<"发现绿宝石";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"获得1个绿宝石"<<endl;
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
							cout<<"发现钻石";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"获得3个钻石"<<endl;
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
							cout<<"发现沉船";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失3滴血，获得10个铁锭，3个胡萝卜（所有胡萝卜自动转化为3滴血量）"<<endl;
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
							cout<<"发现金矿";
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"获得5个金锭"<<endl;
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
							cout<<"发现传送门遗迹"; 
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失5滴血量，获得20个金锭，5个铁锭"<<endl;
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
							cout<<"发现普通村庄"; 
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失3滴血，获得2个铁锭，5个胡萝卜，1个面包（所有胡萝卜和面包自动转化为10滴血量）"<<endl;
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
							cout<<"发现铁矿"; 
							cout<<"输入1开始探索，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"恭喜获得5个铁锭"<<endl;
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
							cout<<"发现僵尸"; 
							cout<<"输入1开始战斗，输入其他数字跳过本次冒险并减少1滴血量，请输入："; 
							cin>>explore;
							cout<<endl; 
							if(explore==1){
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
							cout<<"损失3滴血，获得1个腐肉（所有腐肉自动转化为1滴血量），1个铜锭"<<endl;
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
