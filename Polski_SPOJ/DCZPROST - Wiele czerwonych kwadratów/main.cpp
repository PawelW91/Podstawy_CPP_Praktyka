#include <iostream>

using namespace std;

long long kwadraty(long long x, long long y){
  if (x<y)swap(x,y);
  if (x<2||y==0)return 0;

  if (y<2){
    return x/2;
  } else {
    return((6+(y/2-1)*4)/2)*(y/2)+((x-y+(y%2))/2)*y;
  }
}

int main() {
  long long x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;

  cout<<kwadraty(x2,y2)+kwadraty(x1,y1)-kwadraty(x2,y1)-kwadraty(x1,y2)<<endl;

  return 0;
}
