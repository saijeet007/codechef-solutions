#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l,b;
	    cin>>l>>b;
	    
	    int ll=0,lb=0;
	    for(int i=0;;i++)
	    {
	        int k = (i+1)%2;
	        if(k == 1)
	        {
	            
	            ll+= i+1;
	            if(ll>l)
	            {
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else
	        {
	            lb+=i+1;
	            if(lb>b)
	            {
	                cout<<"Limak"<<endl;
	                break;
	            }
	            
	        }
	    }
	}
	return 0;
}
