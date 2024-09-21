#include <iostream> // input output stream. to be included in every program
using namespace std; // defining the namespace standard for C++

int main() {
    //DATATYPES (int-4 byte, char-1 byte, float-4 byte, bool-1 byte, double-8 byte)

    int age = 25;
    char grades= 'b';
    float PI = 3.14f;
    bool isSafe = false;
    double rate = 100.22;

    //Implicit Conversion (TYPE CONVERSION)

    char grade = 'A';

    int value = grade;
    cout << value << endl;
    cout << "\n" << endl;

    //Explicit Coversion (TYPECASTING - conversion of one datatype to other)

    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;
    cout << "\n" << endl;

    //Input statement (cin >>)

    int a;
    cout << "Enter your age: ";
    cin >> a;

    cout << "Your entered age is: " << a << endl;
    cout << "\n" << endl;

    //Arithmetic Operations (+,-,*,/,%)

    int b=5, c=10;

    cout << "Sum = " << (b+c) << endl;
    cout << "Difference = " << (b-c) << endl;
    cout << "Multiplication = " << (b*c) << endl;
    cout << "Division = " << (b/c) << endl;
    cout << "Modulus = " << (b%c) << endl;
    cout << "\n" << endl;

    // Relational Operations (>,<, >=,<=,==,!= | returns boolena values false=0, true=1)
    cout << (3 < 5) << endl;
    cout << (5 <= 5) << endl;
    cout << (5 > 3) << endl;
    cout << (5 >= 5) << endl;
    cout << (3 == 3) << endl;
    cout << (3 != 5) << endl;
    cout << "\n" << endl;

    // Logical Operation (||-OR, &&-AND, !-NOT)
    cout << !(3 < 5) << endl; //here answer should be false but logical NOT makes it inverse
    cout << ((3 < 1) || (3 < 5)) << endl;
    cout << ((3 < 1) && (3 < 5)) << endl;
    cout << "\n" << endl;

    //Unary Operator (++, --)
    int p=10;

    int q = p++; //Post-increment
    cout << q << endl;
    cout << p << endl;

    int r = ++p; //Pre-increment
    cout << r << endl;
    cout << p << endl;

    int s = p--; //Post-decrement
    cout << s << endl;
    cout << p << endl;

    int t = --p; //Pre-drecrement
    cout << t << endl;
    cout << p << endl;
    cout << "\n" << endl;

    //Sum of Two number (problem)
    int x,y;

    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    cout << "Sum of x and y is: " << (x+y) << endl;
    return 0;
}