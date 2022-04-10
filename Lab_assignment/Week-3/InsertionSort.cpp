#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, t = 0;
    int shift = 0, comp = 0;
    for(int i=1; i<n; i++)
    {
        t = arr[i];
        j = i-1;
        while(j >= 0 && t < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
            comp++;
        }
        shift++;
        arr[j+1] = t;
    }
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "comparisons : " << comp << endl;
    cout << "shifts : " << shift + comp << endl;
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
        insertionSort(arr, n);
    }
}
