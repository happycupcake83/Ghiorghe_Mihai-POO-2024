#include "LoyaltyScheme.h"

ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	CreditCardAccount(long number, double limit);
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	literal System::String^ name = "Super Platinum Card";
	void RedeemLoyaltyPoints();

private:
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static double interestRate;
	static int numberOfAccounts = 0;
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
};

