ll mod_pow(ll x,ll n) {
	if (n == 0) return 1;
	ll res = mod_pow(x*x % MOD, n / 2);
	if (n & 1) res = res * x % MOD;
	return res;
}

ll comb(ll n, ll x) {
	ll ret = 1,k=1;
	F0R(i,x)ret = (ret * (n - i))%MOD;
	F0R(i,x)k = (k * (x-i))%MOD;
	k = mod_pow(k, MOD - 2);
	ret = (ret*k + MOD) % MOD;
	return ret;
}