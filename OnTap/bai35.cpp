#include <bits/stdc++.h>


using namespace std;

int count(int month, int year)
{
    //feb
	if( month == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))
			return 29;
		else
			return 28;
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month==12)
		return 31;
	else
		return 30;
}

int leap(int m, int y) {
    int l;
    if (m <= 2) l = floor((y-1)/4) - floor((y-1)/100) + floor((y-1)/400);
    else l = floor(y/4) - floor(y/100) + floor(y/400);
    return l;}



int main()
{
    int d, m, y;
    int y2;
    int l;
    int day = 0;
    int day1 = 0;
    cin >> d >> m >> y >> y2;
    l = leap(m, y);
    for (long long i = 1; i < m; i += 1) {
        day += count(i, y);}
    day += (y - 1) * 365 + l + d;
    day1 = (y2 - 1) * 365 + leap(1, y2);
    cout << day1 << " " << day << "\n";
    int dif = day1- day;
    int c1 = 621,c2 = 297, c3 = 759;
    cout << dif << "\n";
    cout << c1 << " " << c2 << " " << c3 << "\n";
    int month, d3, j;
    for (int i = 0; i < 365; i += 1) {
        if ((dif + i) % c1 == 0 || (dif + i) % c2 == 0 || (dif + i) % c3 == 0) {
            month = 1;
            for (j = i; j > 0;) {
                j -= count(month, y2);
                month += 1;
            }
            d3 = abs(j) + 1;
            cout << day << " " << month << " " << y2;

        }
    }

}
