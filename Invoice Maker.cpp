#include<iostream>
#include<string>
#include"InvoiceClass.h"

using namespace std;

int main() {
	string partNumber;
	int quantity;
	double discountPercent;
	cout << "Input Part Number" << endl;
	getline(cin, partNumber);
	cout << "\n How Many?: " << endl;
	cin >> quantity;
	cout << "\n Does the Customer get a discount? (Enter a percent in form 0.nn)" << endl;
	cin >> discountPercent;

	InvoiceClass newInvoice("null", 0);
	newInvoice.setNumber(partNumber);
	newInvoice.setQuantity(quantity);
	newInvoice.setDiscount(discountPercent);
	newInvoice.setPrice();
	newInvoice.calcTax();
	newInvoice.calcDiscAmt();
	newInvoice.calcSalePrice();


	cout << "Price of " << newInvoice.getNumber() << " is $" << newInvoice.getPrice() << endl;
	cout << "Quantity: " << newInvoice.getQuantity() << endl;
	cout << "Tax: + $" << newInvoice.getTax() << endl;
	cout << "Applied Discount: - $" << newInvoice.getDiscAmt() << endl;
	cout << "Final Sale Price: $" << newInvoice.getSalePrice() << endl;

	
	return 0;

}