#include <iostream>
#include <string>

int main(){
    int n = 3;
    const int omote = 0; // 表
    const int ura = 1; // 裏

    // 1 << n の左シフト演算の結果が2 ^ n となる。
    for (int i = 0; i < (1 << n); i++) {
        string coins[k];
        for (int j = 0; j < n; j++) {
            coins[j] = omote;
        }

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // j列目が裏か
                 coins[j] = ura;
            }
        }

        for (int j = 0; j < n; j++) {
            int omote_count = 0;
            int ura_count = 0;
            if (coins[j] == omote){
                omote_count++
            } else {
                ura_count++
            }
        }
    }

    return 0;
}