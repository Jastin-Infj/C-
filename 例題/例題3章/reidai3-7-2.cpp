#include <iostream>
#include <string>
using namespace std;
class Game
{
	//const string title_ = "ファーストファンタジー";//ここは定義なのでNG
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
	Game game("ファーストファンタジー");//ゲームタイトル名

	game.outputTitle();
	system("pause");
}
