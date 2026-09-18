#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; // n = number of elements and k = dividend
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
