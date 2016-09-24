#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, aa, b, bb, c, cc, da, db, dc;
	cin >> a >> aa >> b >> bb >> c >> cc;
	if ((a<pow(2,32))&&(aa<pow(2,32))&&(b<pow(2,32))&&(bb<pow(2,32))&&(c<pow(2,32))&&(cc<pow(2,32)))
	{
	da = aa - a;
	db = bb - b;
	dc = cc - c;
	}
	else
	{
		cout << "Invalid" << endl;
	}
	cout << endl;
	cout << da << endl << db << endl << dc;
}
