#include <iostream>
#include <vector>

using namespace std;

const int MAX=1000;
const int MOD=1000000000;

vector<vector<int> > trojkatPascala(MAX+1,vector<int>(MAX+1,0));

void generujTrojkatPascala(){
    for(int i=0;i<=MAX;i++){
        trojkatPascala[i][0]=1;
        trojkatPascala[i][i]=1;
    }

    for(int i=2;i<=MAX;i++){
        for(int j=1;j<i;j++){
            trojkatPascala[i][j]=(trojkatPascala[i-1][j-1]+trojkatPascala[i-1][j])%MOD;
        }
    }
}

int main(){
    generujTrojkatPascala();

    int liczbaTestow;
    cin>>liczbaTestow;

    while(liczbaTestow--){
        int n,k;
        cin>>n>>k;

        if(k==0||k==n){
            cout<<"1"<<endl;
        }else{
            cout<<trojkatPascala[n][k]<<endl;
        }
    }

    return 0;
}
