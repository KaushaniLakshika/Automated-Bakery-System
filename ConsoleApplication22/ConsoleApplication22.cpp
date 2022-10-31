#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <limits>

using namespace std;

// fuctional requirements
void clear() {
	system("cls");
}
void login();
void menu();
void add_packages();
void list_packages();
void search_packages();
void help();
void exit();

int main()
{
	system("color E1"); //light yello background with blue letters.
	login();
		return 0;
}
// login
void login()
{
	int times = 0;
	while (times < 5) {
		string username, password;
		cout << "\n";
		cout << "\t \t -----------------------------------------------\n";
		cout << "\n";
		cout << "\n";
		cout << "\t \t !!!!!!!!!welcome to Panaderia bakery!!!!!!!!!!";
		cout << "\n";
		cout << "\n";
		cout << "\t \t-----------------------------------------------\n";
		cout << "\n";
		cout << "\n";

		cout << "\t username: ";  // usename = PANADERIA , password = P1234
		cin >> username;
		cout << "\n";
		cout << "\t password: ";
		cin >> password;;
		cout << "\n";
		cout << "\n";

		if ((username == "PANADERIA") && (password == "P1234"))
		{
			cout << "\n";
			cout << "\n";
			cout << "\t \t------------------------------------------\n";
			cout << "\n";
			cout << "\t \t *************Login successful************ \n";
			cout << "\n";
			cout << "\t \t------------------------------------------\n";
			system("color E2");  //light yello background with green letters.
			Sleep(5000); // for pause 
			clear();
			menu();
		}
		else 
		{
			cout << "\n";
			cout << "\n";
			cout << "\t \t **************invalid login!*************\n";
			cout << "\n";
			cout << "\n";
			system("color E4");  //light yello background with red letters.
			system("pause");
			clear();
		}
		times++;
	}
	cout << "\n";
	cout << "\n";
	cout << "\t \t your 5 attempts are over!... system will shut down soon \t \t \n";

	for (int n = 5; n > 0; n--)
	{
		cout << "\t \t" << n;
		Sleep(1500);
	}
	cout << "\n";
	cout << "\n\n\n\n";
	exit(0);
}
 
// main menu
void menu()
{
	cout << "\n";
	cout << "\n";
	cout << "\t \t ==============================\n";
	cout << "\n";
	cout << "\t \t Welcome To Main Menu!!!\n";
	cout << "\n";
	cout << "\t \t ==============================\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\t 1. add packages \n";
	cout << "\t 2. list packages \n";
	cout << "\t 3. search packages \n";
	cout << "\t 4. help \n";
	cout << "\t 5. exit \n";
	cout << "\n";
	cout << "\n";

	int n;
	cout << "\t enter number \n";
	cin >> n;
	cout << "\n";

	switch (n) {
	case 1:
		clear();
		add_packages();
		break;
	case 2:
		clear();
		list_packages();
		break;
	case 3:
		clear();
		search_packages();
		break;
	case 4:
		clear();
		help();
		break;
	case 5:
		clear();
		exit();
		break;
	default:
	{
		cout << "\t\t\t" << "\t invalid input. please try again.\n" << endl;
		system("color E4"); //light yello background with red letters.
		system("pause");
		clear();
		break;
	}
	}
}

// add packages 
void add_packages()
{
	char adding[1]; //this is to get value from case 
	cin.getline(adding, 1);

	cout << "\n";
	cout << "\n";
	cout << "\t \t ***********Add Package to system************ \n";
	cout << "\n";
	cout << "\n";

	char name[25];
	cout << "\t \t package name: \n";
	cin.getline(name, 25);
	char price[10];
	cout << "\t \t price: \n";
	cin.getline(price, 10);
	char quantity[10];
	cout << "\t \t quantity: \n";
	cin.getline(quantity, 10);
	char includes[50];
	cout << "\t \t package includes: \n";
	cin.getline(includes, 50);

	ofstream input;
	input.open(name);
	input << "package name" << name << endl;
	input << "price" << price << endl;
	input << "quantity" << quantity << endl;
	input << "package include" << includes << endl;
	cout << "\n";
	cout << "\n";
	cout << "\t \t ........Successfully Added New Package........ \n \n";
	system("pause");
	Sleep(1500);
	input.close();
	clear();
}

// list packages
void list_packages()
{
	cout << "\n";
	cout << "\n";
	cout << "\t \t ***********Available Packgaes************ \n";
	cout << "\n";
	cout << "\n";

	cout << "\t \t 1. family packs\n";
	cout << "\t \t 2. birthday packs \n";
	cout << "\t \t 3. party packs \n";
	cout << "\t \t 4. cakes \n";
	cout << "\t \t 5. beverages \n";
	cout << "\t \t 6. exit \n";
	cout << "\n";
	cout << "\n";

	system("color E9");
	system("pause");
	clear();
	menu();
}

