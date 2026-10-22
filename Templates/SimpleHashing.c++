// Simple Hashing using only one base 
struct SimpleHash{
    // Do Not forget to call Hash::init in the main function
    static int MOD, base, inv;
    inline static int pw[(int) 1e6 + 5];
    deque<char> dq;
    int len = 0, h = 0;

    static int poww(int x, int p, const int MOD){
        if(p == 0) return 1;
        if(p & 1) {
            return ((x % MOD) * (poww(x, p - 1, MOD) % MOD)) % MOD;
        }
        return poww(((x % MOD) * (x % MOD)) % MOD, p >> 1, MOD);
    }

    static void init(int _BASE, int _MOD){
        MOD = _MOD, base = _BASE, inv = poww(base, MOD - 2, MOD);
        pw[0] = 1;
        for(int i = 1; i < 1e6 + 5; i++){
            pw[i] = ((pw[i - 1] % MOD) * (base % MOD)) % MOD;
        }
    }

    void push_front(char c){
        int ch = c - 'a' + 1;
        h = (h + ch * pw[len]) % MOD;
        ++len;
        dq.push_front(c);
    }
    void push_back(char c){
        int ch = c - 'a' + 1;
        h = (h * base + ch) % MOD;
        dq.push_back(c);
        ++len;
    }
    void pop_back(){
        if(len == 0) return;
        int ch = dq.back() - 'a' + 1;
        h = (h - ch + MOD) % MOD;
        h = (h * inv) % MOD;
        dq.pop_back();
        --len;
    }
    void pop_front(){
        if(len == 0) return;
        int ch = dq.front() - 'a' + 1;;
        h = h - ch * pw[len - 1] + MOD;
        h %= MOD;
        --len;
        dq.pop_front();
    }
};
