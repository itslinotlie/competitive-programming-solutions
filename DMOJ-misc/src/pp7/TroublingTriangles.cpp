// 07/11/2020
// https://dmoj.ca/problem/geometry1
#include<bits/stdc++.h>
using namespace std;
typedef pair<double, double> pii;
#define f first
#define s second

int n; pii a, b, c;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        scanf("%lf%lf%lf%lf%lf%lf", &a.f, &a.s, &b.f, &b.s, &c.f, &c.s);
        double area = abs(a.f*b.s+b.f*c.s+c.f*a.s - a.s*b.f - b.s*c.f -c.s*a.f)/2;
        double peri = sqrt(pow(a.f-b.f, 2) + pow(a.s-b.s, 2));
        peri += sqrt(pow(a.f-c.f, 2) + pow(a.s-c.s, 2));
        peri += sqrt(pow(c.f-b.f, 2) + pow(c.s-b.s, 2));
        printf("%.2f %.2f\n", area, peri);
    }
}