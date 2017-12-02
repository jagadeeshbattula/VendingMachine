#include <iostream>
using namespace std;

int nickels, menu;
double dollars, change, total, purchase;
char drinks, snacks;

char drinks_menu();
char snacks_menu();
int main_menu();

void main()
{
	cout << "Welcome to UB vending machine\n";
	cout << "Enter the number of nickels you wish to insert : ";
	cin >> nickels;
	dollars = total = nickels * 0.05;
	cout << "You inserted " << total << " dollars" << endl;
	menu = main_menu();

	system("pause");
}

int main_menu()
{
	cout << "--------------------------------------------------------\n";
	cout << "MAIN MENU:\n";
	cout << "--------------------------------------------------------\n";
	cout << " [1] Drinks\n [2] Snacks\n [3] Exit\n";
	cout << "Enetr your choice <3 to exit> : ";
	cin >> menu;
	switch (menu)
	{
	case 1: drinks_menu();
		break;
	case 2: snacks_menu();
		break;
	case 3:
	{
		purchase = dollars - total;
		cout << "Inserted Amount: " << dollars << ", Total Purchase: " << purchase << ", Change: " << total << endl;
		cout << "Good Bye!" << endl;
		break;
	}
	default :
		cout << "invalid selection. exiting.\n";
	}
	return menu;
}


char drinks_menu()
{
	while (total >= 0)
	{
		cout << "--------------------------------------------------------\n";
		cout << "DRINKS MENU\n";
		cout << "--------------------------------------------------------\n";
		cout << " [W]ater $0.75\n [J]uice $0.99\n [S]oda $1.39\n";
		cout << "Select a drink by entering the character inside the brackets <X to exit to main menu>\n";
		cout << "Drink Option :";
		cin >> drinks;
		if (drinks == 'x' || drinks == 'w' || drinks == 'j' || drinks == 's' || drinks == 'X' || drinks == 'W' ||drinks == 'J' || drinks == 'S')
		{
			if (drinks == 'x' || drinks == 'X')
			{
				main_menu();
				break;
			}
			if (drinks == 'w' || drinks == 'W')
			{
				if (total >= 0.75)
				{
					total = total - 0.75;
					cout << "--------------------------------------------------------\n";
					cout << "Vending water. " << "You have " << total << " dollars left" << endl;
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy water <  " << total << " < 0.75 >" << endl;
				}
			}
			if (drinks == 'j' || drinks == 'J')
			{
				if (total >= 0.99)
				{
					total = total - 0.99;
					cout << "--------------------------------------------------------\n";
					cout << "Vending juice. " << "You have " << total << " dollars left" << endl;			
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy juice < " << total << " < 0.99 >" << endl;
				}
			}
			if (drinks == 's' || drinks == 'S')
			{
				if (total >= 1.39)
				{
					total = total - 1.39;
					cout << "--------------------------------------------------------\n";
					cout << "Vending soda. " << " You have " << total << " dollars left" << endl;
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy soda < " << total << " < 1.39 >" << endl;
				}
			}
		}
		else
		{
			cout << "--------------------------------------------------------\n";
			cout << "Invalid Option!" << endl;
			cout << "--------------------------------------------------------\n";
		}	
	}
		return drinks;
}

char snacks_menu()
{
	while (total >= 0)
	{
		cout << "--------------------------------------------------------\n";
		cout << "SNACKS MENU:\n";
		cout << "--------------------------------------------------------\n";
		cout << " [C]hips $0.99\n [P]eanuts $0.5\n [G]um $0.35\n";
		cout << "Select a snack by entering the character inside the brackets <X to exit to main menu>\n";
		cout << " Snack Option :";
		cin >> snacks;
		if (snacks == 'x' || snacks == 'c' || snacks == 'p' || snacks == 'g' || snacks == 'X' || snacks == 'C' || snacks == 'P' || snacks == 'G')
		{
			if (snacks == 'x' || snacks == 'X')
			{
				main_menu();
				break;
			}
			if (snacks == 'c' || snacks == 'C')
			{
				if (total >= 0.99)
				{
					total = total - 0.99;
					cout << "--------------------------------------------------------\n";
					cout << "Vending chips. " << " You have " << total << " dollars left" << endl;
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy chips < " << total << " < 0.99 >" << endl;
				}
			}
			if (snacks == 'p' || snacks == 'P')
			{
				if (total >= 0.50)
				{
					total = total - 0.50;
					cout << "--------------------------------------------------------\n";
					cout << "Vending peanuts. " << " You have " << total << " dollars left" << endl;
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy peanuts < " << total << " < 0.50 >" << endl;
				}
			}if (snacks == 'g' || snacks == 'G')
			{
				if (total >= 0.35)
				{
					total = total - 0.35;
					cout << "Vending gums. " << " You have " << total << " dollars left" << endl;
				}
				else
				{
					cout << "--------------------------------------------------------\n";
					cout << "You do not have enough money to buy gums < " << total << " < 0.35 >" << endl;
				}
			}
		}
		else
		{
			cout << "--------------------------------------------------------\n";
			cout << "Invalid Option!" << endl;
			cout << "--------------------------------------------------------\n";
		}
	}
	return snacks;
}


