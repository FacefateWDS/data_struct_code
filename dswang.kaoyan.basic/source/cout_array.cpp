//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is

#include<iostream>
#include <sort.hpp>
using namespace std;

void cout_one_dimension_array(int* array_sort, int account) {
    cout << "排好的正序:";
    for(int condition = 0; condition < account; condition++) {
        if(condition != account - 1)
            cout << array_sort[condition] << ' ';
        else cout << array_sort[condition] << endl; //尽量简化转化过程
    }
}
