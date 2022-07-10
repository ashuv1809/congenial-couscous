#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int i=1;
     int b=N;
    while(i<=N)
    {
       
        int j=1;
        while(j<=N-i+1)
        {
            cout<<b;
            j++;
        }
        i++;
        cout<<endl;
        b--;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


