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
//�����Ͷ��� int[] name����


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
    int count_num = sizeof(all_array) / sizeof(all_array[0]);��᷵��8��
    ����int * all_array��sizeof(all_array)��4����8�����ݲ���ϵͳ��ͬ
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
    cout<<"time = "<<time<<" s"<<endl;  //���ʱ�䣨��λ����
    */

    //return 0;
}
