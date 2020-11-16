#ifndef __STR2INT_H__
#define __STR2INT_H__
#include <iostream>
using namespace std;
int s2i(){
char a[501];
int cnt_int=0; //cnt_int 用于存放字符串中的数字.
cin.getline(a,501);
for(int i=0;a[i]!='\0';++i) //当a数组元素不为结束符时.遍历字符串a.
{
if(a[i]>='0'&& a[i]<='9') //如果是数字.
{
cnt_int*=10;
cnt_int+=a[i]-'0'; //数字字符的ascii-字符'0'的ascii码就等于该数字.
}
}
int k = cnt_int; //输出数字.
return k;
}
#endif
