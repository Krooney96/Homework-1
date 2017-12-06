//Kyle Rooney COP2000
//This program will give the user the ingredients needed to make however many pies they input.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float MALACHI_FLOUR = 15.00; //cups
	const float MALACHI_SUGAR = 8.00; //Tbsp
	const float MALACHI_SALT = 3.00; //Tbsp
	const float MALACHI_BUTTER = 5.25; //cups
	const float MALACHI_EGGS = 6.00; //large

	float pies;
	float user_flour;
	float user_sugar;
	float user_salt;
	float user_butter;
	float user_eggs;


	cout << "How many pies do you wish to make? > ";

	cin >> pies;
	user_flour = (MALACHI_FLOUR / 6) * pies;
	user_sugar = (MALACHI_SUGAR / 6) * pies;
	user_salt = (MALACHI_SALT / 6) * pies;
	user_butter = (MALACHI_BUTTER / 6) * pies;
	user_eggs = (MALACHI_EGGS / 6) * pies;

	cout << "Malachi's Pie Shop - Pie Crust Recipe\n";
	cout << "-------------------------------------\n";
	cout << "You wish to make " << pies << " pies.\n";
	cout << std::fixed << std::setprecision(2) << "Flour: " << user_flour << " cups\n";
	cout << std::fixed << std::setprecision(2) << "Sugar: " << user_sugar << " Tbsp\n";
	cout << std::fixed << std::setprecision(2) << "Salt: " << user_salt << " Tbsp\n";
	cout << std::fixed << std::setprecision(2) << "Butter: " << user_butter << " cups\n";
	cout << std::fixed << std::setprecision(2) << "Eggs: " << user_eggs << " large eggs\n";
	return 0;

}