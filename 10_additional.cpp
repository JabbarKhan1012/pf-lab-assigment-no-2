#include <iostream>
using namespace std;
int main() {
    int Wheat = 145;
    int Tomato = 150;
    int Oil = 500;
    int Quantity_of_Wheat, Quantity_of_Tomato, Quantity_of_Oil;
    int final_total, discount, shipping_fee, loyaltyPoints, Total_after_discount;
    int payment_method, total_with_shipping, transaction_fee, total_after_paymentmethod;
    int customer_type, total_after_customer_discount, location;
    string coupon_code;
    
    cout << "\n\n\t\tEnter the quantity for wheat in kg: ";
    cin >> Quantity_of_Wheat;
    cout << "\n\n\t\tEnter the quantity for tomato in kg: ";
    cin >> Quantity_of_Tomato;
    cout << "\n\n\t\tEnter the quantity for oil in kg: ";
    cin >> Quantity_of_Oil;

    int net_total = (Wheat * Quantity_of_Wheat) + (Tomato * Quantity_of_Tomato) + (Oil * Quantity_of_Oil);
    cout << "\n\nYour total bill is " << net_total << " Rupees only" << endl;

    if (net_total > 1000) {
        final_total = (net_total > 1500) ? net_total * 0.9 : net_total; 
        discount = net_total - final_total;
        shipping_fee = (final_total < 700) ? 15 : 0;
        cout << "\n\n\t\tShipping fee is: " << shipping_fee << " Rupees" << endl;
        cout << "\n\n\t\tThe discount you have received is: " << discount << " Rupees" << endl;
        total_with_shipping = final_total + shipping_fee;
        cout << "\n\n\t\tTotal amount after discount is: " << total_with_shipping << " Rupees" << endl;
    } else {
        total_with_shipping = net_total;
    }

    cout << "\n\n\t\tSelect a payment method: \n\t\t1: Debit card \n\t\t2: Jazz Cash \n\t\t3: EasyPaisa \n\t\t4: Cash" << endl;
    cout << "\n\n\t\tEnter your choice: ";
    cin >> payment_method;

    if (payment_method == 1) {
        transaction_fee = total_with_shipping * 0.02;
    } else if (payment_method == 2) {
        transaction_fee = total_with_shipping * 0.03;
    } else {
        transaction_fee = 0;
    }

    total_after_paymentmethod = total_with_shipping + transaction_fee;
    cout << "\n\n\t\tYour bill after transaction fee is: " << total_after_paymentmethod << " Rupees" << endl;

    cout << "\n\n\t\tEnter your customer type: \n\t\t1: Regular \n\t\t2: VIP" << endl;
    cout << "\n\n\t\tEnter your choice: ";
    cin >> customer_type;

    // Using a ternary operator to apply the VIP discount if customer_type is 2 (VIP)
    total_after_customer_discount = (customer_type == 2) ? total_after_paymentmethod * 0.95 : total_after_paymentmethod;    
    if (customer_type == 2) {
        int vip_discount = total_after_paymentmethod * 0.05;
        cout << "\n\n\t\tAdditional VIP discount applied: " << vip_discount << " Rupees" << endl;
    }

    cout << "\n\n\t\tFinal total amount to be paid is: " << total_after_customer_discount << " Rupees" << endl;
    cout << "\n\n\t\tEnter a coupon code (if any): ";
    cin >> coupon_code;
    int coupon_discount = (coupon_code == "SAVE10") ? 10 : 0;
    int total_after_coupon = total_after_customer_discount - coupon_discount;
    cout << "\n\n\t\tTotal after applying coupon code is: " << total_after_coupon << " Rupees" << endl;

    cout << "\n\n\t\tEnter your Location (1,2,3):\n\t\tIslamabad\n\t\tKarachi\n\t\tPeshawar\n\t\tEnter your choice: ";
    cin >> location;

    // Applying sales tax based on the region
    double tax_rate = (location == 1) ? 0.05 : (location == 2) ? 0.10 : (location == 3) ? 0.08 : 0.0;
    double total_with_tax = total_after_coupon * (1 + tax_rate);
    cout << "\n\n\t\tTotal after applying tax is: " << total_with_tax << " Rupees" << endl;

    // Order Summary at the end
    cout << "\n\n\t\t\t\tOrder Summary:" << endl;
    cout << "\n\n\t\tProduct Wheat (x" << Quantity_of_Wheat << "): " << Wheat * Quantity_of_Wheat << " Rupees" << endl;
    cout << "\n\n\t\tProduct Tomato (x" << Quantity_of_Tomato << "): " << Tomato * Quantity_of_Tomato << " Rupees" << endl;
    cout << "\n\nProduct Oil (x" << Quantity_of_Oil << "): " << Oil * Quantity_of_Oil << " Rupees" << endl;

    // Displaying Subtotal, Discount, and Final Amount after Tax
    cout << "\n\n\t\tSubtotal: " << net_total << " Rupees" << endl;
    cout << "\n\n\t\tDiscount: " << discount << " Rupees" << endl;
    cout << "\n\n\t\tShipping Fee: " << shipping_fee << " Rupees" << endl;
    cout << "\n\n\t\tCoupon Discount: " << coupon_discount << " Rupees" << endl;
    cout << "\n\n\t\tSales Tax: " << (total_with_tax - total_after_coupon) << " Rupees" << endl;
    cout << "\n\n\t\tTotal Amount to Pay: " << total_with_tax << " Rupees" << endl;

    return 0;
}
