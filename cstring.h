#ifndef __CSTRING_H__
#define __CSTRING_H__
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
long long main1(){
char a[501];
long long cnt_int=0;
//cnt_int 用于存放字符串中的数字.
cin.getline(a,501);
for(int i=0;a[i]!='\0';++i) //当a数组元素不为结束符时.遍历字符串a.
{
if(a[i]>='0'&& a[i]<='9') //如果是数字.
{
cnt_int*=10;
cnt_int+=a[i]-'0'; //数字字符的ascii-字符'0'的ascii码就等于该数字.
}
}
long long k = cnt_int; //输出数字.
return k;
}
#endif