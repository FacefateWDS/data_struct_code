//Copyright ds 2023
//License(MIT)
//Author:dswang
//This is

#include<stdio.h>
#include<iostream>
#include<ios>
#include<string>
using namespace std;

const int kLength = 8+10;
int array[kLength];

int main() {
    //std::ios::sync_with_stdio ();
    string s1,s2;
    cin>>s1>>s2;
    //不要用两个s,输入带空格的字符串，这样没有办法区分，cin也不能直接整体输入数组，因为内部有压缩机制。
    //scanf("%d,%d",&s1,&s2);//可以控制间隔符
    //printf("%s,%s",s1,s2);
    //cout<<s1<<'-'<<s2;
    //gets()
    //printf("%s-%s",s1,s2);
    //cin.tie(0);
    cout<<noskipws<<s1<<'-'<<<<s2;//noskipws只是不想略过前面的空白字符，并不能忽略中间的空格


     //stdin cin
  return 0;
}

