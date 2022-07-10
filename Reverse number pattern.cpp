#include<iostream>
using namespace std;


int main(){
    int N;
    int i,j,b;
    i=1;
    cin>>N;
    while(i<=N)
    {
        j=1;
        b=i;
        while(j<=i)
        {
            cout<<b;
            b--;
            j++;
        }
        cout<<endl;
        i++;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


