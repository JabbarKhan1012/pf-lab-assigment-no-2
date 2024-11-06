#include <iostream>
using namespace std;

int main(){ 
    int Wheat=145;
    int Tomato=150;
    int Oil=500; 
    int Quantity_of_Wheat,Quantity_of_Tomato,Quantity_of_Oil;
    int final_total,discount,shipping_fee,loyaltyPoints,Total_after_discount;
    int payment_method,total_with_shipping,transaction_fee,total_after_paymentmethod;
    int customer_type,total_after_customer_discount;
    
    cout<<"Enter the quantity for wheat in kg: ";
    cin>>Quantity_of_Wheat;
    cout<<"Enter the quantity for tomato in kg: ";
    cin>>Quantity_of_Tomato;
    cout<<"Enter the quantity for oil in kg: ";
    cin>>Quantity_of_Oil;

    int net_total=(Wheat*Quantity_of_Wheat)+(Tomato*Quantity_of_Tomato)+(Oil*Quantity_of_Oil);
    cout<<"Your total bill is "<<net_total<<" Rupees only"<<endl;

    if(net_total>1000){
        final_total=(net_total>1500)?net_total*0.9:net_total; 
        discount=net_total-final_total;
        shipping_fee=(final_total<700)?15:0;
        cout<<"Shipping fee is: "<<shipping_fee<<" Rupees"<<endl;
        cout<<"The discount you have received is: "<<discount<<" Rupees"<<endl;
        total_with_shipping=final_total+shipping_fee;
        cout<<"Total amount after discount is: "<<total_with_shipping<<" Rupees"<<endl;
    } else {
        total_with_shipping=net_total;
    }

    cout<<"Select a payment method: \n1: Debit card \n2: Jazz Cash \n3: EasyPaisa \n4: Cash"<<endl;
    cout<<"Enter your choice: ";
    cin>>payment_method;

    if(payment_method==1){
        transaction_fee=total_with_shipping*0.02;
    } else if(payment_method==2){
        transaction_fee=total_with_shipping*0.03;
    } else {
        transaction_fee=0;
    }

    total_after_paymentmethod=total_with_shipping+transaction_fee;
    cout<<"Your bill after transaction fee is: "<<total_after_paymentmethod<<" Rupees"<<endl;

    cout<<"Enter your customer type: \n1: Regular \n2: VIP"<<endl;
    cout<<"Enter your choice: ";
    cin>>customer_type;

    // Using a ternary operator to apply the VIP discount if customer_type is 2 (VIP)
    total_after_customer_discount = (customer_type == 2)?total_after_paymentmethod*0.95:total_after_paymentmethod;    
    if(customer_type == 2){
        int vip_discount=total_after_paymentmethod * 0.05;
        cout<<"Additional VIP discount applied: "<<vip_discount<<" Rupees"<<endl;
    }

    cout<<"Final total amount to be paid is: "<<total_after_customer_discount<<" Rupees"<<endl;

    return 0;
}
