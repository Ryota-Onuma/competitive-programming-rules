#include <iostream>
#include <string>
#include <cmath>
#include<array>
using namespace std;

int getNthDigit(long long N, int l) {
    long long divisor = 1;
    for (int i = 0; i < l; ++i) {
        divisor *= 10;
    }

    int digit = static_cast<int>((N / divisor) % 10);
    return digit;
}


int main(){
    unsigned long long N;
    cin >> N;
    string strN = to_string(N);
    int k = strN.size();

    long long result = -1;

    for (long long i = 0; i < (1 << k); i++){
        bool used[k];
        for (long long j = 0; j < k; j++){
            used[j] = false;
        }

        for (long long j = 0; j < k; j++){
            if (i & (1 << j)){
                used[j] = true;
            }
        }
        
        int total = 0;
        int deletedNum = 0;
        for (long long l = 0; l < k; l++){
            if (!used[l]){
                deletedNum++;
                continue;
            }
             long long nthDigit = getNthDigit(N, l);
             total += nthDigit;
        }

        if (total == 0 || total % 3 != 0 || deletedNum == k){
            continue;
        }

        if (deletedNum <= result || result == -1) {
            result = deletedNum;
        }
    }
    
    cout << result << endl;
    
    return 0;
};