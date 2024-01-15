#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct FoodData {
    double z;
    float d;
    float m;
};

double g(double x, double k, double t) {
    return x * exp(-t / k);
}

bool compareDescending(const FoodData& a, const FoodData& b) {
    return a.z > b.z;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<FoodData> foods;

    int x, y;
    for (int i = 0; i < n; i++) {
        float m;
        cin >> m >> x >> y;

        float d = 2 * sqrt(pow(x, 2) + pow(y, 2));
        double t = 2 * d;
        double z = g(m, k, (t / 60.0));

        foods.push_back({z, d, m});
    }

    sort(foods.begin(), foods.end(), compareDescending);

    double e = 0;
    double f = 0;

    for (const auto& food : foods) {
        if (food.z > 0 && food.d >= 0) {
            e = e + abs(food.d);
            if(e>60) break;
            f = f + g(food.m, k, (e / 60.0));
        }
    }

    double total_time = 0;
    for (const auto& food : foods) {
        total_time += abs(food.d);
        if(total_time>60)
            {
                total_time -=abs(food.d);
                break;
            }
    }

    cout << f << " " << round(total_time * 100) / 100 << endl;

    return 0;
}
