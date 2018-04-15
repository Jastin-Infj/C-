#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//ifstream 入力
void reidai1_9()
{
	ifstream f("data.bin");						//入力専用 ファイルを開く
	while (!f.eof())
	{
		string ope;
		int value;
		f >> ope >> value;
		cout << ope << " " << value << endl;
	}
}

//ifstream　読み込み
void reidai1_10()
{
	struct Chara
	{
		int px, py, sx, sy;
	}ch;

	ifstream f("data_gaiyou2.bin");
	while (!f.eof())
	{
		string commnd;
		f >> commnd;
		if (commnd == "pos")
		{
			f >> ch.px >> ch.py;
			cout << commnd<< " " << ch.px<< " " << ch.py << endl;
		}
		else if (commnd == "size")
		{
			f >> ch.sx >> ch.sy;
			cout << commnd << " " << ch.sx << " " << ch.sy << endl;
		}
	}
}

//vector

void reidai1_11()
{
	vector<int> v;
	v.push_back(1);//0番地に追加
	v.push_back(2);//一番最後に追加する特性がある　⇒　1番地
	v.push_back(6);//一番最後に追加する特性がある　⇒　2番地
	v.push_back(4);//3番地
	v.push_back(3);//4番地

	for (size_t i = 0; i < v.size();++i)//v.size()　要素数のサイズまで　この時にアドレス値が指しているのは[5]番地
	{
		cout << v[i] << endl;
	}
}

//イテレータ vectorの指している場所を表す　＊を付けることで中身を取得できる
void reidai1_12()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(6);
	v.push_back(4);
	v.push_back(3);

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}

	//NG end()で取得したイテレータの要素は取得できない

	//vector<int>::iterator it = v.end();
	//cout << it << endl;		//コンパイルエラー
	//cout << *it << endl;	//ビルドは通るがexeで中止される
}

//要素消去例
void reidai1_14()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);

	for (vector<int>::iterator it = v.begin(); it != v.end();)
	{
		if ((*it) == 4)
		{
			it = v.erase(it);
		}
		else
		{
			++it;
		}
		cout << *it << endl;
	}
}

//remove_ifの使用例題
void reidai1_15_output(int v)
{
	cout << v << endl;
}
bool reidai1_15_judge(int v)
{
	return v == 4;
}
void reidai1_15()
{
	vector<int> v = { 2,4,5,3,2,3,4,5,6,7,8,4,4,4,3,5,6 };

	v.erase(remove_if(v.begin(), v.end(), reidai1_15_judge),v.end());
	for_each(v.begin(), v.end(), reidai1_15_output);
}

//参照渡しとポインタ渡し
void reidai1_16_kiso()
{
	int a = 10;
	int& b = a;	//aの別名bを生成する
	//int& c; //エラー　参照は宣言時に必ず参照先を明示する
}
struct Player
{
	int px = 0;
	int py = 0;
}player;
void reidai1_16_C_Func(const Player* player)
{
	cout << player->px << endl;
}
void reidai1_16_CPras_Func(const Player& player)//コピーコンストラクタを採用しない場合は　constを使えない
{
	cout << player.px << endl;
}
void reidai1_16_add1(int v)
{
	v += 10;
}
void reidai1_16_add2(int* v)
{
	(*v) += 10;//Playerとは一切記述をしていないので　this->では表記されない
}
void reidai1_16_add3(int& v)
{
	v += 10;
}
void reidai1_16()
{
	int v;
	//実体で渡す
	v = 0;
	reidai1_16_add1(v);
	cout << v << endl;

	//ポインタで渡す
	v = 0;
	reidai1_16_add2(&v);
	cout << v << endl;

	//参照させる
	v = 0;
	reidai1_16_add3(v);
	cout << v << endl;

	reidai1_16_C_Func(&player);	  //C言語表記
	reidai1_16_CPras_Func(player);//C++表記
}

//関数のオーバーロード　C++では同じ関数名で引数の型や戻り値が異なる関数を作成できる
//例題１７は割愛　知ってたので

//オペレータのオーバーロード　
//⇒　演算子を表し、ふるまいを定義させることができます。自作の型も含めた演算子も定義できる
struct Point
{
	float px , py;
};
Point operator+(const Point& a, const Point& b)//コピーコンストラクタはなし
{
	Point r;
	r.px = a.px + b.px;
	r.py = a.py + b.py;
	return r;
}
/*int operator+(const int a, const int b)
{
	return a - b;//int同士の足し算を、引き算にしようとしている
}*/
void reidai1_19()
{
  Point a = { 1.0f , 3.0f },
		b = { 4.0f , 1.0f },
		r;
  r = a + b;//普段ではここの計算が出来ないがオペレータを追加することで計算ができる
  cout << r.px <<"   "<< r.py << endl;
}

//range based for文
void reidai1_20()
{
	vector<int> v;
	int t = 0;
	v.push_back(10);
	v.push_back(55);
	for (int i : v)
	{
		t += i;
		cout << t << endl;
	}
	//std::vector<int> v;

	//for (std::vector<int>::const_iterator it = v.begin(), e = v.end(); it != e; ++it) {
		//std::cout << *it << std::endl;
	//}
}
//auto range based for文を利用方法
void reidai1_21()
{
	auto i = 10;//iはint型
	auto p = &i;//iはint*型
	auto s = "文字列";//sはchar const*型(std::stringではない)

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(6);
	v.push_back(4);
	v.push_back(3);
	//autoで型推論している
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
}
//<map>
void reidai1_22()
{
	map<string, int> tbl;
	cout << sizeof(tbl) << endl;//12byte
	//添え字に注目
	tbl["fighter"] = 10;//オペレータがあるから　＝　が使える？
	tbl["knight"]  = 10;
	//イテレータループ
	for (map<string, int>::iterator it = tbl.begin(); it != tbl.end(); ++it)
	{
		cout << it->first << ":" << it->second << endl;
	}
}
//mapのソート
void reidai1_23()
{
	map<float, string> data;
	for (int i = 0; i < 5; ++i)
	{
		float a;
		string s;
		cin >> a >> s;
		data[a] = s;//オペレータ＝があるので上手くいく？
	}
	for (map<float, string>::iterator it = data.begin(); it != data.end(); ++it)
	{
		cout << it->first << "  " << it->second << endl;
	}
}
//static_cast(静的キャスト)
void reidai1_24()
{
	int i = 10;
	char c = static_cast<char>(i);//大きなサイズ　⇒　小さいサイズにキャスト

	double d = 10.0;
	void* p = &d;
	//double* d = static_cast<double*>(p);//void* ⇒　double*にキャストする

	//int* i = static_cast<int*>(p);//double型(&d)ではないが　キャストが出来てしまう
}
//reinterpret_cast(再解釈キャスト)
void reidai1_25()
{
	int a[] = { 0x52535455 , 0x31323330,0 };
	char* c = reinterpret_cast<char*>(a);//メモリ上のビットパターンをそのまま変換先の変数へ代入しなおします。C言語スタイルのキャスト
	puts(c);
}
//new mallocでは

//new ⇒　フリーストア領域
//malloc() ⇒　ヒープ領域

//templateは割愛
int main()
{
	void(*Func)();
	Func = reidai1_25;
	Func();
	system("pause");
}