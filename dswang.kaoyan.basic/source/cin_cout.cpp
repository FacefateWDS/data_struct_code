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
    //��Ҫ������s,������ո���ַ���������û�а취���֣�cinҲ����ֱ�������������飬��Ϊ�ڲ���ѹ�����ơ�
    //scanf("%d,%d",&s1,&s2);//���Կ��Ƽ����
    //printf("%s,%s",s1,s2);
    //cout<<s1<<'-'<<s2;
    //gets()
    //printf("%s-%s",s1,s2);
    //cin.tie(0);
    cout<<noskipws<<s1<<'-'<<<<s2;//noskipwsֻ�ǲ����Թ�ǰ��Ŀհ��ַ��������ܺ����м�Ŀո�


     //stdin cin
  return 0;
}

