#include <iostream>

using namespace std;

int main()
{
    string Darek,Jarek,Marek;
    int max_pkt=0;
    cin>>Darek>>Jarek>>Marek;
    for(int i=0;i<Darek.length();i++)
    {
        if(Darek[i]!=Marek[i] && Marek[i]==Jarek[i])                                                    {max_pkt+=2;}
        if(Darek[i]!=Jarek[i] && Marek[i]!=Jarek[i] && Darek[i]!=Marek[i])                              {max_pkt++;}
        if((Darek[i]==Marek[i] && Darek[i]!=Jarek[i])||(Darek[i]==Jarek[i] && Darek[i]!=Marek[i]))      {max_pkt++;}
    }
    cout<<max_pkt<<endl;

    return 0;
}
