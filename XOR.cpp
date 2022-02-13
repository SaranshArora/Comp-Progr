#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int size; string str;
	    cin>>size;
	    cin>>str;
	    int n=0;
	    int m=0;
	    for(int i=0; i<size; i++){
	        if(str[i]=='0')
	        {
	            n++;
	        }
	        else{
	            m++; 
	        }
	    }
	    if(size%2==0){
	        if(n==m)
	        cout<<"YES"<<endl;
	        else if (n%2==0 && m%2==0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"YES"<<endl;
	    
	}
	
	return 0;
}
