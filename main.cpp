#include <bits/stdc++.h>

using namespace std;
char Switch (char s)
{
    if (s=='G')
        return 'C' ;
    if(s=='C')
        return 'G';
    if(s=='T')
            return 'T';
}

int main()
{
    int n , rested=0 ;
    char c='T' ;
    cin>>n;

    int arr[n];

    for(int i=0 ;i<n ;i++)
        cin>>arr[i];

      rested=0;

    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]==3)
        {
          c=  Switch(c);
          continue ;
        }

        if(arr[i]==0)
            c='T';

        if(arr[i]==1 && (c=='G' || c=='T'))
        {
            c='C';
            continue ;
        }
        if(arr[i]==2 && (c=='C'||c=='T'))
        {
            c='G';
            continue;
        }

       rested++;
       c='T';
    }

    cout<< rested <<endl;



    return 0;
}
