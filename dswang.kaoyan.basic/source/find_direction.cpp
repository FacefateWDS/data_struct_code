//Copyright ds 2023
//Lisence(MIT)
//Author:dswang
//This is

#include<iostream>
#include<find_direction.hpp>
using namespace std;

void show_direction(int *, int*, int);

int limit_row_end = 4;
int limit_row_begin = 0;
int limit_col_end = 3;
int limit_col_begin = 0;


//char find_word[3];
//char **puzzle_board = new char[5][4];

//enum  TwoDimensionDirection {kUp = 2, kRight = 1, kMiddle = 0, kLeft = -1, kDown = -2} ;
int direction_array [4] = {2, 1, -1, -2};
void walk_direction() {
//自己添加输入形参
//要有限制区域，条件
//要还原

    //for(TwoDimensionDirection go_direction : TwoDimensionDirection) {
    // TODO (86155#1#04/19/23): //myself in the future,remerber to add specific part
    //}
}


void walk_direction(int* row_addr, int* col_addr, char find_word[3], char puzzle_board[5][4]) {

    //find_word = new char[3];

    int store_row = *row_addr;//store_存最开始的,row_addr是活动的，row,col用来记录，输出，省字符
    int store_col = *col_addr;
    int row = store_row;
    int col = store_col;

    for(int small_to_big = 0; small_to_big < 4; small_to_big++) {
        *row_addr = store_row;
        *col_addr = store_col;
        row = store_row;
        col = store_col;
        int go = direction_array[small_to_big];
        // TODO (86155#1#04/19/23): //myself in the future,remerber to add specific parts.
        bool  if_equal = true;
        cout << if_equal << "test3" << endl;
        cout << "出发点:坐标[" << store_row << ',' << store_col << ']' << endl;
        for(int letter_loc = 0; letter_loc < 3; letter_loc++) {


            row = *row_addr;
            col = *col_addr;

            if(row < limit_row_begin || row > limit_row_end || col > limit_col_end || col < limit_col_begin) {

                if_equal = false;
                break;
            }

            if(find_word[letter_loc] != puzzle_board[row][col]) {
                cout << endl;
                cout << "row:  " << row << "          " << "col:        " << col << endl;
                cout << endl;
                if_equal = false;
                cout << if_equal << "test2" << endl;
                break;
            }
            //先剪枝干，比较好点。走两步已经够它用的了
            if(letter_loc < 2) {
                show_direction(row_addr, col_addr, go);
            }
        }

        cout << if_equal << "test1" << endl;

        if(if_equal) {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "起点:[" << store_row << ',' << store_col << ']' << "到终点[" << row << ',' << col << ']' << endl;

            cout << "-----------------------------------!!!congratulation!!!-----------------------------------" << endl;
            cout << "-----------------------------------!!!congratulation!!!-----------------------------------" << endl;
            cout << "-----------------------------------!!!congratulation!!!-----------------------------------" << endl;
            cout << "-----------------------------------!!!congratulation!!!-----------------------------------" << endl;
            cout << "-----------------------------------!!!congratulation!!!-----------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
        }
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //int row = store_row;
    //int col = store_col;

    //最好把带地址的复原一下。
    *row_addr = store_row;
    *col_addr = store_col;
}

void show_direction(int* add_row, int* add_col, int go) {
    int row = *add_row, col = *add_col;
    switch(go) {
    case 2:
        row = row - 1, col = col;

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;
        cout << "向上走1:坐标[" << row << ',' << col << ']' << endl;
        break;
    case 1:

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;

        row = row, col = col + 1;
        cout << "向右走1:坐标[" << row << ',' << col << ']' << endl;
        break;

    case 0:
        row = row, col = col;

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;

        cout << "不动:坐标[" << row << ',' << col << ']' << endl;
        break;

    case -1:
        row = row, col = col - 1;

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;

        cout << "向左走1:坐标[" << row << ',' << col << ']' << endl;
        break;
    case -2:
        row = row + 1, col = col;

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;

        cout << "向下走1:坐标[" << row << ',' << col << ']' << endl;
        break;
    default:

        //限制条件
        if(row < limit_row_begin)
            break;
        if(row > limit_row_end)
            break;
        if(col > limit_col_end)
            break;
        if(col < limit_col_begin)
            break;

        cout << "迷航:请指示" << endl;
        break;
    }
    *add_row = row;
    *add_col = col;
}
