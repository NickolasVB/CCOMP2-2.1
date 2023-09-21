#include <iostream>
#include <string>

class Invoice {
public:
    Invoice(std::string InvoicePn, std::string InvoicePd, int Invoiceqt, int Invoicepr) 
            : partNumber{InvoicePn}, Description{InvoicePd}, quantity{Invoiceqt}, price{Invoicepr},
            vax{0.2}, discount{0} {
    }

    void setpartNumber(std::string InvoicePn) {
        partNumber = InvoicePn;
    }
    void setDescription(std::string InvoicePd) {
        Description = InvoicePd;
    }
    void setQuantity(int Invoiceqt){
        if (Invoiceqt > 0) {
            quantity = Invoiceqt;
        }
    }
    void setPrice(int Invoicepr){
        if (Invoicepr > 0) {
            price = Invoicepr;
        }
    }
    void setVax(double vx){
        if (vx > 0){
            vax = vx;
        }
    }
    void setDiscount(double dc){
        if (dc > 0){
            discount = dc;
        }
    }
    std::string getpartNumber() const {
        return partNumber;
    }
    std::string getDescription() const {
        return Description;
    }
    int getQuantity() const {
        return quantity;
    }
    int getPrice() const {
        return price;
    }
    double getVax() const {
        return vax;
    }
    double getDiscount() const {
        return discount;
    }
    double getInvoiceAmount() const {
        return (quantity * price);
    }

private:
    std::string partNumber;
    std::string Description;
    int quantity;
    int price;
    double vax;
    double discount;

};