// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("teleport");

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int c = min(a, b);
    int startpoint1;
    int startpoint2;
    int endpoint1;
    int endpoint2;
    bool startpointa = false;
    if (c == a) {
        startpoint1 = a;
        endpoint1 = b;
    } else {
        startpoint1 = b;
        endpoint1 = a;
    }

    int z = min(x, y);

    bool startpointx = false;
    if (z == x) {
        startpoint2 = x;
        endpoint2 = y;
    } else {
        startpoint2 = y;
        endpoint2 = x;
    }
    int diff = abs(startpoint1 - endpoint1);
    int telediff = abs(abs(startpoint1 - startpoint2) + abs(endpoint1 - endpoint2));
    if (telediff > diff){
        cout << diff;
    } else if (telediff < diff){
        cout << telediff;
    }
}
