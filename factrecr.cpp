#include<iostream>
using namespace std;
int sod(int n ){
    if (n==0)
    {
        return 1;
    }
    return n*sod(n-1) ;
}
int main(int argc, char const *argv[])
{int a ;
    cout<<"Enter a number :";
    cin>>a;
   cout<<sod(a);
    return 0;
}
