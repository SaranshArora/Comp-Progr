#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, Cwon=0 , Nwon=0 , Draw=0;
	    string str;
	    cin >> x >> str;
	    for (int i = 0; i < str.length(); i++){
	        if (str[i] == 'C')
	            Cwon++;
	        else if (str[i] == 'N')
	            Nwon++;
	       else
	        Draw++;
	    }
	    if (Cwon > Nwon){
	        cout << 60*x << endl;
	    }
	    else if (Cwon < Nwon) {
	        cout << 40*x << endl;
	    }
	    else
	        cout << 55*x << endl;
	    
	}
	return 0; 
}
