#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int main() {
  array<int, 4> answer{1};
  array<int, 4> hint{0};

  for (int i=0; i<6;++i) {
    if (all_of(hint.begin(),hint.end(),[](int n) {return n==1;})) {
      break;
    }

    for (int j=0;j<4;++j) {
      cout<<i+1<<" ";
    }
    cout<<endl;
    fflush(stdout);

    for (int& hint_number:hint)
        {
            cin>>hint_number;
        }

    for (int j=0;j<4;++j) {
      if (hint[j]==1)
        {
            answer[j]=i+1;
        }
    }
  }
  for (int answer_number:answer)
    {
        cout<<answer_number<<" ";
    }
  cout<<endl;
  fflush(stdout);

  return 0;
}
