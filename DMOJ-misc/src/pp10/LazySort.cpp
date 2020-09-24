// 08/01/2020
#include<bits/stdc++.h>
using namespace std;

int t, n; deque<int> dq;
bool fun(deque<int> dq, int st) {
    deque<int> dest;
    if (st==0) 
        dest.push_back(dq.front()), dq.pop_front();
    else 
        dest.push_back(dq.back()), dq.pop_back();
    while(!dq.empty()) {
        if(dq.front() == dest.front()-1)
            dest.push_front(dq.front()), dq.pop_front();
        else if (dq.front() == dest.back()+1)
            dest.push_back(dq.front()), dq.pop_front();
        else if(dq.back() == dest.front()-1)
            dest.push_front(dq.back()), dq.pop_back();
        else if(dq.back() == dest.back()+1)
            dest.push_back(dq.back()), dq.pop_back();
        else return false;
    } return true;
}
int main() {
    scanf("%d", &t);
    for (int T=1;T<=t;T++) {
        scanf("%d", &n); dq.clear();
        for(int i=1,x;i<=n;i++) 
            cin >> x, dq.push_back(x);
        printf("Case #%d: %s\n", T, (fun(dq, 0)||fun(dq, 1))? "yes":"no");
    }
}