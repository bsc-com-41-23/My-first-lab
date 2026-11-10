#include <iostream>
#include <limits>

using namespace std;

double calculateSquare(double side);
double calculateRectangle(double length, double width);
double calculateTriangle(double base, double height);

int main() {
    int choice;
    double area;

    while(true) {
        cout << "\nplease select the area of the shape to calculate " << endl;
        cout << "1. square" << endl;
        cout << "2. rectangle " << endl;
        cout << "3. Triangle " << endl;
        cout << "4. Quit program " << endl;
        cout << " \nenter selection: ";
        cin >> choice;

    if(cin.fail() || choice < 1 || choice > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "your input was: " << choice << "which is an invalid input" << endl;
        cout << "Please enter a valid input!!!" << endl;
        continue;
    }  
    if(choice == 4) {
        cout << "exiting program. Goodbye!" <<endl;
        break;
    }  
    double a, b;
    switch (choice) {
    case 1: 
        cout << "enter side length of the square: ";
        cin >> a;
        area = calculateSquare(a);
        cout << "the area of the square is: " << area << endl;
        break;
    case 2:
        cout << "enter length of the rectangle: ";
        cin >> a;
        cout << "enter width of the rectangle ";
        cin >> b;
        area = calculateRectangle(a, b);
        cout << "the area of the rectangle is : " <<  area << endl;
        break;
    case 3:
        cout << "enter base of the triangle ";
        cin >> a;
        cout << "enter height of the triangle : ";
        cin >> b;
        area = calculateTriangle(a, b);
        cout << "the area of the triangle is: " << area << endl;
        break;

        }
    }
    return 0;

}
double calculateSquare(double side) {
    return side * side;
}
double calculateRectangle(double length, double width) {
    return length * width;
}
double calculateTriangle(double base, double height) {
    return 0.5 * base * height;
}