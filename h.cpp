#include <iostream>
// bool a[201];
using namespace std;
int main() {
    int n=0;
    cin >>n;
    for (int i =0; i<n;i++){
        int n_c =0;
        cin >> n_c;
        int marks[n_c];
        int temp=0;
        for (int j=0; j<n_c;j++){
            cin >> temp;
            marks[j] = temp;
        }
        for (int w=0;w<n_c;w++){
            char seq;
            int l_seq=0;
            cin >> l_seq;
            for (int j =0; j<l_seq; j++){
                cin >> seq;
                if (seq == 'U'){
                    marks[w]--;
                    if (marks[w] ==-1) marks[w] =9;
                }
                else{
                    marks[w]++;
                    if( marks[w] == 10) marks[w] = 0;
                }
            }       }    
        for (int y =0; y<n_c; y++){
            cout << marks[y] << " ";
        }}
  return 0;
}