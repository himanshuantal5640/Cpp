dr
Dr. Vignesh R
7:16 PM
// You are using GCC
#include <iostream>
using namespace std;

class AddAmountBase
{
protected:
int amount;

public:
AddAmountBase()
{
amount = 50;
}
};

class AddAmount : public AddAmountBase
{
public:
AddAmount()
{
amount = 50;
}
AddAmount(int amt)
{
amount=amount+amt;
}
void print_amount()
{
cout << amount << endl;
}
};

int main()
{
AddAmount a1;
int amt;
cin >> amt;
AddAmount a2(amt);
a2.print_amount();
return 0;
}