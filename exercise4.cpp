#include <iostream>
#include <limits>

using namespace std;

int main() {
          int userInput;

          while(true) {
            cout << "enter an integer value between 5 and 10: ";
            cin >> userInput;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "sorry, you entered a invalid number please try again. " << endl;
                continue;
            }
            if(userInput < 5 || userInput > 10) {
                cout << "you entered " << userInput << "plz enter a number between 5 and 10" << endl;
                continue;
            }
            break;
          }
          cout << "your input value" << userInput << "has been accepted" <<  endl;
          return 0;
}