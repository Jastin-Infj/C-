#include <iostream>
using namespace std;

//C++11�̋@�\

/*
�� �v���g�^�C�v�錾�Ɏg�p���邱�Ƃł���B��Ɋ֐��̃t�b�N�ȂǂŖ��ɗ���
*/

/*
�� �֐��̖߂�l�̌^�𓾂邱�Ƃ��ł���
decltype(dosomething())result;
*/

int dosomething(int);
double dosomething(double);
decltype(dosomething(1))n; // n is int
decltype(dosomething(1.0))df;// df is double

/*
std::declval�Ƒg�ݍ��킹��SFINAE����������
*/
class hoge {};
class hage {};
class huge {};
class hige {};
hoge dosomething(hage);
huge dosomething(hige);
decltype(dosomething(declval<hage>()))abc;//abc = hog
decltype(dosomething(declval<hige>()))xyz;//xyz = hug

/*
��������^��ǂݎ��݂����Ȋ����H
*/
int main()
{

}