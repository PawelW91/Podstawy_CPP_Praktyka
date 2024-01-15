#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> szukaj(int x, const vector<int>& szuk)
{
    int minRotation=INT_MAX;
    vector<int> optimalSetting;

    for (int i=0;i<x;i++)
        {
            int currentRotation=0;
            for (int j=0;j<x;++j)
            {
                if (szuk[(j+i)%x]!=j+1)
                {
                    currentRotation++;
                }
            }
            if (currentRotation<minRotation)
                {
                    minRotation=currentRotation;
                    optimalSetting.clear();
                    for (int j=0;j<x;j++)
                        {
                            optimalSetting.push_back(szuk[(j+i)%x]);
                        }
                }
        }
    return optimalSetting;
}

int main() {
    int ile;
    cin>>ile;

    while(ile--)
    {
        int x;
        cin>>x;
        vector<int> y(x);
        for (int i=0;i<x;i++)
            {
                cin>>y[i];
            }

        vector<int> szuk=szukaj(x,y);

        for (int i=0;i<x;++i)
            {
                cout<<szuk[i]<<" ";
            }
        cout<<endl;
    }

    return 0;
}
