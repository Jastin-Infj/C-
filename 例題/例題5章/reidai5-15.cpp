#include <iostream>
#include <memory>
using namespace std;

//|--------------------------------------------------|//
//|コピーさせたくないオブジェクトを生成する場合に使用|//
//|__________________________________________________|//

class Sample
{
	int v_;
public:
	void output()const { cout << v_ << endl; }
	Sample(int v) : v_(v) { cout << "create" << endl; }
	~Sample() { cout << "delete" << endl; }
};
//引数の＆を取るとコピーになるのでコンパイルエラーとなる
void func(const std::unique_ptr<Sample>& n)
{
	n->output();
}
void output()
{
	unique_ptr<Sample> n(new Sample(100));
	//std::unique_ptr<Sample> s = n; //コピーが出来ない
	func(n);

	///他で宣言したものが入れられるが、デストラクタで不具合が発生する
	Sample master(100);
	unique_ptr<Sample> n(&master);
}

int main()
{
	output();
	system("pause");
}
