#ifndef NGUOI_CHOI_H
#define NGUOI_CHOI_H

#include"csl.h"

class nguoi_choi
{
    public:
        nguoi_choi();
        virtual ~nguoi_choi();
        bool input();
        void action();
        void set_ki_tu_va_mau(char c , int a)
        {
            ki_tu = c;
            color = a;
        }
    private:
        int x;
        int y;
        char ki_tu;
        int color;
};

#endif // NGUOI_CHOI_H
