#include<iostream>
using namespace std;
int sod(int n ){
    for (int i = 0; i < 5; i++)
    {
     if (n==0)
    {
        return 1;
    }
   int p = n*sod(n-1);
    return p;
    }
}
int main(int argc, char const *argv[])
{int a ;
    cout<<"Enter a number :";
    cin>>a;
   cout<<sod(a);
    return 0;
}
