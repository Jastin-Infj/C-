#include <iostream>
#include <string>
using namespace std;
class Game
{
	const string title_;
public:
	Game();
	Game(string);
	void outputTitle();
};
Game::Game() {}
Game::Game(const string& title)
{
	title_ = title;//�G���[�@const �͐錾���݂̂���������ł��Ȃ�
}
void Game::outputTitle()
{
	cout << title_ << endl;
}
int main()
{
	Game game("�t�@�[�X�g�t�@���^�W�[");//�Q�[���^�C�g����

	game.outputTitle();
}
