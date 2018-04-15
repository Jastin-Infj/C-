#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//ifstream ����
void reidai1_9()
{
	ifstream f("data.bin");						//���͐�p �t�@�C�����J��
	while (!f.eof())
	{
		string ope;
		int value;
		f >> ope >> value;
		cout << ope << " " << value << endl;
	}
}

//ifstream�@�ǂݍ���
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
	v.push_back(1);//0�Ԓn�ɒǉ�
	v.push_back(2);//��ԍŌ�ɒǉ��������������@�ˁ@1�Ԓn
	v.push_back(6);//��ԍŌ�ɒǉ��������������@�ˁ@2�Ԓn
	v.push_back(4);//3�Ԓn
	v.push_back(3);//4�Ԓn

	for (size_t i = 0; i < v.size();++i)//v.size()�@�v�f���̃T�C�Y�܂Ł@���̎��ɃA�h���X�l���w���Ă���̂�[5]�Ԓn
	{
		cout << v[i] << endl;
	}
}

//�C�e���[�^ vector�̎w���Ă���ꏊ��\���@����t���邱�ƂŒ��g���擾�ł���
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

	//NG end()�Ŏ擾�����C�e���[�^�̗v�f�͎擾�ł��Ȃ�

	//vector<int>::iterator it = v.end();
	//cout << it << endl;		//�R���p�C���G���[
	//cout << *it << endl;	//�r���h�͒ʂ邪exe�Œ��~�����
}

//�v�f������
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

//remove_if�̎g�p���
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

//�Q�Ɠn���ƃ|�C���^�n��
void reidai1_16_kiso()
{
	int a = 10;
	int& b = a;	//a�̕ʖ�b�𐶐�����
	//int& c; //�G���[�@�Q�Ƃ͐錾���ɕK���Q�Ɛ�𖾎�����
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
void reidai1_16_CPras_Func(const Player& player)//�R�s�[�R���X�g���N�^���̗p���Ȃ��ꍇ�́@const���g���Ȃ�
{
	cout << player.px << endl;
}
void reidai1_16_add1(int v)
{
	v += 10;
}
void reidai1_16_add2(int* v)
{
	(*v) += 10;//Player�Ƃ͈�؋L�q�����Ă��Ȃ��̂Ł@this->�ł͕\�L����Ȃ�
}
void reidai1_16_add3(int& v)
{
	v += 10;
}
void reidai1_16()
{
	int v;
	//���̂œn��
	v = 0;
	reidai1_16_add1(v);
	cout << v << endl;

	//�|�C���^�œn��
	v = 0;
	reidai1_16_add2(&v);
	cout << v << endl;

	//�Q�Ƃ�����
	v = 0;
	reidai1_16_add3(v);
	cout << v << endl;

	reidai1_16_C_Func(&player);	  //C����\�L
	reidai1_16_CPras_Func(player);//C++�\�L
}

//�֐��̃I�[�o�[���[�h�@C++�ł͓����֐����ň����̌^��߂�l���قȂ�֐����쐬�ł���
//���P�V�͊����@�m���Ă��̂�

//�I�y���[�^�̃I�[�o�[���[�h�@
//�ˁ@���Z�q��\���A�ӂ�܂����`�����邱�Ƃ��ł��܂��B����̌^���܂߂����Z�q����`�ł���
struct Point
{
	float px , py;
};
Point operator+(const Point& a, const Point& b)//�R�s�[�R���X�g���N�^�͂Ȃ�
{
	Point r;
	r.px = a.px + b.px;
	r.py = a.py + b.py;
	return r;
}
/*int operator+(const int a, const int b)
{
	return a - b;//int���m�̑����Z���A�����Z�ɂ��悤�Ƃ��Ă���
}*/
void reidai1_19()
{
  Point a = { 1.0f , 3.0f },
		b = { 4.0f , 1.0f },
		r;
  r = a + b;//���i�ł͂����̌v�Z���o���Ȃ����I�y���[�^��ǉ����邱�ƂŌv�Z���ł���
  cout << r.px <<"   "<< r.py << endl;
}

//range based for��
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
//auto range based for���𗘗p���@
void reidai1_21()
{
	auto i = 10;//i��int�^
	auto p = &i;//i��int*�^
	auto s = "������";//s��char const*�^(std::string�ł͂Ȃ�)

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(6);
	v.push_back(4);
	v.push_back(3);
	//auto�Ō^���_���Ă���
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
	//�Y�����ɒ���
	tbl["fighter"] = 10;//�I�y���[�^�����邩��@���@���g����H
	tbl["knight"]  = 10;
	//�C�e���[�^���[�v
	for (map<string, int>::iterator it = tbl.begin(); it != tbl.end(); ++it)
	{
		cout << it->first << ":" << it->second << endl;
	}
}
//map�̃\�[�g
void reidai1_23()
{
	map<float, string> data;
	for (int i = 0; i < 5; ++i)
	{
		float a;
		string s;
		cin >> a >> s;
		data[a] = s;//�I�y���[�^��������̂ŏ�肭�����H
	}
	for (map<float, string>::iterator it = data.begin(); it != data.end(); ++it)
	{
		cout << it->first << "  " << it->second << endl;
	}
}
//static_cast(�ÓI�L���X�g)
void reidai1_24()
{
	int i = 10;
	char c = static_cast<char>(i);//�傫�ȃT�C�Y�@�ˁ@�������T�C�Y�ɃL���X�g

	double d = 10.0;
	void* p = &d;
	//double* d = static_cast<double*>(p);//void* �ˁ@double*�ɃL���X�g����

	//int* i = static_cast<int*>(p);//double�^(&d)�ł͂Ȃ����@�L���X�g���o���Ă��܂�
}
//reinterpret_cast(�ĉ��߃L���X�g)
void reidai1_25()
{
	int a[] = { 0x52535455 , 0x31323330,0 };
	char* c = reinterpret_cast<char*>(a);//��������̃r�b�g�p�^�[�������̂܂ܕϊ���̕ϐ��֑�����Ȃ����܂��BC����X�^�C���̃L���X�g
	puts(c);
}
//new malloc�ł�

//new �ˁ@�t���[�X�g�A�̈�
//malloc() �ˁ@�q�[�v�̈�

//template�͊���
int main()
{
	void(*Func)();
	Func = reidai1_25;
	Func();
	system("pause");
}