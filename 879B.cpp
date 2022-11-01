#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<long int> a;
    
    long int n=0, k=0, count=0;
    cin >> n >>k;
    for (int i=0; i< n;i++){
        long int temp=0;
        cin >> temp;
        a.push_back(temp);
    }
    long int temp=0, temp1=0;
    while (count != k){     
        temp = a.front();
        a.pop_front();
        temp1 = a.front();
        // cout << n << temp << endl;
        if (temp == n){
            cout << n;
            return 0;
        }
        // cout << temp<<endl;
        if (temp > temp1){
            count++;
            if (count ==k){
                cout << temp;
                return 0;
            }
            
            a.pop_front();
            a.push_back(temp1);
            a.push_front(temp);
        }
        else {
           a.push_back(temp);
           count =0; 
        }
    }
}