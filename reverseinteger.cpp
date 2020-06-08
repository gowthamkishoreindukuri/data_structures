#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long int d;
	cin>>t;
	while(t--){
	    long long int n;
	    d=0;
	    cin>>n;
	    int i=0;
	    while(n!=0){
	        d=n%10;
	        if(d!=0 && i==0){
	            cout<<d;
	            i++;
	        }
	        else if(d!=0 && i!=0){
	            cout<<d;
	        }
	        else if(d==0 && i!=0){
	            cout<<d;
	        }
	        n=n/10;
	    }
	    cout<<"\n";
	}
	return 0;
}
