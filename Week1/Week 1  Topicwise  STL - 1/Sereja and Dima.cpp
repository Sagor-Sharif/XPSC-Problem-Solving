#include<iostream>
using namespace std;
int main()
{
    int s=0,d=0,n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0; i < n; i++)
    {
        if(c%2 == 0)
        {
            c++;
            if(arr[i] > arr[n-1])
            {
                s+=arr[i];
            }
            else
            {
                s+=arr[n-1];
                i--;
                n--;
            }
        }
        else
        {
            c++;
            if(arr[i] > arr[n-1])
            {
                d+=arr[i];
            }
            else
            {
                d+=arr[n-1];
                i--;
                n--;
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}
