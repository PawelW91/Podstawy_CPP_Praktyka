#include <iostream>

using namespace std;

int main()
{
    int ASCII[256];
    int ile[256];
    int x;

    for(int i=0;i<256;i++)
    {
        ASCII[i]=i;
        ile[i]=0;
    }

    while((x=getchar())!=EOF)
    {
            for(int j=0;j<256;j++)
            {
                if(x==ASCII[j])
                {
                    ile[j]++;
                }
            }
    }

    for(int i=0;i<256;i++)
    {
        if(ile[i]>0)
        {
            cout<<ASCII[i]<<" "<<ile[i]<<endl;
        }
    }
    return 0;
}
