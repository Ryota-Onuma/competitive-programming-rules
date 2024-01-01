#include <iostream>
using namespace std;

int main(){
    int A[110];
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++) cin >>  A[i];
    const int totalPrice = 1000;

    for (int i = 1; i <= N; i++){ // 1個目の商品価格
        for (int j = i + 1; j <= N; j++){ // 2個目の商品価格
            for (int k = j + 1; k <= N; k++){ // 3個目の商品価格
                if (A[i] + A[j] + A[k] == totalPrice){           
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
    return 0;
}