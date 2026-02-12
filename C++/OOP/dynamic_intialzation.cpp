#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal;
    int year;
    float rate;
    float returnvalue;

public:
    BankDeposit();                    
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r); 
    void show(void);
};

void BankDeposit::show(void)
{
    cout << "THE PRINCIPAL VALUE IS " << principal
         << " FOR " << year
         << " YEARS AT RATE OF " << rate * 100
         << "% AND RETURN VALUE IS " << returnvalue << endl;
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r) / 100;
    returnvalue = principal;

    for (int i = 0; i < year; i++)
        returnvalue = returnvalue * (1 + rate);
}

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;
    returnvalue = principal;

    for (int i = 0; i < year; i++)
        returnvalue = returnvalue * (1 + rate);
}

int main()
{
    int principal, years, ratePercent;
    float rateDecimal;

    BankDeposit bd1, bd2, bd3;

    cout << "ENTER THE VALUE OF PRINCIPAL: ";
    cin >> principal;
    cout << "ENTER NUMBER OF YEARS: ";
    cin >> years;
    cout << "ENTER RATE (IN %): ";
    cin >> ratePercent;

    bd1 = BankDeposit(principal, years, ratePercent);
    bd1.show();

    cout << "\nENTER THE VALUE OF PRINCIPAL: ";
    cin >> principal;
    cout << "ENTER NUMBER OF YEARS: ";
    cin >> years;
    cout << "ENTER RATE (IN DECIMAL): ";
    cin >> rateDecimal;

    bd2 = BankDeposit(principal, years, rateDecimal);
    bd2.show();

    bd3 = BankDeposit(); 
    bd3.show();

    return 0;
}
