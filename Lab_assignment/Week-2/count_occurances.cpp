#include<iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n-1, first = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(key == arr[mid])
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    start = 0, end = n-1;
    int last = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(key == arr[mid])
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    if(first == -1 && last == -1)
        cout << "element not found" << endl;
    else
        cout << last-first+1 << " occurances of " << key << " found" << endl;
}

int main()
{
    cout << "enter no of test cases : ";
    int t;
    cin >> t;
    while(t--)
    {
        cout << "enter n : ";
        int n;
        cin >> n;
        int arr[n];
        cout << "enter elements in array : ";
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << "enter key : ";
        int key;
        cin >> key;
        binarySearch(arr, n, key);
    }
    return 0;
}
