/*Online Shopping Discount System

Amount ≥ 5000 → 20%

3000–4999 → 15%

1000–2999 → 10%

Below 1000 → No discount
Extra 5% if user is a premium member.*/
#include<iostream>
using namespace std;

int main(){
    float amount,discount;
    cout << "-------Welcome to Counter Dicount Centre--------";
    cout << "\n" << "Enter The Total Amount :";
    cin >> amount;
    if (amount >= 5000)
    {
        discount=0.2;
        cout << "Your Discount IS 20% "<<"\n";
    }
    else if ((amount>=3000) && (amount<=4999))
    {
        discount=0.15;
        cout << "Your Discount IS 15% "<<"\n";
    }
    else if ((amount>=1000) && (amount<=2999))
    {
        discount=0.1;
        cout << "Your Discount IS 10% "<<"\n";
    }
    else
    {
        cout << "NO Dicount For YOU ..." << "\n";

    }
    char ch;
    cout << "\n" << "Are You a Premium Member ?? (Y/y) : ";
    cin >> ch;
    if ((ch=='Y') or (ch=='y'))
    {
        discount=discount+0.05;
        cout << "\n" << "You Are a Premium Member . You get an addditional 5%  more Discount";
    }
    
    float Total_D,Total_A ;
    Total_D=amount*discount;
    Total_A=amount-Total_D;
    cout << "\n" << "Total Amount To Be PAid By You Is  " << Total_A;
    cout << "\n" << "You HAve Got A Dicount OF : Rs." << Total_D;
    return 0;
}