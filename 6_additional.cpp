#include <iostream>
using namespace std;
int main(){ 
    //declaring all the variable used in this program
    int Wheat=145;
    int Tomato=150;
    int Oil=500; 
    int Quantity_of_Wheat,Quantity_of_tomatos,Quantity_of_oil;
    int final_total, discount,shipping_fee, loyalityPoints,Total_after_discount;
    int payment_method,total_with_shipping,transaction_fee,total_after_paymentmethood;
    int  customer_type,total_after_customer_discount;
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
        //calculating total amount of which item are purchased
        final_total=(net_total>1500)?net_total*0.9:net_total; 
        //finding the discount
        discount=net_total-final_total;
        //finding shipping fee
        shipping_fee = (final_total < 700) ? 15.0 : 0.0;
        cout<<"shiping fee is::"<<shipping_fee<<endl;
        //displaying the amount of discount earned
        cout<<"The discount you have got is:: "<<discount<<endl;
        //displaying the amount remained after the discount
        total_with_shipping=final_total+shipping_fee;
        cout<<"Total amount after discount is::"<<total_with_shipping<<endl;
    }
    //verifying payment methood
    cout<<"Select a payment methood \n1: for Debit card \n2: for Jazz Cash \n3: for easyPaisa\n4: for cash"<<endl;
    cout<<"Enter your choice::";
    cin>>payment_method;
    if (payment_method == 1) {
        transaction_fee = total_with_shipping * 0.02;
    } else if (payment_method == 2) {
        transaction_fee = total_with_shipping * 0.03;
    } else {
        transaction_fee = 0.0;
    }
    total_after_paymentmethood = total_with_shipping + transaction_fee;
    cout<<"Your bill after transiction fee is:: "<<total_after_paymentmethood<<endl;
}