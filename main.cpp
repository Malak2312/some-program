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
			cout<<"��Ч����"<<endl;
		}
	}
}
void ne(){
	for(;::ans>::randomn;){
			if(::ans<=100){
				if(::ans<::max){
					::max = ::ans;
				}
			cout<<"���ˣ�"<<::min<<"-"<<::max<<"֮��"<<endl;
				::ans = s2i();
			}
			else{
				cout<<"�����˷�Χ������������"<<endl;
				::ans = s2i();
				ne();
			}
		}
		for(;::ans<randomn;){
			if(::ans>=0){
				if(::ans>::min){
			::min = ::ans;
				}
				cout<<"С�ˣ�"<<::min<<"-"<<::max<<"֮��"<<endl;
				::ans = s2i();
			}
			else{
				cout<<"�����˷�Χ������������"<<endl;
				::ans = s2i();
				ne();
			}
		}
	}
int main(){
	cout<<"��������Ϸ������ʼ��������׼��"<<endl;
	cout<<"����ʱ����Ѵ������������Զ���ȡ"<<endl;
	Sleep(3000);//��Ϣ3��
	srand((unsigned)time(NULL));
	::randomn=rand()%101;//�����������
	cout<<"������������ɣ���Χ0-100"<<endl;
	::ans = s2i();
	for(;::ans!=::randomn;){
		ne();
	}
	cout<<"�����ˣ���ϲ(����+1)"<<endl;
	::score += 1;
	cout<<"���ķ���Ϊ"<<::score<<"��";
	cout<<"���Ƿ�Ҫ����?(Y/N)"<<endl;
	zzz();
}
void jmp(){
	::ans = 0;
	::randomn = 0; 
	::max= 100;
	::min = 0;
	main();
}
