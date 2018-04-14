#include "nguoi_choi.h"

extern int mang_X[21][26];
extern int mang_O[21][26];

nguoi_choi::nguoi_choi()
{
    x = 72;
    y = 21;
}

nguoi_choi::~nguoi_choi()
{
    //dtor
}
bool nguoi_choi::input()
{
    if(kbhit())
    {
        char key = getch();
        if ((key=='a' || key=='A' || int (key==75))&& x > 32 ) x-=4; else
        if ((key=='d' || key=='D' || int (key==77) ) && x < 136) x+=4; else
        if ((key=='w' || key=='W' || int (key==72)) && y > 1) y-=2; else
        if ((key=='s' || key=='S' || int (key==80)) && y < 41 ) y+=2;
        if (key == 32)
        {
            if(mang_X[(y-1)/2][(x-32)/4] != 1 && mang_O[(y-1)/2][(x-32)/4] !=1 &&
                mang_X[(y-1)/2][(x-32)/4] != 2 && mang_O[(y-1)/2][(x-32)/4] !=2 )
                {
                    setcolor(color%15);
                    cout<<ki_tu;
                    if(ki_tu =='X')
                    {
                        mang_X[(y-1)/2][(x-32)/4] = 1;
                    }
                    else
                    {
                        mang_O[(y-1)/2][(x-32)/4] = 2;
                    }
                    gotoxy(5,20);
                    cout << "        ";
                    return true;
                }
            else
            {
                gotoxy(5,20);
                cout << "bi trung";
            }

        }
    }
    return false;
}
void nguoi_choi::action()
{
    gotoxy(x,y);
}
