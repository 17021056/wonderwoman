#include "csl.h"
#include "nguoi_choi.h"
#include "xet_win.h"
#include <iostream>
using namespace std;
int mang_X[21][26];
int mang_O[21][26];
bool ketthuc();
void reset()
{
    for(int i = 0 ; i<=20 ; i++)
        for(int j =0 ; j<= 25 ; j++)
        {
            mang_O[i][j] = 0;
            mang_X[i][j] = 0;
        }
}
void print_board()
{
    char c = 219;
    for(int i = 0 ; i <= 42 ; i++)
        for(int j = 0 ; j <= 119 ; j++)
        {
            if( i==0 || i == 42 )
            {
                gotoxy(j,i);
                cout << c;
            }
            else
            if(j == 0|| j == 1 || j == 29|| j == 30 )
            {
                gotoxy(j,i);
                cout << c;
            }
        }
        char a = 179;
        char b = 197;
        char d = 196;
    for( int i = 1 ;i <= 41 ; i++)
        for( int  j = 1 ; j <= 89 ; j++)
        {
            if( j % 4 == 0 )
            {
                if(i % 2 != 0)
                {
                    gotoxy(j+30,i);
                    cout << a;
                }
                else
                {
                   gotoxy(j+30,i);
                    cout << b;
                }
            }
            if( i % 2 == 0 && j % 4 != 0)
            {
                gotoxy(j+30,i);
                cout << d;
            }


        }

}
void run()
{
    nguoi_choi ng1, ng2;
    ng1.set_ki_tu_va_mau('X',3);
    ng2.set_ki_tu_va_mau('O',5);
    gotoxy(5,7);
    cout << "A or <-- : sang trai";
    gotoxy(5,9);
    cout << "D or --> : sang phai";
    gotoxy(5,11);
    cout << "S or     : xuong duoi";
    gotoxy(5,13);
    cout << "W or     : len tren";
    gotoxy(5,15);
    cout << "Space : danh";
    while(1)
    {
        setcolor(3);
        gotoxy(5,5);
        cout <<"Nguoi choi 1:";
        while(!ng1.input())
        {
            ng1.action();
        }
        if(WIN(mang_X))
        {
            gotoxy(12,20);
            cout << "X WIN";
            Sleep(1000);
            if(ketthuc()) return run();
            gotoxy(0,45);
            break;
        }
        gotoxy(5,5);
        setcolor(5);
        cout <<"Nguoi choi 2:";
        while(!ng2.input())
        {
            ng2.action();
        }
        if(WIN(mang_O))
        {
            gotoxy(12,20);
            cout << "O WIN";
            Sleep(1000);
            if(ketthuc()) return run();
            gotoxy(0,45);
            break;
        }

    }
}

int main()
{
    print_board();
    gotoxy(5,5);
    cout << "1. play";
    gotoxy(5,7);
    cout << "2. thoat";
    char key = getch();
    while(key != '1' && key != '2')
    {
        key =getch();
    }
    if(key == '1')
        run();
    return 0;

}
bool ketthuc()
{
    clrscr();
    setcolor(7);
    print_board();
    gotoxy(5,5);
    cout << "1. choi lai";
    gotoxy(5,7);
    cout << "2. thoat";
    char key = getch();
    while(key != '1' && key != '2')
    {
        key =getch();
    }
    reset();
    if(key == '1') return true;
    return false;
}
