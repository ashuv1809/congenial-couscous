#include<iostream>
using namespace std;

int main() {
    int N,b;
    int sum_even=0,sum_odd=0;
    cin>>N;
    while(N>0)
    {
        b=N%10;
        if(b%2==0)
        {
            sum_even=sum_even+b;
        }
        else
        {
            sum_odd=sum_odd+b;
        }
        N=N/10;
    }
    cout<<sum_even<<" "<<sum_odd;
	// Write your code here
	
}
