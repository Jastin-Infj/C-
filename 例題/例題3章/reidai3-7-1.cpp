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
	title_ = title;//エラー　const は宣言時のみしか代入ができない
}
void Game::outputTitle()
{
	cout << title_ << endl;
}
int main()
{
	Game game("ファーストファンタジー");//ゲームタイトル名

	game.outputTitle();
}
