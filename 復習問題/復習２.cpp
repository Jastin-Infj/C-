#include <iostream>
#include <string>
using namespace std;

void output(string, bool);

class Table
{
	string human[3];	//どの人間か？
	int money[3];			//料金
	friend class Human;	//Humanクラスにはprivateを公開させます
public:
	void data_input_Initialize();   //dataをインプットさせる	
};
void Table::data_input_Initialize()
{
	string table[3] = 
	{
		{"おとな"},
		{"こども（12歳未満）"},
		{"シニア(60歳以上)"}
	};
	for (int i = 0; i < 3; ++i)
	{
		human[i] = table[i];
	}
	
	int m[3] =
	{
		{1700},
		{700},
		{1200},
	};
	for (int i = 0; i < 3; ++i)
	{
		money[i] = m[i];
	}
}

class Human
{
	int nenrei;							//年齢
	string kubun;						//区分先
public:
	Table table;						//実体
	void Money_output(Table&);			//お金の計算をします
	void Nenrei_input();				//年齢を出力します
};
void Human::Money_output(Table& t_)
{
	//区分を設定する
	if (nenrei > 60)
	{
		kubun = t_.human[2];
		cout << t_.money[2];
	}
	else if (nenrei < 12)
	{
		kubun = t_.human[1];
		cout << t_.money[1];
	}
	else
	{
		kubun = t_.human[0];
		cout << t_.money[0];
	}
	cout << "円" << endl;
}
void Human::Nenrei_input()
{
	for (cin >> nenrei; !cin; cin >> nenrei)
	{
		cout << "入力が正しくありません" << endl;
		cin.clear(); //エラーの状態を解除する
		cin.ignore();//文字列消去
	}
}


int main()
{
	Human human;
	output("あなたは何歳ですか？ : ", false);

	//データをインプットする
	human.table.data_input_Initialize();
	//年齢をデータに格納する
	human.Nenrei_input();
	//料金を出力する
	human.Money_output(human.table);

	system("pause");
}
void output(string s_ , bool kai)
{
	if (kai)
	{
		cout << s_ << endl;
	}
	else
	{
		cout << s_;
	}
}