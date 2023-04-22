//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is
/*
<>是直接找系统的，而""先从当前目录，再到设定目录，再到系统目录
头文件里可以定义函数，但是不建议，有两种头文件声明摆放方式，一个是为了减少隐藏的依赖库，另一个是检验冲突
*/
#include<iostream>
#include "荷塘月色.txt"
using namespace std;

int main() {

    prin_article();

    return 0;
}
