#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    string nstring = to_string(N);
    int digit = nstring.size();
    int unsigned decimal = 0;
    for (int i = 1; i <= digit; i++){
        int num = nstring.at(i -1) - '0';
        decimal = decimal + (num * (1 << (digit - i)));
    }
    cout << decimal << endl;
    return 0;
}