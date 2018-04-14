#include "xet_win.h"

bool ngang(int mang[21][26],int row, int col)
{
    int x = mang[row][col];
    if( x == mang[row][col+1]&& x == mang[row][col+2] && x == mang[row][col+3] && x == mang[row][col+4])
            return true;
    return false;
}
bool doc(int mang[21][26], int row , int col)
{
     int x = mang[row][col];
     if(x == mang[row+1][col]&& x == mang[row+2][col] && x == mang[row+3][col] && x == mang[row+4][col])
            return true;
    return false;
}
bool cheo_phai(int mang[21][26], int row , int col)
{
    int x = mang[row][col];
    if(x == mang[row+1][col+1] && x == mang[row+2][col+2] && x == mang[row+3][col+3] && x == mang[row+4][col+4])
            return true;
    return false;
}
bool cheo_trai(int mang[21][26], int row , int col)
{
    int x = mang[row][col];
    if(x == mang[row+1][col-1] && x == mang[row+2][col-2] && x == mang[row+3][col-3] && x == mang[row+4][col-4])
            return true;
    return false;
}
bool WIN(int mang[21][26])
{
    for(int row = 0 ; row <= 20 ; row++)
        for(int  col = 0 ; col <= 25 ; col ++ )
        {
           if(mang[row][col] == 1 || mang[row][col] == 2)
           {
               if(ngang(mang,row,col)) return true;
               if(doc(mang , row, col)) return true;
               if(cheo_phai(mang , row, col)) return true;
               if(cheo_trai(mang, row, col))   return true;
           }
        }
    return false;

}
