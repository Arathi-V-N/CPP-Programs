//program to convert ASCII values to character 

#include<iostream>
using namespace std;
int main()
{
    int c[10];
    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;
    cout << "Enter some ASCII values:" << " ";
    for(int i = 0;i < size ; i++)
    {
        cin >> c[i];
    }
    
    cout << "The corresponding characters are:";
    for(int i = 0;i < size ; i++)
    {
        cout << char(c[i]);
    }
    return 0;
}
