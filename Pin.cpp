#include <iostream>
#include <cmath>
#include "my_lib.hpp"
#include <fstream>


using namespace std;

double max(double lhs, double rhs) {
    return (lhs > rhs) ? lhs : rhs;
}

double sign(double num) {
    if (num > 0) {
        return 1.0;
    }
    if (num < 0) {
        return -1.0;
    }
    return 0;
}

struct Pin {
    const double dt = 0.1, g = 9.8;
    double m, k, mu;
    double x_stable, x, v = 0, f = 0, a = 0, y=0;

    // RDec2d pin_point(x, y);

    double t = 0;
    Pin(double m,double k, double mu, double x_stable, double x, double y) : m(m), k(k), mu(mu), x_stable(x_stable), x(x), y(y) {}
};



bool Pin_update(Pin& model) {

    
    //model.x_stable = model.x + 1;
    model.t += model.dt;
    model.f = model.k * (model.x_stable - model.x) - sign(model.v) * model.mu * model.m * model.g;
    model.a = model.f / model.m;
    model.v += model.a * model.dt;
    if (std::abs(model.v * model.dt - model.x)< 0.001){
        return false;
    }
    else{

    
    model.x += model.v * model.dt;
    return true;}

}

double print_model(Pin model) {

    return round(model.x/10);}

void model_runtime(Pin cm) {
    double state;
    ofstream myfile;
    myfile.open ("example.txt");
    // myfile.open (filename);
    while (cm.t <= 100) {
        for (int i = 0; i < 100; ++i) {
            bool proceed = Pin_update(cm);
            if (!proceed){cm.t = 101; break;}
            myfile <<  cm.t <<   " " << cm.x <<  " " << cm.y << " " << cm.v << " " << cm.a << endl;
        }       
    }
    myfile.close();
}

int main(int argc, char **argv) {
    double m, k, mu, x_stable, x, y;
    cin >> m >>  k >> mu >> x_stable >> x >> y;
 
    Pin model(m, k, mu, x_stable, x, y);
    
    model_runtime(model); 
    return 0;
}