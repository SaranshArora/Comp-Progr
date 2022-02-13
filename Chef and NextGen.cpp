#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(a*b > x*y)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
        
        
