#ifndef BANKACCOUNT
#define BANKACCOUNT
#include "BankAccount.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class BankAccount
{
private:
	std::string m_name;
	int m_acctNum;
	double m_balance;
	int m_socialNum;
public:
	//Functions
	void showAcctInfo();

	//constructors
	BankAccount();
	BankAccount(std::string userName, int accNum, double balance, int socialNum);

	//data save
	std::string saveUser();
	int saveAccNum();
	double saveBalance();
	int saveSocial();
};
void passwordFunction();
void printMenu();
void saveData(std::vector <BankAccount> &usersList);
void loadData(std::vector <BankAccount> &usersList, std::string &userName, int &accNum, int &socialNum, double &balance);
bool is_file_exist(std::string fileName);

#endif