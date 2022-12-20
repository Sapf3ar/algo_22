#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x){
    if (x == 0){
        return 1;
    }
    else if (x ==1){
        return 1;
    }
    else{
        int fact=1;
        for (int i=1; i<=x; i++){
            fact*=i;
        }
        return fact;

    }

}
double power(double x, int pow){
    double res = x;
    if (pow == 0){
        return 1;
    }
    for (int i = 1; i<=pow; i++){
        res *= x;
    }
    return res;
}
int main(){
 
    for (double d_x=0.1; d_x<=1.0; d_x+=0.05){
        double all_sum =0;
        int i=0;
        double curr_el;
        double prev_sum;
        while (true)
        {
            curr_el = pow(2*d_x, i)/(factorial(i));
            // cout << curr_el << ' ';
            all_sum += curr_el;
            
            if (i ==0){
                prev_sum = curr_el;
            }
            else{
                if (std::abs(curr_el - prev_sum) < 0.0001 && i>3){
                    break;
                }
                else {
                    prev_sum = curr_el;
                }
            }
            // cout<<  " " << prev_sum  << " " << i << endl;

            
            i++;
        }
        cout << "current x value: " << d_x << "  " << "sum for current x: " << all_sum << endl;
        
            
    }
}