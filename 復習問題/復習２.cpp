#include <iostream>
#include <string>
using namespace std;

void output(string, bool);

class Table
{
	string human[3];	//�ǂ̐l�Ԃ��H
	int money[3];			//����
	friend class Human;	//Human�N���X�ɂ�private�����J�����܂�
public:
	void data_input_Initialize();   //data���C���v�b�g������	
};
void Table::data_input_Initialize()
{
	string table[3] = 
	{
		{"���Ƃ�"},
		{"���ǂ��i12�Ζ����j"},
		{"�V�j�A(60�Έȏ�)"}
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
	int nenrei;							//�N��
	string kubun;						//�敪��
public:
	Table table;						//����
	void Money_output(Table&);			//�����̌v�Z�����܂�
	void Nenrei_input();				//�N����o�͂��܂�
};
void Human::Money_output(Table& t_)
{
	//�敪��ݒ肷��
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
	cout << "�~" << endl;
}
void Human::Nenrei_input()
{
	for (cin >> nenrei; !cin; cin >> nenrei)
	{
		cout << "���͂�����������܂���" << endl;
		cin.clear(); //�G���[�̏�Ԃ���������
		cin.ignore();//���������
	}
}


int main()
{
	Human human;
	output("���Ȃ��͉��΂ł����H : ", false);

	//�f�[�^���C���v�b�g����
	human.table.data_input_Initialize();
	//�N����f�[�^�Ɋi�[����
	human.Nenrei_input();
	//�������o�͂���
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