//Copyright ds 2023
//License(MIT)
//Author:dswang
//This is my designed bubble_sort


//带变化的，没法在初始化的时候赋值，举例，形参，或者全局变量。
//也就是未赋值的时候，赋值

#include<stdio.h>
#include<iostream>
#include<ios>
#include <sort.hpp>
//#include<vector>

using namespace std;

const int kLength = 8 + 10;
int account, sorted_count, swap_count;
int array_sort[kLength];



/*这个不能用，设计的人，应该考虑的更灵活些
void swap(vector<int>* deal ,int fro,int beh){
    int middle = *(deal+fro);
    deal+fro = *(deal+beh);
    deal+beh = middle;
}*/

void swap(int* deal, int fro, int beh) {
    int middle = *(deal + fro);
    deal[fro] = *(deal + beh);
    // deal+fro = *(deal+beh);          !这种是前一项设计c++时候就规定的，前面不能是表达式
    deal[beh] = middle;
    //deal+beh = middle;
}
int* bubble_sort(int* array_sort, int account) {
    std::ios::sync_with_stdio(false);
    /*演化1
    int account;
    cin>>account;
    int *array_sort[kLength] = &arrays;
    cin>>array_sort;
    int swap_sum =0;
    */
    //int account;
    //std::cin>>account;

    //vector<int>array_sort ;

    /*
    while(cin>>num){
        array_sort.push_back(num);
        if(cin.get()=='\n')
            break;
    }
    */
    /*
        for(int location = 0;location<account;location++){
            cin>>array_sort[location];
        }
    */
    int swap_sum = 0;
    //account = array_sort.size();
    for(int sorted_count = 0; sorted_count < account - 1; sorted_count++) {
        for(int swap_count = 0; swap_count < account - 1 - sorted_count; swap_count++) {
            if(array_sort[swap_count] > array_sort[swap_count + 1])
                swap(array_sort, swap_count, swap_count + 1);
        }
        swap_sum += account - sorted_count - 1;
    }

    return array_sort;

    /* 输出文件
        cout<<"排好的正序:";
        for(int condition = 0;condition < account;condition++){
            if(condition!=account-1)
                cout<<array_sort[condition]<<' ';
            else cout<<array_sort[condition]<<endl;//尽量简化转化过程
        }
    */



//    cout<<"排列的总次数为"<<swap_sum;

    // return 0;
}
