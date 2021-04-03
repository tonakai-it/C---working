#include <iostream>
using namespace std;

// int main()
// {
//   cout << "ようこそC++へ!\n" << "C++を始めましょう！" <<endl;
//   return 0;
// }

// int main()
// {
//   cout << "今日やったのは、" << "for文の使い方まで"<<endl;
//   cout << "今日って何日？" <<  endl;
//   int month,day;
//   cin >> month >> day;
//   cout << "今日は、" << month << "月" << day << "日です" <<endl;
//   for(int i=1;i<=3;i++){
//     if (i==3){
//       cout << "さぁん！" << endl;
//     }else{
//       cout << i << "、";
//     }
//   }
// }
 

// vector<型> 配列名(要素数, 初期値);
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   vector<int> vec = { 1, 2, 3 };
 
//   vec.push_back(10); // 末尾に10を追加
//   vec.pop_back(); // 末尾の要素を削除
 
//   // vecの全要素を出力
//   for (int i = 0; i < vec.size(); i++) {
//     cout << vec.at(i) << endl;
//   }
// }


// int main(){int A,B,C;cin>>A>>B>>C;cout<<max({A,B,C})-min({A,B,C})<<endl;}

// 返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
//   処理
// }
// returnで返す
// ないときはvoid return;

// for (int x : a)

  // // 答えを保持する変数
  // bool answer = false;
 
  // // ここにプログラムを追記
 
  // if (answer) {
  //   cout << "YES" << endl;
  // }
  // else {
  //   cout << "NO" << endl;
  // }


//   多重ループを抜けるときは、ループを抜けるかどうかを持つ変数(フラグ変数)を用意して、フラグ変数の値に応じてループを抜けるように書きます。

// 処理の大まかな流れは次の通りです。

// Copy
//   bool finished = false;  // 外側のループを抜ける条件を満たしているかどうか(フラグ変数)

//   for (int i = 0; i < ... ; i++) {
//     for (int j = 0; j < ... ; j++) {

//       /* 処理 */

//       if (/* 2重ループを抜ける条件 */) {
//         finished = true;
//         break;  // (＊)
//         // finishをtrueにしてからbreakすることで、
//         //   内側のループを抜けたすぐ後に外側のループも抜けることができる
//       }
//     }
//     // (＊)のbreakでここに来る

//     if (finished) {
//       break;  // (＊＊)
//     }
//   }
//   // (＊＊)のbreakでここに来る

// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))
// vector<vector<int>> data(3, vector<int>(4)); 3は縦で4が横
// 長方形にならない二次元配列(ジャグ配列) [[1,2,3][1,2][1,2,3,4,5]]


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int N, M;
//   cin >> N >> M;
//   vector<int> A(M), B(M);
//   for (int i = 0; i < M; i++) {
//     cin >> A.at(i) >> B.at(i);
//   }
 
//   // ここにプログラムを追記
//   // (ここで"試合結果の表"の2次元配列を宣言)
//   vector<vector<char>> result(N, vector<char>(N,'-'));
//   for (int i=0;i<M;i++){
//     A.at(i)--; B.at(i)--;
//     result.at(A.at(i)).at(B.at(i)) ='o';
//     result.at(B.at(i)).at(A.at(i)) ='x'; 
//   }
  
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//       cout << result.at(i).at(j);
//       if (j == N - 1) {
//         cout << endl;  // 行末なら改行
//       }
//       else {
//         cout << " ";  // 行末でないなら空白を出力
//       }
//     }
//   }
// }


#include <bits/stdc++.h>
using namespace std;
 
// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(/* 呼び出し側に対応するように引数を書く */vector<vector<int>> &A, int &correct, int &wrong) {
  // 呼び出し側のAの各マスを正しい値に修正する
  for (int i=1; i<=9; i++){
    for (int j=1; j<=9; j++){
      if (A.at(i).at(j)==(i*j)){
        correct++;
      }else{
        wrong++;
        A.at(i).at(j) = (i*j);
      }
    }
  }
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
 
  // ここにプログラムを追記
  
}
 
 
// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}