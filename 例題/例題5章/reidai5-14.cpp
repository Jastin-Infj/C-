#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Sample
{
	weak_ptr<Sample> target_;
public:
	void setTarget(weak_ptr<Sample> target) { target_ = target; }
	bool checkTarget() { return !target_.expired(); }
};
shared_ptr<Sample> findTarget()
{
	//ƒ^[ƒQƒbƒg‚ğ’T‚·ŠÖ”
}
void output()
{
	typedef shared_ptr<Sample> SamplePtr;

	SamplePtr player(new Sample);
	SamplePtr enemy(new Sample);

	player->setTarget(enemy);

	enemy.reset();

	if (!player->checkTarget())
	{
		player->setTarget(findTarget()); 
	}
}
int main()
{

}