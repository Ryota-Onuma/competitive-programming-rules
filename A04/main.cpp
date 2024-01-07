#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, target;
    cin >> N;
    target = N;
    
    const int strCount = 8; // 10桁で表示
    string resultTxt(strCount,'0'); // 0000000000 の文字列

    for (int i = 1; i <= strCount; i++){  // 割り算を実施し、2^0の桁から順番に置き換えていく
        int rest = target % 2;
        int quotient =  target / 2;     
        resultTxt.replace(strCount - i, 1, to_string(rest));
        target = quotient;

        if (quotient == 0) break;
    }
    
    cout << resultTxt << endl;
    return 0;
}