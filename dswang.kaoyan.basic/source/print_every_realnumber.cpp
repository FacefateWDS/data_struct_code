//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is

/*
���ڴ���ʱ��Ӱ���ⲿʱ��
void BST_Insert(BstNode* &Node,BstNode* parent, int data)
�ٶԴ������Ĳ���Node���з���

NodeΪnullptr ��ʱӦ��ʹ��&���ţ���Ϊnullptr����ָ��һȷ���ռ䣬���޸ĺ����ڲ�����ʱ���ⲿ�Ĳ������޸ġ��������:return Node���ڽ���
Node��Ϊnullptr ��㶼��
*/
/*���������&���ܵ�������ߣ���Ҫ
string str1 = "jj";
string &str2 = str1;
*/

/*ֻ��ʾ��
//cin>>*str2;
char b = 'd';
//ǳ������ֻ�Ƿ����ݣ�����һ������
char c = b;
//������Ѿ͸������������,&ֻ�ܷŵ�����������
char &a = b;

b = 'c';
cout << a << endl;
cout << c << endl;
//cin>>str;
//cout<<every_real_num;
*/

#include<iostream>
#include<typeinfo>
#include<string>
#include<single_int.hpp>
#include<sstream>
using namespace std;
char signal;

void test_print_every_realnumber() {
    string str_num = "-83768107";
    if(str_num[0] == '-') {
        cout << '-';
        str_num[0] = ' ';
    }
    const char* nums = str_num.c_str();
    int num =  atoi(nums);
    printOutputD(num);
    // cout<<endl;
    /*
    	stringstream stream;
    	//�����ǿ��Բ���Ĭ��ֵ�ģ���Ϊ��������裬�������Ҫ���ƣ���ü��ϡ�
    	int test_num =0;
    	stream<<str_num;stream>>test_num;
    	cout<<test_num<<endl;
    */


    // return 0;
}
void print_one_Digit(int single_number) {
    if(single_number <= 9 && single_number >= 0)
        cout << single_number;
    else cout << "error" << endl;
}

bool judge_single_int(char num) {
    if(48 <= int(num) && int(num) <= 57)

        return true;

    return false;

}
void printOutputD(int num) {
    int front_nums = 0;
    if(num >= 10) {
        front_nums = num / 10;;
        printOutputD(front_nums);
    }
    int end_num =  num - front_nums * 10;

    if(judge_single_int(end_num));
    print_one_Digit(end_num);

//print_one_Digit(end_num);
}
