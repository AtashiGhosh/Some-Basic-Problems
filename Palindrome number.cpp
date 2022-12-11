#include<iostream>
using namespace std;

int main()
{
    int sum=0, rem, num, temp;

    cin >> num;
    temp = num;

    while(temp!=0)
    {
        rem = temp%10 ;
        sum = sum*10 + rem;
        temp = temp/10;
    }
    if(sum == num)
    {
        cout << "Palindrome"<< endl;
    }
    else {cout << "Not Palindrome"<< endl;}

    return 0;
}
