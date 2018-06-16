#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int inX, int inY): x{inX}, y{inY} {} //ctor
        int getX() {return x;}
        int getY() {return y;}
        void setX(int input) {x = input;}
        void setY(int input) {y = input;}
    protected:

    private:
        int x;
        int y;
};

#endif // POINT_H
