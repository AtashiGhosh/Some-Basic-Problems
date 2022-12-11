#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int sum=0, rem, num, temp;

    cin >> num;
    temp = num;

    while(temp!=0)
    {
        rem = temp%10 ;
        sum = sum + rem*rem*rem;
        temp = temp/10;
    }
    if(sum == num)
    {
        cout << "Armstrong Number"<< endl;
    }
    else {cout << "Not Armstrong"<< endl;}

    return 0;
}
