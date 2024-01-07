#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    
    int strLength = S.size();
    int insertPlacesLength = strLength + 1;

    for (int i = 0; i < (1 << insertPlacesLength); i++){
        bool insertPlaces[insertPlacesLength];
        for (int j = 0; j < insertPlacesLength; j++){
            insertPlaces[j] = false;
        }

        for (int j = 0; j < insertPlacesLength; j++) {
            if (i & (1 << j)){
                insertPlaces[j] = true;
            }
        }


        string result = "";
        for (int j = 0; j < insertPlacesLength; ++j){
            if (insertPlaces[j]){
                result += "A";
            }
            if (j < strLength){
                result += S[j];
            }
        }
    
        if (result == "AKIHABARA"){
            cout << "YES" << endl;
            return 0;
        }
    }  
    cout << "NO" << endl;

    return 0;
}