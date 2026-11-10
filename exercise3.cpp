#include <iostream>
#include <string>

using namespace std;

int main() {
    string elements [] = {"B123", "C234", "A345", "C15", "B177,", "G3003", "C235", "B179" };
    int arraySize = sizeof(elements) / sizeof(elements[0]);

    for(int i = 0; i < arraySize; i++){
        if(elements[i][0] == 'B') {
            cout << elements[i] << endl;
        }
    }
    return 0;
}