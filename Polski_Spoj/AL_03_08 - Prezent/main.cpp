#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cena;
    vector<int> vec;
    int MAX;
    int ile;
    while(true)
    {
        cin>>cena;
        if(cena!=0)
            {
                vec.push_back(cena);
            }
            else
                {
                    break;
                }
    }
    sort(vec.begin(),vec.end());
    ile=vec.size();
    MAX=vec[ile-1];

    if(MAX == vec[0])
        {
            cout<<MAX<<endl;
        }
    else
        {
            for(int i=vec.size()-1; i>=0; i--)
                {
                    if(vec[i]!=MAX)
                        {
                            cout<<vec[i]<<endl;
                            break;
                        }
                }
        }
    return 0;
}
