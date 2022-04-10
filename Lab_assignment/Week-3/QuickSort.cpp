#include<iostream>
using namespace std;

void quickSort(int arr[], int lb, int ub)
{
    int i = lb, j = ub, key = arr[lb], t = 0;
    if(lb >= ub)
        return;
    while (i<j)
    {
        while(key >= arr[i] && i<j)
            i++;
        while(key < arr[j])
            j--;
        if(i < j)
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    arr[lb] = arr[j];
    arr[j] = key;
    quickSort(arr, lb, j-1);
    quickSort(arr, j+1, ub);
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
        quickSort(arr, 0, n-1);
        int flag = 0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
