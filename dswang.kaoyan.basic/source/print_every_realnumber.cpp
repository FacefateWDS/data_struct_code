//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is

/*
对于传递时，影响外部时。
void BST_Insert(BstNode* &Node,BstNode* parent, int data)
①对传进来的参数Node进行分类

Node为nullptr 这时应该使用&符号，因为nullptr并不指向一确定空间，当修改函数内部的类时，外部的并不会修改。解决方法:return Node用于接受
Node不为nullptr 随便都行
*/
/*这是深拷贝，&不能单独放左边，需要
string str1 = "jj";
string &str2 = str1;
*/

/*只是示例
//cin>>*str2;
char b = 'd';
//浅拷贝，只是放内容，不是一个篮子
char c = b;
//深拷贝，把就给篮子起个别名,&只能放到左边是深拷贝。
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
    	//这种是可以不加默认值的，因为是随机赋予，但是如果要限制，最好加上。
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
