#include<iostream>
#include<cmath>
using namespace std;

void solve(int arr[], int n, int key)
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(arr[i] - arr[j]) == key)
                cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        solve(arr, n, key);
    }
    return 0;
}
