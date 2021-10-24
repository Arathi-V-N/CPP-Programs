//Guess the number 
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the number:";
    cin >> num1;
    //code to clear console
    system("cls");
    cout << "Guess the entered number:";
    cin >> num2;
    (num1 == num2)?cout << "Correct": cout << "Not the same!";
    return 0;
}
