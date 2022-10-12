#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int p=0, q=n-1;
        for(int i=0;i<n/2;i++)
        {
            int r = arr[p];
            arr[p] = arr[q];
            arr[q] = r;
            p++;
            q--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            cout<<" ";
        }
        cout<<endl;
    }

	
	return 0;
}


