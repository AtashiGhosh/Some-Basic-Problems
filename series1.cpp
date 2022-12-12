#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;

    for(int i = 1; i<= n; i++)
    {
        sum += i;
    }
    cout<< "1" <<"+"<<"2"<<"+"<<"3"<<"+"<<"........"<<"+"<<"N"<<"="<<sum<<endl;

    return 0;
}
