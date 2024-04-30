#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define Size 20
using namespace std;

typedef struct _node {
    int chi;
    int eng;
    int math;
} Node;

int cmp(Node a, Node b) {
    if ((a.chi == b.chi) && (a.eng == b.eng)) return a.math > b.math;
    if (a.chi == b.chi)
        return a.eng > b.eng;
    else
        return a.chi > b.chi;
}

int main() {
    Node stu[Size];
    srand(time(NULL));
    for (int i = 0; i < Size; i++) {
        stu[i].chi = rand() % 40 + 60;
        stu[i].eng = rand() % 40 + 60;
        stu[i].math = rand() % 40 + 60;
    }
    cout << "±Æ§Ç«e¡G" << endl;
    for (int i = 0; i < Size; i++) {
        cout << stu[i].chi << " " << stu[i].eng << " " << stu[i].math << endl;
        sort(stu, stu + Size, cmp);
    }
    cout << endl
         << endl;
    for (int i = 0; i < Size; i++) {
        cout << stu[i].chi << " " << stu[i].eng << " " << stu[i].math << endl;
    }
    return 0;
}
