// draw rectangle shape in c++
#include<iostream>
using namespace std;
int main()
{
    int height, width;
    char symbol;
    cout << "Enter height and width:";
    cin >> height >> width;
    cout << "Enter the symbol:";
    cin >> symbol;
    for(int h = 1; h <= height; h++)
    {
        for(int w = 1; w<= width; w++)
        {
            cout << symbol << " ";
        }
    cout << endl;
    }

    return 0;
}
