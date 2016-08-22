#include <iostream>

float priceOfItem();
float payFromCustomer();
void printChange(float price, float pay);

int main()
{
	float price, pay;
	price = priceOfItem();
	pay = payFromCustomer();

	printChange(price,pay);

	return 0;
}


// an dieser Stelle mal ein Kommentar.
float priceOfItem()
{
	float price;
	std::cout << "Please enter the price of the items in Dollar: "
			<< std::endl;
	std::cin >> price;
	return price;
}

float payFromCustomer()
{
	float pay;
	std::cout << "Please enter the pay from the customer in Dollar: "
			<< std::endl;
	std::cin >> pay;
	return pay;
}


void printChange(float price, float pay)
{
	float change = pay - price;
	std::cout << "The change due to the customer is: " << change << "Dollar."
			<< std::endl;

	int cents = (int) (100 * change);
	int dollars = cents/100;
	cents -= 100 * dollars;
	int quarters = (cents%100)/25;
	cents -= 25 * quarters;
	int dimes = (cents%25)/10;
	cents -= 10 * dimes;
	int nickels = (cents%10)/5;
	cents -= 5 * nickels;
	int pennies = (cents%5);

	std::cout << "To keep as much pieces of money as possible return:"
			<< std::endl
			<< dollars << "Dollars" << std::endl
			<< quarters << "Quarters" << std::endl
			<< dimes << "Dimes" << std::endl
			<< nickels << "Nickels" << std::endl
			<< pennies << "Pennies" << std::endl;
}
