#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {
    string nazwa;
    int x, y;
    double c;
    Point(string nazwa, int x, int y) : nazwa(nazwa), x(x), y(y)
    {
        c=sqrt(x*x+y*y);
    }
};

bool porownanie(const Point& p1, const Point& p2)
{
    return p1.c < p2.c;
}

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int ile_p;
        cin>>ile_p;
        vector<Point> points;
        for(int i=0;i<ile_p;i++)
        {
            string nazwa;
            int x, y;
            cin>>nazwa>>x>>y;
            points.push_back(Point(nazwa,x,y));
        }
        sort(points.begin(), points.end(), porownanie);
        for (int i = 0; i < points.size(); i++) {
            cout << points[i].nazwa << " " << points[i].x << " " << points[i].y << endl;
        }
        cout << endl;
    }
    return 0;
}
