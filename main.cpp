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
			cout<<"���ˣ�"<<::min<<"-"<<::max<<"֮��"<<endl;
			cin>>::ans;
			}
			else{
				cout<<"�����˷�Χ������������"<<endl;
				cin>>::ans;
				ne();
			}
		}
		for(;::ans<randomn;){
			if(::ans>=0){
				if(::ans>::min){
			::min = ::ans;
				}
			cout<<"С�ˣ�"<<::min<<"-"<<::max<<"֮��"<<endl;
			cin>>::ans;
			}
			else{
				cout<<"�����˷�Χ������������"<<endl;
				cin>>::ans;
				ne();
			}
		}
	}
int main(){
	cout<<"��������Ϸ������ʼ��������׼��"<<endl;
	cout<<"����ʱ��ֹ���������-2^63~2^63-1����������ַ��Լ��ַ���������Ը�"<<endl;
	Sleep(3000);//��Ϣ3��
	srand((unsigned)time(NULL));
	::randomn=rand()%101;//�����������
	cout<<"������������ɣ���Χ0-100"<<endl;
	cin>>::ans;
	for(;::ans!=::randomn;){
		ne();
	}
			cout<<"�����ˣ���ϲ(����+1)"<<endl;
			score += 1;
	system("pause");
	return 0;
}
