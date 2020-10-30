#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        ll arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2 == 3)
            {
                arr[i]=-8*abs(arr[i]);
            }
            else
            {
                arr[i]=abs(arr[i]);
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
