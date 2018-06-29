#include <iostream>

using namespace std;

int main() {
    int radius = 0;
    float area = 0;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14*radius*radius;
    cout << "The area is: " << area << endl;
}
