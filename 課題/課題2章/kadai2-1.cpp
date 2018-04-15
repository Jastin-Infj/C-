#include <iostream>
#include "kadai2-1.h"
using namespace std;
Wallet::Wallet(int value = 0)
{
	momey = value;
}
Wallet::~Wallet()
{

}
void Wallet::receive(int value)
{
	momey += value;
}
void Wallet::payment(int value)
{
	momey -= value;
}
int Wallet::yen()
{
	return momey;
}
int main()
{
	Wallet wallet(50);
	wallet.receive(100);
	wallet.payment(20);
	cout << "à•z‚ÌŽc‚: " << wallet.yen() << "‰~" <<endl;
	system("pause");
	return 0;
}