#include <iostream>
using namespace std;
class Bace
{
	int x_;
public:
	Bace(int x) : x_(x) {}
	void output()const { cout << x_ << endl; }
};
class Player : public Bace
{
public:
	Player() { cout << "Playerのコンストラクタ" << endl; }		//継承元にコンストラクタが存在しないのでエラー
	//コンストラクタを省略すると　デフォルトコンストラクタが自動的に生成されるが、引数付きなのでエラーとなる
};
int main()
{
	Player p;
	p.output();
	system("pause");
}