#include <iostream>
using namespace std;

int main() {
    //if-else conditional statements::

    // // Age for Voting example:
    int age;
    cout << "enter your age: ";
    cin >> age;

    if (age>=18){
        cout << "Eligible to vote\n" << endl;
    } else {
        cout << "Not ligible to vote\n" << endl;
    }

    // // Odd and Even example:
    int n;
    cout << "enter the no. ";
    cin >> n;

    if (n%2==0){
        cout << "n is Even\n" << endl;
    }else {
        cout << "n is Odd\n" << endl;
    }

    //Grade System example:
    int marks;
    cout << "enter the marks: ";
    cin >> marks;

    if (marks >= 90 && marks < 100){
        cout << "A-Grade\n" << endl;
    }else if (marks >= 80 && marks < 90){
        cout << "B-Grade\n" << endl;
    }else if (marks >= 70 && marks < 80){
        cout << "B-Grade\n" << endl;
    }else if (marks >= 60 && marks < 70){
        cout << "B-Grade\n" << endl;
    }else if (marks >= 50 && marks < 60){
        cout << "B-Grade\n" << endl;
    }else if (marks >= 40 && marks < 50){
        cout << "B-Grade\n" << endl;
    }else{
        cout << "You Failed !!" << endl;
    }

    //To find if character is uppercase or lowercase:
    char ch;
    cout << "enter the character: ";
    cin >> ch;

    if(ch>=65 && ch<=90){
        cout << "The character is Uppercase\n" << endl;
    }else{
        cout << "The character is Lowercase\n" << endl;
    }

    //Ternary statements:
    int n=-45;

    cout << (n>=0? "positive" : "negative") << endl;

    WHILE LOOP:
    int n = 50;
    int count = 1;
    while (count <= n){
        cout << count << " ";
        // count++;
    }
    cout << endl;

    // //FOR LOOP:
    int n = 10;

    for (int i=1; i <= n; i++)    {
        cout << i << " ";
    }
    cout << endl;

    // //FOR LOOP: with different i increment:
    int m = 10;

    for (int i=1; i <= m; i= i+2)    {
        cout << i << " ";
    }
    cout << endl;

    // //Sum of no. from 1 to n using for loop:
    int n;
    int sum = 0;
    cout << "enter the value of n: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum;
    cout << endl;

    // //Sum of no. from 1 to n using while loop:
    int n=5;
    int sum=0;
    int i=1;
    while (i<= n)
    {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;
    
    // Sum of all odd no. from 1 to n:
    int n=5;
    int sum=0;

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            cout << i << " \n";
            sum += i;
        }
    }
    cout << "sum of odd no. = " << sum << endl;

    // Prime no. or not using do-while loop: (change in for loop i*i<=n):
    int n=4;
    bool isPrime = true;
    for (int i=2; i*i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    // if (isPrime=true)
    {
        cout << "prime no. \n";
    }else{
        cout << "non-prime no. \n";
    }
    
    //Print * in everyline using nested loops:
    for (int i=1; i<=5; i++){
        int m=10;
        for (int i = 1; i <=m; i++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    return 0;
}