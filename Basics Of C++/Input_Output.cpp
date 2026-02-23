#include<iostream>
using namespace std;

int main(){
    // Input and Output
    int x;
    cout << "Enter THe VAlue of x : ";
    cin >> x;
    cout << "The VAlue OF X is " << x << "\n";
    
    // DAta Types
    string str,str1;
    cout << "Enter two string : ";
    cin >> str >> str1;
    cout << str << " "<< str1;

    string str2;
    cout << "\n" << "enter another string :";
    cin.ignore();
    getline(cin,str2);
    cout << str2;

    char c='h';
    cout <<"\n" << c;
    string ch="5t";
    cout << "\n" << ch;


    return 0; 
}  
