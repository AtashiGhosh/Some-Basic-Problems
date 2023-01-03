#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[ 30] = "sumona ";
    char s2[ ] = "ghosh";





    int i = 0,j=0, len = 0;
    while(s1[i] != '\0'){
        i++;
        len++;
    }
    while(s2[j] != '\0'){
        s1[len+j]=s2[j];


    }

    cout<<s1;
    return 0;
}
