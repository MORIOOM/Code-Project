#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m;
	    cin>>m;
	    if(m==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(m%3==0){
	        cout<<0<<endl;
	    }
	    else
	    {
	       int r=(m/3)+1;
	       int r1=r*3;
	       cout<<r1-m<<endl;
	    }
	}

}

