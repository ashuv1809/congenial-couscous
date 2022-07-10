#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int i=1;
    int j;
    while(i<=N)
    {
        j=1;
        char ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        
        i++;
    }
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}

