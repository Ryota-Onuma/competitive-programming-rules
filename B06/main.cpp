#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N, Q;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) cin >>  A[i];
    cin >> Q;

    vector<int> L(Q + 1);
    vector<int> R(Q + 1);
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

    vector<int> atari(N + 1);
    vector<int> hazure(N + 1);

    atari[0] = 0;
    hazure[0] = 0;
    for (int i = 1; i <= N; i++){
        if (A[i]){
            atari[i] = atari[i - 1] + 1;
            hazure[i] = hazure[i - 1];
        } else {
            atari[i] = atari[i - 1];
            hazure[i] = hazure[i - 1] + 1;
        }
    }

    for (int i = 1;i <= Q; i++){
        int atariCount = atari[R[i]] -  atari[L[i] - 1];
        int hazureCount = hazure[R[i]] -  hazure[L[i] - 1];
        if (atariCount > hazureCount){
            cout << "win" << endl;
        } else if (atariCount < hazureCount) {
            cout << "lose" << endl;
        }else{
            cout << "draw" << endl;
        }
    }

    return 0;
}