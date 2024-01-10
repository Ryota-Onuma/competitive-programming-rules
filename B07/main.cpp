#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T, N;
    cin >> T >> N;

    vector<int> L(N + 1);
    vector<int> R(N + 1);

    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    vector<int> fluctuation(T + 1, 0);
    for (int i = 1; i <= N; i++){
        fluctuation[L[i]] += 1;
        fluctuation[R[i]] -= 1;
    }

    vector<int> sum(T + 1);
    sum[0] = fluctuation[0];
    for (int t = 1; t <= T - 1; t++){
        sum[t] = sum[t -1] + fluctuation[t];
    }

    for (int t = 0; t <= T - 1; t++){
        cout << sum[t] << endl;
    }


    return 0;
}
