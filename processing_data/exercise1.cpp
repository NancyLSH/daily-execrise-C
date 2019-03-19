//exercise1.cpp -- Compute the height
//1 feet(Ó¢´ç) = 12 inches(Ó¢´ç)
#include <iostream>
int main()
{
    using namespace std;
    const int Change = 12;
    cout << "Please enter your height, in inches:______\b\b\b\b\b\b";
    int h;
    cin >> h;
    int feet = h / Change;
    int inches = h % Change;
    cout << "Your height is " << feet << " feet " << inches << " inches." << endl;
   // cout << "Your height is: " << h / Change << " feet" << h % Change << " inches." << endl;
    cin.get();
    return 0;
}
