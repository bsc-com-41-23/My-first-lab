#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int daysuntilexpiration = rand() % 12;
    cout << "Days until expiration: " << daysuntilexpiration << endl;

    if (daysuntilexpiration == 0) {
        cout << "your subscription has expired." << endl;
    }
    else if(daysuntilexpiration == 1) {
        cout << "your subscription expires within a day." << endl;
        cout << "Renew now and save 20%" << endl;
    }
    else if (daysuntilexpiration <= 5){
        cout << "your subscription expires in " << daysuntilexpiration << " days " << endl;
        cout << "renew now and save 10%" << endl;
    }
    else if (daysuntilexpiration <= 10){
        cout << "your subscription expires soon. Renew now. " << endl;
    }
    else {
        cout << " You have an active subscription." << endl;
    }

    return 0;
}