#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
int menu();
void choice1();
void choice2();
void choice3();
void choice4();

int main()
{
	string user ;
	string pin;
    cout << "Welcome!\n\n";
    cout << "Please ecter your account number:";
    cin >> user;
    cout << "Enter your PIN:" ;
    cin >> pin;
    	if (user=="12345"&&pin=="54321")   //账号密码的验证 
		menu();
    	else
    	cout << "密码错误";
        
    int choice=menu();
    switch(choice)
    {
    	case(1):choice1();
    	break;
    	case(2):choice2();
    	break;
    	case(3):choice3();
    	break;
    	case(4):choice4();
    	break;
    }
}

int menu()
{
    	system("cls");                     //清屏 
    	int choice;
    	cout << "Main menu:" << endl;
    	cout << "\t1 - View my balance\n";
    	cout << "\t2 - Withdraw cash\n";
    	cout << "\t3 - Deposit funds\n";
    	cout << "\t4 - Exit\n";
    	cout << "Enter a choice:";
        cin >> choice;
        return choice;
}

void choice2()
{
	        system("cls");                //清屏 
    	   	cout << "Withdrawl options:\n";
    	   	cout << "\t1 - $20\t 4 - $100" << endl;
    	   	cout << "\t2 - $40\t 5 - $200" << endl;
    	   	cout << "\t3 - $60\t 6 - Cancel transaction" << endl;
    	   	cout << "Choose a withdrawal option (1-6):";
}
    
void choice1()
{
		system("cls");                //清屏 
cout << "这个页面还没有做好";
}

void choice3()
{
	system("cls");                //清屏 
cout << "这个页面还没有做好"; 
}

void choice4()
{
	system("cls");                //清屏 
cout << "这个页面还没有做好"; 
}
