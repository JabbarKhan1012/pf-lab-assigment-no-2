#include<iostream>
using namespace std;
int main()
{
    int Wheat=145;
    int Tomato=150;
    int Oil=500;
    int Quantity_of_Wheat,Quantity_of_tomatos,Quantity_of_oil;
    cout<<"Enter the quantity for wheat in K.G:: ";
    cin>>Quantity_of_Wheat;
    cout<<"Enter the quantity for tomato in kg:: ";
    cin>>Quantity_of_tomatos;
    cout<<"Enter the quantity for oil in kg:: ";
    cin>>Quantity_of_oil;
    int net_total=(Wheat*Quantity_of_Wheat)+(Tomato*Quantity_of_tomatos)+(Oil*Quantity_of_oil);
    cout<<"Your total bill is "<<net_total<<" Rupees only";
    return 0;
}