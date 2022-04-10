#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, pos, min = 0;
    int swap = 0, comp = 0;
    for(int i=0; i<n-1; i++)
    {
        min = arr[i];
        pos = i;
        for(j=i+1; j<n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                pos = j;
            }
            comp++;
        }
        if(pos != i)
        {
            arr[pos] = arr[i];
            arr[i] = min;
        }
    }
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "comparisons : " << comp << endl;
    cout << "swaps : " << n-1 << endl;
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
        selectionSort(arr, n);
    }
}
