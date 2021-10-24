//BMI Calculator
#include<iostream>
using namespace std;
int main()
{
    float height, weight, bmi;
    cout << "Enter the height(in metres) & weight (in kgs)" << endl;
    cin >> height >> weight;
    //weight(kg)/height*height(m)
    bmi = weight / (height * height);
    //Underweight < 18.5
    if (bmi < 18.5)
    {
        cout << "You are underweight, eat more!!!" << endl;
    }
    //Normal - 18.5 - 24.9 
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "You have normal BMI, keep it up!"<< endl;
    }
    //Overweight >25
    else
    {
        cout << "You are overweight, eat healthy hon."<< endl;
    }
     cout << "Your BMI is :" << bmi;
    return 0;
}
