
#include <iostream>
#include <windows.h>
#define size 10000
using namespace std;

int front = -1, rear = -1;
float amount[3] = {};	/// Number of cars cost[0]={2}; cost[1] = {0};  cost[2] = {0};

/// Struct is a class also an array
struct TollRecord
{
	string date = "";
	int carnum = 0;	///for searching purpose
	string ticketnum = "";
}tr[size];

void Information_store()
{
	cout << "                       ========================================================================" << endl;
	cout << "                       ||     Enter Date, Car Number &Ticket Number for Store Toll Record    ||" << endl;
	cout << "                       ========================================================================" << endl;
	rear++;	/// start store value in index no.0
	cout << "                                            ------------------------------------" << endl;
	cout << "                                            |     Enter Today's Date :         |" << endl;
	cout << "                                            ------------------------------------" << endl;
	cout << "                                                          ";
	cin >> tr[rear].date;	/// take input in the sub position of the rear position of the array
	cout << "                                            ------------------------------------" << endl;
	cout << "                                            |     Enter Car Number:            |" << endl;
	cout << "                                            ------------------------------------" << endl;
	cout << "                                                          ";
	cin >> tr[rear].carnum;
	cout << "                                            ------------------------------------" << endl;
	cout << "                                            |     Enter Ticket Number:         |" << endl;
	cout << "                                            ------------------------------------" << endl;
	cout << "                                                          ";
	cin >> tr[rear].ticketnum;

	int select;
	cout << "                                              ******************************" << endl;
	cout << "                                              *       1.Heavy Duty         *" << endl;
	cout << "                                              *       2.Medium Duty        *" << endl;
	cout << "                                              *       3.Light Duty         *" << endl;
	cout << "                                              ******************************" << endl;

	cout << "                            ==================================================================" << endl;
	cout << "                            ||      Where Are You Want Store Data? Choose Any Option(1-3)   ||" << endl;
	cout << "                            ==================================================================" << endl;
	cout << "                                                             ";
	cin >> select;
	switch (select)
	{
		case 1:
			{
				amount[0]++;
				break;
			}	/// Storing how many Heavy cars has been passed
		case 2:
			{
				amount[1]++;;
				break;
			}	/// Storing how many Heavy cars has been passed
		case 3:
			{
				amount[2]++;;
				break;
			}	/// Storing how many Heavy cars has been passed
		default:
			{
				cout << "Wrong Option Select! Please select right option between one to three.";
				break;
			}
	}

}

void searching_carInfo(int carnum)
{
	for (int i = 0; i < size; i++)
	{
		if (tr[i].carnum == (carnum))
		{
			cout << "                                                ----------------------------" << endl;
			cout << "                                                |        Date:             |" << endl;
			cout << "                                                ----------------------------" << endl;
			cout << "                                                           ";
			cout << tr[i].date << endl;
			cout << "                                                ----------------------------" << endl;
			cout << "                                                |    Ticket Number:        |" << endl;
			cout << "                                                ----------------------------" << endl;
			cout << "                                                            ";
			cout << tr[i].date << endl;

			break;
		}
		else
		{
			cout << "                            ========================================================================" << endl;
			cout << "                            ||        Wrong Car Number Dialed! Please Enter Correct Number.       ||" << endl;
			cout << "                            ========================================================================" << endl;
			break;
		}
	}
}

void Total_Earning()
{
	cout << "                                         =============================================" << endl;
	cout << "                                         |       Par Day Earning All Counter:        |" << endl;
	cout << "                                         =============================================" << endl;
	cout << "                                               Heavy Duty Counter = " << (700 *amount[0]) << endl;
	cout << "                                         ---------------------------------------------" << endl;
	cout << "                                               Medium Duty Counter = " << (400 *amount[1]) << endl;
	cout << "                                         ---------------------------------------------" << endl;
	cout << "                                               Light Duty Counter = " << (200 *amount[2]) << endl;
	cout << "                                         ---------------------------------------------" << endl;
	cout << "                                         =============================================" << endl;
	cout << "                                               Total Cost Per day = " << ((700 *amount[0]) + (400 *amount[1]) + (200 *amount[2])) << endl;
	cout << "                                         =============================================" << endl;
}

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"       ============================================================================================================="<<endl;
    cout<<"       ============================================================================================================="<<endl;
    cout<<"       ||                                        TOLL MANAGEMENT SYSTEM                                           ||"<<endl;
    cout<<"       ============================================================================================================="<<endl;
    cout<<"       ============================================================================================================="<<endl;
    cout<<endl<<endl<<endl;
    cout<<R"(
                                                                                _________________________
                                           /\\      _____          _____       |   |     |     |    | |  \
                            ,-----,       /  \\____/__|__\_    ___/__|__\___   |___|_____|_____|____|_|___\
                        ,--'---:---`--, /  |  _     |     `| |      |      `| |                    | |    \
                        ==(o)-----(o)==J    `(o)-------(o)=   `(o)------(o)'   `--(o)(o)--------------(o)--'
                        `````````````````````````````````````````````````````````````````````````````````````
             )"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	int choose = 0;
	do {
		Information_store();
		cout << endl << endl;
		cout << "                                        =============================================" << endl;
		cout << "                                        |         Press 0 for Exit                  |" << endl;
		cout << "                                        |         Press 1 For Run again             |" << endl;
		cout << "                                        =============================================" << endl;
		cout << "                                                      Select Option: " << endl;
		cout << "                                                            ";
		cin >> choose;
		cout << endl;
		cout << endl;

	} while (choose == 1);

	cout << "                          ========================================================================" << endl;
	cout << "                          |          Input Car Number for Searching Any Car Information          |" << endl;
	cout << "                          ========================================================================" << endl;
	cout << "                                                              ";
	int search;
	cin >> search;
	cout << "                                        ==============================================" << endl;
	cout << "                                        |      please wait,Searching............     |" << endl;
	cout << "                                        ==============================================" << endl;

	searching_carInfo(search);
	Total_Earning();

	return 0;
}
