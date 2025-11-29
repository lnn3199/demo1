#include<iostream>
using namespace std;

long long factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
long long factorialSum(int n){
    if(n == 1)
        return 1;
    return factorial(n)+factorialSum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorialSum(n);
    return 0;
}