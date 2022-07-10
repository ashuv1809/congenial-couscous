#include<iostream>
using namespace std;


int main(){
int n,d=1;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=d;j++)
        { cout<<"*";
        }
         d+=2;
        cout<<endl;
    }
    
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


