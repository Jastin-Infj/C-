#include <iostream>
#include <string>
using namespace std;
class Game
{
	//const string title_ = "�t�@�[�X�g�t�@���^�W�[";//�����͒�`�Ȃ̂�NG
	const string title_;
public:
	Game();
	Game(const string& title);
	void outputTitle();
};
Game::Game() {}
Game::Game(const string& title) : title_(title) {}
void Game::outputTitle()
{
	cout << title_ << endl;
}
int main()
{
	Game game("�t�@�[�X�g�t�@���^�W�[");//�Q�[���^�C�g����

	game.outputTitle();
	system("pause");
}
