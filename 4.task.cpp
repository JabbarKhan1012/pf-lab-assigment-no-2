#include <iostream>
using namespace std;
int main() 
{
    //declaring all the variable used in this program
    int Wheat=145;
    int Tomato=150;
    int Oil=500; 
    int Quantity_of_Wheat,Quantity_of_tomatos,Quantity_of_oil;
    int final_total, discount,shipping_fee, loyalityPoints,Total_after_discount;
    //getting the quantity of items
    cout<<"Enter the quantity for wheat in K.G:: ";
    cin>>Quantity_of_Wheat;
    cout<<"Enter the quantity for tomato in kg:: ";
    cin>>Quantity_of_tomatos;
    cout<<"Enter the quantity for oil in kg:: ";
    cin>>Quantity_of_oil;
    //finding total amount
    int net_total=(Wheat*Quantity_of_Wheat)+(Tomato*Quantity_of_tomatos)+(Oil*Quantity_of_oil);
    cout<<"Your total bill is "<<net_total<<" Rupees only"<<endl;
    //applying discount if net total is greater than 1500
    if(net_total>1000)
    {
        final_total=(net_total>1500)?net_total*0.9:net_total; 
        discount=net_total-final_total;
        shipping_fee = (final_total < 700) ? 15.0 : 0.0;
        cout<<"shiping fee is::"<<shipping_fee<<endl;
        cout<<"The discount you have got is:: "<<discount<<endl;
        cout<<"Total amount after discount is::"<<final_total+shipping_fee<<endl;
        if(Total_after_discount>300)
        {
            loyalityPoints=50;
            cout<<"Loyality points earned::"<<loyalityPoints;
        }
        else
        {
            loyalityPoints=20;
            cout<<"Loyality points earned::"<<loyalityPoints;
        }
    }
    else 
    cout<<"You have no discount, The total bill is::"<<net_total;

   
}