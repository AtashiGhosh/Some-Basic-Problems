#include<iostream>
using namespace std;

int main()
{
    int n, count=0;

    cin>> n;
    for(int i =2; i < n; i++)
    {
        if(n % 2 == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)  {cout << "PRIME" << endl; }
    else    {cout << "NOT PRIME" << endl;}

    return 0;
}
