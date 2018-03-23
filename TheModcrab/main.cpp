#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h1, a1, c1;
    cin >> h1 >> a1 >> c1;
    int h2, a2;
    cin >> h2 >> a2;
    int n=0;

    vector<string> optiune;

    while(h2>0)
    {
        if(h1<=a2 && a1<h2)
        {
            optiune.push_back("HEAL");
            h1 += c1;
            h1 -=a2;
        }

        else
        {
            optiune.push_back("STRIKE");
            h2 -= a1;
            h1 -= a2;
        }
        n++;
    }

    cout << n << endl;

    for (vector<string>::iterator it = optiune.begin(); it != optiune.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
