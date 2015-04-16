#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED

#include "Point.h"
#include "plotter.h"
#include <cstdlib>

using namespace std;

const int XSTART = 30;  //starting location for object
const int YSTART = 30;

class Plane{
    private:
        Point location;
        ink color;
        void plot(Plotter&);

    public:
        Plane();
        void draw(Plotter&);
        void erase(Plotter&);
        void fly(); //do I need Plotter& in here?

};


#endif // PLANE_H_INCLUDED
