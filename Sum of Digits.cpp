#include<iostream>
using namespace std;

int main()
{
    int sum=0, rem, temp;

    cin >> temp;

    while(temp!=0)
    {
        rem = temp%10 ;
        sum += rem;
        temp = temp/10;
    }
    cout << sum<< endl;
    return 0;
}
