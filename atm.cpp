#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

int main()
{
	string user ;
	string pin;
    cout << "Welcome!\n\n";
    cout << "Please ecter your account number:";
    cin >> user;
    cout << "Enter your PIN:" ;
    cin >> pin;
    	if (user=="12345"&&pin=="54321")   //�˺��������֤ 
    	{
    	system("cls");                     //���� 
    	cout << "Main menu:" << endl;
    	cout << "\t1 - View my balance\n";
    	cout << "\t2 - Withdraw cash\n";
    	cout << "\t3 - Deposit funds\n";
    	cout << "\t4 - Exit\n";
    	cout << "Enter a choice:";
    	    	int select;                        //��һ���˵���ѡ�� 
    	cin >> select;
    		switch(select)
    		{
    			case 1:
    				system("cls");                //���� 
    	    		cout << "Withdrawl options:\n";
    	    		cout << "\t1 - $20\t4 - $100" << endl;
    	    		cout << "\t2 - $40\t5 - $200" << endl;
    	    		cout << "\t3 - $60\t6 - Cancel transaction" << endl;
    	    		cout << "Choose a withdrawal option (1-6):";
    		}
    	} 
    	else
    	cout << "�������";
} 

