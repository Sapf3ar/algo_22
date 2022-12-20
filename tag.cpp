#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x, y, v;
    Point(double x,double y, double v) : x(x), y(y), v(v) {}
    
};

Point operator /(const Point &cat, double x){
    return Point(cat.x/x, cat.y/x, cat.v);
}

Point operator -(const Point& m, const Point& c){
    return Point(m.x -c.x, m.y-c.y,c.v);
}

Point operator *(const Point &cat, double x){
    return Point(cat.x*x, cat.y*x, cat.v);
}

double norm(const Point &cat){
    return sqrt(cat.x*cat.x + cat.y*cat.y);
}

double dist(const Point& m, const Point& c){
    return norm(Point(m.x-c.x, m.y-c.y, c.v));
}

Point get_current_cat_location(Point cat, Point mouse){
    Point diff(mouse.x-cat.x, mouse.y-cat.y, cat.v);
    diff = diff/norm(diff) * diff.v;
    // cout << diff.x << " after init" << diff.y << endl;
    // double len = length(diff);
    // cout << len << endl;

    // diff = diff / len; 
  
    return diff;
}

Point get_current_mouse_location(const Point &mouse){
    return Point(mouse.x, mouse.y-mouse.v, mouse.v);
}

int main(){
    Point mouse (0.0, 4.0, 0.0);
    Point cat (3.0, 0.0, 1.0);
    int t=0;
    
    Point mouse1 = mouse;
    Point cat1 = cat;
    while (true){      
        cout << "Cat now on: X (" << cat1.x << ") Y (" << cat1.y << ") \n";
        cout << "Mouse now on: X (" << mouse1.x << ") Y (" << mouse1.y << ") \n";
        cout << "Distance between cat and mouse " << dist(mouse1, cat1) << "\n";
        
        Point mouse1 = get_current_mouse_location(mouse1);
        cout << cat1.x << 'before loc ' << cat1.y << endl;
        Point cat1 = get_current_cat_location(cat1, mouse1);
        cout << cat1.x << ' after loc' << cat1.y << endl;
        t++;
        cout << "Time passed "<< t<< endl;
        mouse = mouse1;
        cat = cat1;
    }   
    }   