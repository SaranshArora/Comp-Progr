#include <bits/stdc++.h>
using namespace std;
string removing(string s){
	int slen=s.length();
	for(int i=1;i<slen;i++){
		if(s[i]=='m'&&s[i-1]=='s')
		{
			s.erase(i-1,1);
		}
		else if(s[i]=='s'&&s[i-1]=='m')
		{
			s.erase(i,1);
		}
	}
	return s;
}

int main() {
	 int t;
	 cin>>t;
	 while(t--){
	string s;
	cin>>s;
    s=removing(s);
   int ns= count(s.begin(),s.end(),'s');
   int nm=count(s.begin(),s.end(),'m');
   if(ns>nm)
	   cout<<"snakes"<<"\n";
   else if(nm>ns)
   {
	   cout<<"mongooses"<<"\n";

   }
   else
	   cout<<"tie"<<"\n";


	 }
	return 0;
}
