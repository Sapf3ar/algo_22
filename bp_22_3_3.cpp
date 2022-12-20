#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string x;

    cin >> x;
    for (int i=2; i< x.length(); ++i){

        if (x[i-2] != '.' && x[i-1] !='.' & x[i]!='.'){
            set <char> A;

            A.insert(x[i-2]);
            A.insert(x[i-1]);
            A.insert(x[i]);
            if (A.size() == 3){
                cout << "YES";
                break;
            }
        }
    }
    cout << "NO" << endl; 
}