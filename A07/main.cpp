#include <iostream>
#include <vector>
using namespace std;

int main() {
    int D, N;
    cin >> D >> N;
    vector<int> L(N + 1);
    vector<int> R(N + 1);

    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    vector<int> report(D + 1);

    for (int i = 1; i <= N; i++){
        report[L[i]] += 1;
        report[R[i] + 1] -=1;
    }

    vector<int> sums(D + 1);
    sums[0] = 0;
    for (int i = 1; i <= D; i++){
        sums[i] = sums[i - 1] + report[i];
    }
    for (int i = 1; i <= D; i++){
        cout << sums[i] << endl;
    }
    return 0;
}