#include <iostream>

using namespace std;

int groups[200001];
int main()
{
    int n, nr1=0, nr2=0;
    cin>>n;

    for(int i=1; i <= n; ++i)
    {
        cin >> groups[i];
        if(groups[i]==1)
        {
            nr1++;
        }
        else nr2++;
    }

    if (nr1>nr2)
    {
        cout<<nr2+(nr1-nr2)/3;
    }
    else cout << nr1;

    return 0;
}
