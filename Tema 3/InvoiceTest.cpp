#include <iostream>
#include "Invoice.h.cpp"

using namespace std;

int main()
{
    Invoice invoice1{"SBP-2023-001","SuperBook Pro",3,200,};

    invoice1.setVax(0.15);
    invoice1.setDiscount(2.5);

    
    cout << "Part Number is: " << invoice1.getpartNumber() << " Part description is " 
       << invoice1.getDescription() << " Quantity is: " << invoice1.getQuantity() 
       << "  Price is: " << invoice1.getPrice() << " VAT is " << invoice1.getVax() 
       << " Discount is " << invoice1.getDiscount() << " Invoice amount is " <<
       invoice1.getInvoiceAmount() << endl;

    return 0;


}
   