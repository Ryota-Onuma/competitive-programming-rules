#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N + 1);
    vector<int> L(Q + 1);
    vector<int> R(Q + 1);

    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

    vector<int> sumResults(N + 1);
    sumResults[0] = 0;

    for (int i = 1; i <= N; i++){
        sumResults[i] = sumResults.at(i - 1) + A.at(i);
    }

    for (int i = 1; i <= Q; i++){
        int result = sumResults.at(R.at(i)) -  sumResults.at(L.at(i) - 1);
        cout << result << endl;
    }

    return 0;
}