// search packages
void search_packages()
{
	cout << "\n";
	cout << "\n";
	cout << "\t \t ***********Search Packgaes************ \n";
	cout << "\n";
	cout << "\n";

	cout << "\t \t 1. family packs\n";
	cout << "\t \t 2. birthday packs \n";
	cout << "\t \t 3. party packs \n";
	cout << "\t \t 4. cakes \n";
	cout << "\t \t 5. beverages \n";
	cout << "\t \t 6. exit \n";
	cout << "\n";
	cout << "\n";

	int option;
	cout << "\n";
	cout << "\n";
	cout << "\t choose your option:  \n";
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******FAMILY PACKS****** \n";
		cout << "\t 1. 4 egg rolls \n";
		cout << "\t 2. 4 potions \n";
		cout << "\t 3. 4 sandwiches \n";
		cout << "\t 4. 4 milk shakes \n";
		cout << "\t ****Just Rs.1000 Only****\n";
		system("pause");
		clear();
		search_packages();
		break;
	case 2:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******BIRTHDAY PACKS****** \n";
		cout << "\t 1. 50 sandwiches \n";
		cout << "\t 2. 50 cupcakes \n";
		cout << "\t 3. designed cake \n";
		cout << "\t ****Just Rs.7500 Only****\n";
		system("pause");
		clear();
		search_packages();
		break;
	case 3:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******PARTY PACKS****** \n";
		cout << "\t 1. 50 cutlets \n";
		cout << "\t 2. 50 cupcakes \n";
		cout << "\t 3. savory bites for 50 \n";
		cout << "\t ****Just Rs.7000 Only****\n";
		system("pause");
		clear();
		search_packages();
		break;
	case 4:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******CAKES****** \n";
		cout << "\t 1. butter cake 1kg     Rs.680\n";
		cout << "\t 2. chocolate cake 1kg     Rs.850 \n";
		cout << "\t 3. cheese cake 1kg     Rs.1900 \n";
		cout << "\t 4. mud cake 1kg    Rs.2500\n";
		system("pause");
		clear();
		search_packages();
		break;
	case 5:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******BEVERAGES****** \n";
		cout << "\t 1. faluda     Rs.180\n";
		cout << "\t 2. milk shake     Rs.150 \n";
		cout << "\t 3. orange juice     Rs.120 \n";
		cout << "\t 4. hot chocolate     Rs.250\n";
		system("pause");
	case 6:
		clear();
		menu();
	default:
		cout << "\n";
		cout << "\n";
		cout << "\t \t ******sorry! there is not available****** \n";
		cout << "\n";
		cout << "\n";
		system("color E4"); //light yello background with red letters.
		system("pause");
		clear();
		search_packages();
		break;	
	}
}

// help 
void help()
{
	cout << "\n";
	cout << "\n";
	cout << "\t \t ***********Help Menu************ \n";
	cout << "\n";
	cout << "\n";

	cout << "\n";
	cout << "\n";
	cout << "\t \t ******we're here to help choose your option****** \n";
	cout << "\n";
	cout << "\t 1. go to main menu \n";
	cout << "\t 2. add packgaes \n";
	cout << "\t 3. list packages \n";
	cout << "\t 4. search packages \n";
	cout << "\t 5. view our guidlines \n";
	cout << "\t 6. exit from the system \n";

	char M;
	cout << "\n";
	cout << "\n";
	cout << "\t ***press M to move back to the main menu*** \n";
	cin >> M;
	if (M == 'M' || M == 'm')
	{
		clear();
		system("cls");
		menu();
	}
	else 
	{
		clear();
		cout << "\n";
		cout << "\n";
		cout << "\t \t ***invalid input...please try again!*** \n";
		system("color E4"); //light yello background with red letters.
		system("pause");
		help();
	}
}

// exit 
void exit()
{
	cout << "\n";
	cout << "\n";
	cout << "\t \t ***********Exit from the system************ \n";
	cout << "\n";
	cout << "\n";

	char answer;
	cout << "\t *Are you sure want to exit from this system? \n";
	cout << "\n";
	cout << "\t (Enter Y to exit from the system or M to move back to main menu.) \n";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
	{
		clear();
		exit(0);
	}
	else if (answer == 'M' || answer == 'm')
	{
		clear();
		system("cls");
		menu();
	}
	else
	{
		clear();
		cout << "\t Invalid input... please try again! \n";
		system("color E4"); //light yello background with red letters.
		exit(0);
	}

}