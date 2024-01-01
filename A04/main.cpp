#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, target;
    cin >> N;

    target = N;
    const int strCount = 10;
    string result(strCount,'0');
    for (int i = 1; i <= strCount; i++){
        int rest = target % 2;
        int quotient =  target / 2;     
        result.replace(strCount - i, 1, to_string(rest));
        target = quotient;

        if (quotient == 0) break;
    }
    cout << result << endl;
    return 0;
}