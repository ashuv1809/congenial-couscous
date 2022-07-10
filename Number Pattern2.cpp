#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
     int d=0;
    int e;
    for(int i=1;i<=n;i++)
    { e=i;
       for(int j=1;j<=n-i;j++)
       {
           cout<<" ";
       }
    for(int d=0;d<i;d++)
    {
        cout<<e;
        e++;
        
    }
        
        
       
        cout<<endl;
        
    }
        
    

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


