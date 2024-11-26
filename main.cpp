#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        if(arr[i]%2!=0)
        {
            cout << 0 << endl ;
            return 0 ;
        }
    }
    int c = 0 ;
    int ans = 0;
    while(ans == 0 )
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]%2==0)
            {
                arr[i] = arr[i] / 2;
            }
            else
            {
                ans = 1 ;
                break ;
            }
        }
        c++;
    }
    cout << c - 1 << endl ;
    return 0;
}
