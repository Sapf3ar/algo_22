#include <iostream>
#include <cmath>
using namespace std;
void func(){
    int n=0, curr_time=0;
    int arriv[101];
    int dep[101];
    int del[101];
    for (int i =0; i<n; i++){
        int temp1=0,temp2=0;
        cin >>temp1 >>temp2;
        arriv[i] = temp1;
        dep[i] = temp2;

    }
    for (int i =0; i<n; i++){
        int temp=0;
        cin >> temp;
        del[i] = temp;
        cout << temp;
    }
    curr_time += (arriv[0] + del[0]);
    for (int i =0; i< n; i++){
        // del_at_st = del[i];
        if (ceil((curr_time - dep[i])/2) +curr_time > dep[i]){
            curr_time += ceil((curr_time - dep[i])/2);
        }
        else{
            curr_time += dep[i];
        }
        
    }
    cout << curr_time;
    cout << endl;

}
int main(){
    int t= 0;
    cin >> t;
    for (int j =0; j < t; j++){
        func();
    }
}