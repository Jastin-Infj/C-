#pragma once
class Wallet
{
private:
	int momey;
public:
	Wallet(int value);
	~Wallet();
	void receive(int value);
	void payment(int value);
	int yen();
};