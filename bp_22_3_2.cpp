#include <iostream>
using namespace std;

bool check_point(int x, int y){
    if (x >=-2 && x <=2){
        if (y>=-1 && y <=1){
            if (x*x + y*y>1)
            {
                return true;
            }            
        }
    }
    return false;
}   
int main(){
    int x0=0, y0=0, correct_points=0, all_points=0;
  

    while (true)
    {   
        cin >> x0 >> y0;
        if (!cin.good()){
            break;
        }
        cout << check_point(x0, y0) << endl;
        if (check_point(x0, y0) ==1){
            cout << "correct" << endl;
            correct_points++;
            all_points++;

        }
        else{
            all_points++;
        }      
    }
    
    cout << "Point in rectangle outside circle: " << correct_points/all_points << endl;

}