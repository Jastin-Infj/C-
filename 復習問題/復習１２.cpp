#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Math
{
	float ue;
	float kahen;
	float takasa;

	void Input();
	void Menseki();
};
void Math::Input()
{
	printf("è„ï” :");
	scanf("%f", &ue);
	printf("â∫ï” :");
	scanf("%f", &kahen);
	printf("çÇÇ≥ :");
	scanf("%f", &takasa);
}
void Math::Menseki()
{
	float total = 0;
	total = ((ue + kahen) * takasa) / 2.f;
	printf("è„ï” %.1f â∫ï” %.1f çÇÇ≥ %.1f ÇÃë‰å`ÇÃñ êœÇÕ %.1f Ç≈Ç∑", ue, kahen, takasa, total);
}
int main()
{
	Math math;
	math.Input();
	math.Menseki();
	system("pause");
}