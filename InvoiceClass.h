#pragma once
#include<iostream>
#include<string>
using namespace std;


class InvoiceClass
{
public:
	InvoiceClass(string defaultPartNumber, int defaultQuantity) {
		setNumber(defaultPartNumber);
		setQuantity(defaultQuantity);
		setDiscount(0.00);

	}


	void setNumber(string partNum) {
		number = partNum;
		}
	string getNumber() {
		return number;
		}


	void setDiscount(double disc) {
		discount = disc;
	}
	double getDiscount() {
		return discount;
	}


	void setQuantity(int quantity) {
		qty = quantity;
	}
	int getQuantity() {
		return qty;
	}

	void setPrice() {
		alternator = "103B";
		waterPump = "102A";

		if ( number == waterPump ) {
			price = 50.0;

		}
		if (number == alternator) {
			price = 100.0;
		}
		
	}

	double getPrice() {
		return price;
	}


	void calcTax() {
		Tax = price * qty * 0.0625;

	}
	double getTax() {
		return Tax;
	}


	void calcDiscAmt() {
		DiscAmt = price * qty * discount;
	}
	double getDiscAmt() {
		return DiscAmt;
	}


	void calcSalePrice() {
		salePrice = (price*qty) + Tax - DiscAmt;
	}
	double getSalePrice() {
		return salePrice;
	}

	
private:
	string number;
	string alternator;
	string waterPump;
	int qty{ 0 };
	double salePrice{ 0.0 };
	double Tax{ 0.0 };
	double discount{ 0.0 };
	double price{ 0.0 };
	double DiscAmt{ 0.0 };
	
	




};

