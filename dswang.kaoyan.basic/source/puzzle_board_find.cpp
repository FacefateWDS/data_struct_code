//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is

#include<iostream>
using namespace std;

int main() {
//�����������У���Ϊ��֪����η��䡣
//new ����Ҫ����
char puzzle_board[][4] = {{'w','d','s','c'},{'a','b','w','e'},{'b','d','w','a'},{'s','w','d','s'},{'e','a','s','b'}};

char* find_word = new char[3]{'w','d','s'};





delete [] puzzle_board;
delete [] find_word;
  return 0;
}
