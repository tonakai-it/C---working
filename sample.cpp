#include <iostream>
using namespace std;

// int main()
// {
//   cout << "ようこそC++へ!\n" << "C++を始めましょう！" <<endl;
//   return 0;
// }

int main()
{
  cout << "今日やったのは、" << "for文の使い方まで"<<endl;
  cout << "今日って何日？" <<  endl;
  int month,day;
  cin >> month >> day;
  cout << "今日は、" << month << "月" << day << "日です" <<endl;
  for(int i=1;i<=3;i++){
    if (i==3){
      cout << "さぁん！" << endl;
    }else{
      cout << i << "、";
    }
  }
}