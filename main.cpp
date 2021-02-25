#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include "str2int.h"
using namespace std;
	int ans = 0;
	int randomn = 0; 
	int max= 100;
	int min = 0;
	int score = 0;
void jmp();
int zzz(){
	char ai[501];
	cin.getline(ai,501);
	if(ai[1]=='\0'){
		switch(ai[0]){
		case 'Y':
			jmp();
			break;
		case 'N':
			return 0;
			break;
		default:
			cout<<"无效输入"<<endl;
		}
	}
}
void ne(){
	for(;::ans>::randomn;){
			if(::ans<=100){
				if(::ans<::max){
					::max = ::ans;
				}
			cout<<"大了，"<<::min<<"-"<<::max<<"之间"<<endl;
				::ans = s2i();
			}
			else{
				cout<<"超出了范围，请重新输入"<<endl;
				::ans = s2i();
				ne();
			}
		}
		for(;::ans<randomn;){
			if(::ans>=0){
				if(::ans>::min){
			::min = ::ans;
				}
				cout<<"小了，"<<::min<<"-"<<::max<<"之间"<<endl;
				::ans = s2i();
			}
			else{
				cout<<"超出了范围，请重新输入"<<endl;
				::ans = s2i();
				ne();
			}
		}
	}
int main(){
	cout<<"猜数字游戏即将开始，请做好准备"<<endl;
	Sleep(3000);//休息3秒
	srand((unsigned)time(NULL));
	::randomn=rand()%101;//生成随机数字
	cout<<"随机数字已生成，范围0-100"<<endl;
	::ans = s2i();
	for(;::ans!=::randomn;){
		ne();
	}
	cout<<"猜中了！恭喜(分数+1)"<<endl;
	::score += 1;
	cout<<"您的分数为"<<::score<<"分";
	cout<<"您是否要继续?(Y/N)"<<endl;
	zzz();
}
void jmp(){
	::ans = 0;
	::randomn = 0; 
	::max= 100;
	::min = 0;
	main();
}
