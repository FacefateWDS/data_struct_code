//Copyright ds 2023
//License(MIT)
//Author:dswang
//This is my designed select_k
#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include <sort.hpp>
#include<windows.h>

using namespace std;
//声明和定义 int[] name不行


void select_k(int *) {


    /*
    LARGE_INTEGER t1,t2,tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    double time = 0;
    */



    /*
    char test_str[] = "kjaskff";
    cout<<strlen(test_str)<<endl;
    char test_str1[] = {'f','s'};
    cout<<strlen(test_str1);
    */
    /*
    int all_array[] = {8, 9, 4, 6, 8, 1, 0, 7};
    int count_num = sizeof(all_array) / sizeof(all_array[0]);这会返回8，
    而用int * all_array和sizeof(all_array)是4或者8，根据操作系统不同
    */

    int  all_array[] = {8, 9, 4, 6, 8, 1, 0, 7};
    int count_num = sizeof(all_array) / sizeof(all_array[0]);
    int* all_sort_array = bubble_sort(all_array, count_num);
    cout_one_dimension_array(all_sort_array, count_num);

//cout<<sizeof(all_array)/sizeof(all_array[0]);
//int array_length = sizeof(all_array)/sizeof(all_array[0]);
//    int select_k = count_num / 2;
    delete[] all_array;

    /*
    QueryPerformanceCounter(&t2);
    time=(double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart;
    cout<<"time = "<<time<<" s"<<endl;  //输出时间（单位：ｓ）
    */

    //return 0;
}
