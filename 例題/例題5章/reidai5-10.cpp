#include <iostream>
#include <memory>
using namespace std;
class Sample
{
	int v;
public:
	Sample(int v_) : v(v_) { cout << "create2" << endl; }
	~Sample() { cout << "delete" << endl; }
	void output()const { cout << v << endl; }
};
void output()
{
	shared_ptr<Sample> master(new Sample(20));
	//typedef shared_ptr<Sample> SamplePtr;
	using SamplePtr = shared_ptr<Sample>;
	SamplePtr shadow(new Sample(200));

	//|------------------------------------------------------------------|//
	//|masterが上書きされ、参照カウンタが０になり、デストラクタが呼ばれる|//
	//|__________________________________________________________________|//

	master = shadow; //アドレス値を変更する			//メモリリークが起きてしまう
	master->output();
}
int main()
{
	output();
	system("pause");
	return 0;
}