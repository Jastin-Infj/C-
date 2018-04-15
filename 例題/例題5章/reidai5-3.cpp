#include <iostream>
using namespace std;
class Sample
{
	int v_;
public:
	void set(int v) { v_ = v; }
	void output()const { cout << v_ << endl; }
	Sample() { cout << "create" << endl; }
	~Sample() { cout << "delete" << endl; }
};
int main()
{
	Sample* master;
	Sample* shadow;

	master = new Sample; //インスタンス化
	shadow = master;     //同じ場所を指す
	master->set(100);
	shadow->output();
	delete shadow;
	system("pause");
}
//この場合メモリリークは起きない　なぜか？　同じオブジェクトを指しているから
//つまり、masterも一緒に消えているということ