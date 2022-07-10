#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int j=1;
        int k=1;
        int l=1;
        while(j<=N-i)
        {
            cout<<" ";
            j++;
        }
        while(k<=i)
        {
            cout<<"*";
            k++;
        }
        while(l<=i-1)
        {
            cout<<"*";
            l++;
        }
            cout<<endl;
        i++;
        
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


