
// Binary indexed-Tree or Fenwich Tree

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) : n(n+1) { bit.assign(n+1 , 0ll); }
    FenwickTree(vector<int> a) : FenwickTree(a.size()) { for (size_t i = 1; i < a.size(); i++) add(i, a[i]); }

    void add(int idx, int val) {
        for (idx; idx < n; idx += idx & -idx) bit[idx] += val;
    }

    int sum(int idx) {
        int ret = 0;
        for (idx; idx > 0ll; idx -= idx & -idx)  ret += bit[idx];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

};


