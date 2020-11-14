#include <iostream>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
	long long ans;
	int randomn; 
	long long max = 100;
	long long min = 0;
	int score = 0;
	int a = 0;
int inscore();
void outscore(int z);
void ne(){
	for(;::ans>::randomn;){
			if(::ans<=100){
				if(::ans<::max){
				::max = ::ans;
				}
			cout<<"大了，"<<::min<<"-"<<::max<<"之间"<<endl;
			cin>>::ans;
			}
			else{
				cout<<"超出了范围，请重新输入"<<endl;
				cin>>::ans;
				ne();
			}
		}
		for(;::ans<randomn;){
			if(::ans>=0){
				if(::ans>::min){
			::min = ::ans;
				}
			cout<<"小了，"<<::min<<"-"<<::max<<"之间"<<endl;
			cin>>::ans;
			}
			else{
				cout<<"超出了范围，请重新输入"<<endl;
				cin>>::ans;
				ne();
			}
		}
	}
int main(){
	cout<<"猜数字游戏即将开始，请做好准备"<<endl;
	cout<<"答题时禁止输入除整数-2^63~2^63-1以外的其他字符以及字符串，后果自负"<<endl;
	Sleep(3000);//休息3秒
	srand((unsigned)time(NULL));
	::randomn=rand()%101;//生成随机数字
	cout<<"随机数字已生成，范围0-100"<<endl;
	cin>>::ans;
	for(;::ans!=::randomn;){
		ne();
	}
			cout<<"猜中了！恭喜(分数+1)"<<endl;
			score += 1;
	system("pause");
	return 0;
}
