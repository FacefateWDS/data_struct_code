//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is only a small puzzle_board problem's solution which only considers up,down,left,right .

#include<iostream>
#include<find_direction.hpp>
using namespace std;


int main() {
//输入后面[]必须有，因为不知道如何分配。
//new 的需要具体
    char puzzle_board[][4] = {{'w', 'd', 's', 'c'}, {'a', 'b', 'w', 'e'}, {'b', 'd', 'w', 'a'}, {'s', 'w', 'd', 's'}, {'e', 'a', 's', 'b'}};

    char* find_word = new char[3] {'w', 'd', 's'};

    //cout<<puzzle_board[0][1]<<puzzle_board[0][2]<<endl;
    //cout<<endl;



    int find_word_size = 3;

    int row = 5, col = 4;

    for(int r_loc = 0 ; r_loc < row; r_loc++) {

        for(int c_loc = 0; c_loc < col; c_loc++) {
            //在该点漫步几个特定方向，应该给相应的限制条件在某个函数中
            int r_copy = r_loc, c_copy = c_loc;
            walk_direction(&r_copy, &c_copy, find_word, puzzle_board);
        }
    }
    delete [] puzzle_board;
    delete [] find_word;
    return 0;
}
