#include <iostream>
#include<time.h>
clock_t startTime;
    clock_t endTime;
using namespace std;
long long factit (long long n)
{

    long long  f=1;
    for (long long i=1;i<=n;i++)
        f*=i;

    return f ;
}
long long factrec(long long  n )
{

    if (n==1)
         return 1 ;

    return n*factrec(n-1);
}

int main()
{
    long long n ;
    cin>>n;

    startTime=clock();
    cout<<factit(n)<<endl;
    endTime=clock();
    //factrec(n);

    long double t =  (((double)endTime - startTime)/ CLOCKS_PER_SEC);
    t=t*1000000.000;
    cout<<"Execution Time: "<<t<<" microseconds"<<endl;

}
