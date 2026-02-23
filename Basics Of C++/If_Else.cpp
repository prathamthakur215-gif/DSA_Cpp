#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "--------Welcome To Age Verification System-------";
    cout << "\n" << "Enter Your Age :";
    cin >> age;
    if (age>18)
    {
        cout << "You Are an Adult";
    }
    else if (age<1)
    {
        cout << "Enter Valid Age";
    }
    else if (age<5)
    {
        cout << "You are an Infant";
    }
    else if ((age>=5) && (age<=18))
    {
        cout << "You are a Child";
    }
    


    return 0;
}