//program to convert character array to corresponding ASCII values

#include<iostream>
using namespace std;
int main()
{
    char c[10];
    int size;
    cout << "Enter the size of character array:" << endl;
    cin >> size;
    cout << "Enter some characters:";
    for(int i = 0;i < size ; i++)
    {
        cin >> c[i];
    }
    
    cout << "The corresponding ASCII values are:";
    for(int i = 0;i < size ; i++)
    {
        cout << int(c[i]) << " ";
    }
    return 0;
}
