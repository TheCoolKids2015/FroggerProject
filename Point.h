//Adryann's ugly and simple version of Point 

#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point();
        void setX(int);
        void setY(int);
        int getX();
        int getY();
};

#endif // POINT_H_INCLUDED
