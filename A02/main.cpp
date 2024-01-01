#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int A[110] = {};

    for (int i = 0; i <= N; i++) cin >> A[i];

    for (int i = 0; i <= N; i++){
        if (A[i] == X) { 
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}