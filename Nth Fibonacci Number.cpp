#include<bits/stdc++.h>
using namespace std;
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;

        if(n == 1 || n==2) cout<<1;
        else{
                int a = 1, b = 1;
                for(int i=3; i<=n; i++){
                        int c = a+b;
                        a = b;
                        b = c;
                }

                cout<<b;
        }

        return 0;
}
