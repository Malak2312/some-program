#ifndef __CSTRING_H__
#define __CSTRING_H__
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
long long main1(){
char a[501];
long long cnt_int=0;
//cnt_int ���ڴ���ַ����е�����.
cin.getline(a,501);
for(int i=0;a[i]!='\0';++i) //��a����Ԫ�ز�Ϊ������ʱ.�����ַ���a.
{
if(a[i]>='0'&& a[i]<='9') //���������.
{
cnt_int*=10;
cnt_int+=a[i]-'0'; //�����ַ���ascii-�ַ�'0'��ascii��͵��ڸ�����.
}
}
long long k = cnt_int; //�������.
return k;
}
#endif