#include <iostream>
using namespace std;

int main (){
    // Sum of all odd no. using WHILE LOOP:
    int n=5;
    int i=1;
    int sum=0;

    while(i<=n){
        cout << i << " ";
        sum = sum+i;
        i++;
    }
    cout << sum << endl;

    //Sum of even no. using FOR LOOP:
    int x=100;
    int sum=0;

    for(int i=1; i<=x; i++){
        if(i%2 == 0){
            cout << i << " \n";
            sum += i;
        }
    }
    cout << "Sum of even no. is: " << sum << endl;

    //Sum of all no. from 1 to N divisible by 3 using FOR LOOP:
    int t=30;
    int sum=0;

    for (int i=1; i<=t; i++){
        if(i%3 == 0){
            cout << i << " ";
            sum +=i;
        }
    }
    cout << sum << endl;

    // Sum of all no. from 1 to N divisible by 3 using WHILE LOOP:
    int d = 30;
    int i = 1;
    int sum = 0;

    while(i <= d) {
        if(i % 3 == 0) {
            cout << i << " ";
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;

    // Sum of all no. from 1 to N divisible by 3 using FOR LOOP:
    int l=40;
    int sum=0;

    for(int i=1; i<=l; i++){
        if(i % 3 == 0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << sum << endl;

    //Factorials of N:

    int f=3;
    int fact=1;

    for (int i=1; i<= f; i++){
        fact *= i;
    }
    cout << "Factorial of " << f << " is: " << fact << endl;
    return 0;
}