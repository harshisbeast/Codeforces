#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int nc;
    cin >> nc;

    while (nc--)
    {
        int xc, yc;
        int k;
        cin >> xc >> yc >> k;

        int targetx = k * xc;
        int targety = k * yc;
        vector<long long> xans;  
        vector<long long> yans; 
        int sizex = 0, sizey = 0;

        if (targetx != 0)
        {
            sizex = 1;
            xans.push_back(targetx);
        }

        if (targety != 0)
        {
            sizey = 1;
            yans.push_back(targety);
        }

        for (int i = 1; i <= k; i++)
        {
            if (sizex + 1 == k)
            {
                xans.push_back(0);
                sizex++;
            }
            if (sizey + 1 == k)
            {
                yans.push_back(0);
                sizey++;
            }

            if (sizex + 2 <= k)
            {
                xans.push_back(i);
                xans.push_back(-i);
                sizex += 2;
            }
            if (sizey + 2 <= k)
            {
                yans.push_back(i);
                yans.push_back(-i);
                sizey += 2;
            }
        }

        for (int i = 0; i < k; i++)
        {
            cout << xans[i] << " " << yans[i] << endl;
        }
    }

}
