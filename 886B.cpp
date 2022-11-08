#include <iostream>
#include <set>
using namespace std;
int main(){
    int n=0, am=0;
    set<int> a1;
    set<int>a2;
    cin >> n;
    int a[200000];
    int temp=0;
    for (int i=0 ;i<n;i++){
        cin >> temp;
        a1.insert(temp);  
        a[i] = temp;  
    }
    am = a1.size();
    for (int i=n-1; i>-1; i--){
        a2.insert(a[i]);
        if (a2.size() == am){
            cout << a[i];
            return 0;
        }
    }

}




