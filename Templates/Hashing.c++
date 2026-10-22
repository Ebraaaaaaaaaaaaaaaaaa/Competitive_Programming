struct Hash{
    // Do Not forget to call Hash::init in the main function
    inline static int MOD1, MOD2, base, INV1, INV2;
    inline static int pw1[(int) 1e6 + 5], pw2[(int) 1e6 + 5];
    deque<char> dq;
    int len = 0, h1 = 0, h2 = 0;

    static int poww(int x, int p, const int MOD){
        if(p == 0) return 1;
        if(p & 1) {
            return ((x % MOD) * (poww(x, p - 1, MOD) % MOD)) % MOD;
        }
        return poww(((x % MOD) * (x % MOD)) % MOD, p >> 1, MOD);
    }

    static void init(int _BASE, int _MOD1, int _MOD2){
        base = _BASE;
        MOD1 = _MOD1, INV1 = poww(base, MOD1 - 2, MOD1);
        MOD2 = _MOD2, INV2 = poww(base, MOD2 - 2, MOD2);
        pw1[0] = pw2[0] = 1;
        for(int i = 1; i < 1e6 + 5; i++){
            pw1[i] = ((pw1[i - 1] % MOD1) * (base % MOD1)) % MOD1;
            pw2[i] = ((pw2[i - 1] % MOD2) * (base % MOD2)) % MOD2;
        }
    }

    void push_front(char c){
        int ch = c - 'a' + 1;
        h1 = (h1 + ch * pw1[len]) % MOD1;
        h2 = (h2 + ch * pw2[len]) % MOD2;
        ++len;
        dq.push_front(c);
    }
    void push_back(char c){
        int ch = c - 'a' + 1;
        h1 = (h1 * base + ch) % MOD1;
        h2 = (h2 * base + ch) % MOD2;
        dq.push_back(c);
        ++len;
    }
    void pop_back(){
        if(len == 0) return;
        int ch = dq.back() - 'a' + 1;
        h1 = (((h1 - ch) % MOD1) + MOD1) % MOD1;
        h1 = (h1 * INV1) % MOD1;

        h2 = (((h2 - ch) % MOD2) + MOD2) % MOD2;
        h2 = (h2 * INV2) % MOD2;
        dq.pop_back();
        --len;
    }
    void pop_front(){
        if(len == 0) return;
        int ch = dq.front() - 'a' + 1;;
        h1 = ((h1 - ch * pw1[len - 1]) % MOD1) + MOD1;
        h1 %= MOD1;

        h2 = ((h2 - ch * pw2[len - 1]) % MOD2) + MOD2;
        h2 %= MOD2;
        --len;
        dq.pop_front();
    }
    pair<int, int> get(){
        return {h1, h2};
    }
};
