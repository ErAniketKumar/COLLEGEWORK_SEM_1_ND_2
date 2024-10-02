#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n=120;
	int temp=n;
	
	while(temp>0)
	{
		int r=temp%10;
        if(r!=0)
        {
            if(n%r==0) 
            {
			c++;
		    }
        }
        
		
		temp/=10;
	}	
    cout<<c;
    return 0;
}
