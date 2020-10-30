#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
            if(i%2 == 1)
            {
                arr[i]=-1*abs(arr[i]);
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
