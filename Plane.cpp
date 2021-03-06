//******************************************
//ACS: Just a head's up: This "Plane" code is not doing what I want it to do. I'm a little turned around,
//  especially with how to get the plane to have any vertical re-assignment of location.
//  Also, I don't know how to use virtual time to move the plane "automatically" down the road.
//  Also, I haven't made an array of Planes yet either because I'm working on the class itself.
//******************************************

#include "Plane.h"

Plane::Plane(){
    color = darkcyan;
    location.setX(XSTART);
    location.setY(YSTART);
}

void Plane::draw(Plotter& g){
    g.setColor(color);
    this->plot(g);
}

void Plane::erase(Plotter& g){
    g.setColor(white);
    this->plot(g);
}
void Plane::fly(){ //do I need Plotter& in here?
    location.setX(location.getX() + 3); //moves the plane to the right by 3 spots
    location.setY(location.getY() + 3); //moves the plane downwards by 3 spots
}

void Plane::plot(Plotter& g){
    Plane::fly();

    g.plot(location.getX(), location.getY(), SQUARE); //center
    g.plot(location.getX()-2, location.getY(), SQUARE);
    g.plot(location.getX()-1, location.getY(), SQUARE);
    g.plot(location.getX()+1, location.getY(), SQUARE);
    g.plot(location.getX()+2, location.getY(), SQUARE);
    g.plot(location.getX()+3, location.getY(), SQUARE);

    g.plot(location.getX(), location.getY()-1, SQUARE);
    g.plot(location.getX()-2, location.getY()-1, SQUARE);
    g.plot(location.getX()-1, location.getY()-1, SQUARE);
    g.plot(location.getX()+1, location.getY()-1, SQUARE);
    g.plot(location.getX()+2, location.getY()-1, SQUARE);
    g.plot(location.getX()+3, location.getY()-1, SQUARE);

    g.plot(location.getX(), location.getY()-2, SQUARE); //top wing
    g.plot(location.getX(), location.getY()-3, SQUARE);

    g.plot(location.getX(), location.getY()+1, SQUARE); //bottom wing
    g.plot(location.getX(), location.getY()+2, SQUARE);
}
