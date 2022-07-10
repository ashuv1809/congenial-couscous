#include<iostream>
using namespace std;


int main(){
int N;
    int i=1;
cin>>N;
    while(i<=N)
    {
        int j=1;
        while(j<=N-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i)
        {
            cout<<k;
            k++;
        }
        i++;
        cout<<endl;
    }
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


