#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Node {
    ll val, mx, lazy;
    int sz, pr;
    Node *l, *r;

    Node(ll v) {
        val = mx = v;
        lazy = 0;
        sz = 1;
        pr = rand();
        l = r = nullptr;
    }
};
int sz(Node* t) {
    return t ? t->sz : 0;
}
ll mx(Node* t) {
    return t ? t->mx : 0;
}
void apply(Node* t, ll add) {
    if (!t) return;
    t->val += add;
    t->mx += add;
    t->lazy += add;
}
void push(Node* t) {
    if (!t || t->lazy == 0) return;
    apply(t->l, t->lazy);
    apply(t->r, t->lazy);
    t->lazy = 0;
}
void pull(Node* t) {
    if (!t) return;
    t->sz = 1 + sz(t->l) + sz(t->r);
    t->mx = t->val;
    if (t->l) t->mx = max(t->mx, t->l->mx);
    if (t->r) t->mx = max(t->mx, t->r->mx);
}
void split(Node* t, int k, Node*& a, Node*& b) {
    if (!t) {
        a = b = nullptr;
        return;
    }
    push(t);
    if (sz(t->l) >= k) {
        split(t->l, k, a, t->l);
        b = t;
        pull(b);
    } else {
        split(t->r, k - sz(t->l) - 1, t->r, b);
        a = t;
        pull(a);
    }
}
Node* merge(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;
    if (a->pr > b->pr) {
        push(a);
        a->r = merge(a->r, b);
        pull(a);
        return a;
    } else {
        push(b);
        b->l = merge(a, b->l);
        pull(b);
        return b;
    }
}
int countLE(Node* t, ll x) {
    if (!t) return 0;
    push(t);
    if (t->val <= x) {
        return sz(t->l) + 1 + countLE(t->r, x);
    } else {
        return countLE(t->l, x);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    srand(712367);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Node* root = nullptr;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            int pos = countLE(root, x);
            Node *left, *right;
            split(root, pos, left, right);
            apply(right, x);
            root = merge(merge(left, new Node(x)), right);
        }
        cout << root->mx << '\n';
    }
    return 0;
}