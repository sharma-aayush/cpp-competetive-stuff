#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, j;
    cin >> n;
    string in[n];
    for(i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    if(n < 3)
        cout << "0";
    int counter = 0;
    for(i = 1; i < n-1; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(in[i][j] == in[i-1][j-1] == in[i-1][j+1] == in[i+1][j+1] == in[i+1][j-1] == 'X')
                counter++;
        }
    }
    cout << counter;


}
