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
	printf("��� :");
	scanf("%f", &ue);
	printf("���� :");
	scanf("%f", &kahen);
	printf("���� :");
	scanf("%f", &takasa);
}
void Math::Menseki()
{
	float total = 0;
	total = ((ue + kahen) * takasa) / 2.f;
	printf("��� %.1f ���� %.1f ���� %.1f �̑�`�̖ʐς� %.1f �ł�", ue, kahen, takasa, total);
}
int main()
{
	Math math;
	math.Input();
	math.Menseki();
	system("pause");
}