//draw triangle using numbers
#include<iostream>
using namespace std;
int main()
{
    int height, width;
    cout << "Enter the height & width of traingle:";
    cin >> height >> width;
    for(int h = 1; h <= height; h++ )
    {
        for(int w = 1;w <= h; w++)
        {
            cout << w << " ";
        }
        cout << endl;
    }
    
    return 0;
}
