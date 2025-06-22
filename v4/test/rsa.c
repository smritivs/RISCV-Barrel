const int p = 7919;
const int q = 1009;

#define INPUT_LEN 10000

#define encrypt(m,e,n) power_mod(m,e,n)
#define decrypt(m,d,n) power_mod(m,d,n)

int gcd(int a, int b)
{
    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int power_mod(int m, int e, int n) {
    int res = 1;
    m = m % n;
    while (e > 0) {
        if (e & 1)
            res = (res * 1LL * m) % n;
        m = (m * 1LL * m) % n;
        e = e / 2;
    }
    return res;
}

int mod_inverse(int e, int phi){
	for(int d=2;d<phi;d++){
		if((e*d) % phi == 1){
			return d;
		}
	}

	return -1;
}

int generate_keys(int *e, int *d, int *n){
	*n = p*q;
	int phi = (p-1) * (q-1);

	int i = 2;
	for(i=2;i<phi;i++){
		if(gcd(i,phi) == 1)
			break;
	}

	*e = i;
	*d = mod_inverse(*e, phi);

	return 0;
}

int main(int argc, char **argv){
	char arr[INPUT_LEN] = {0};

	for(int i=0;i<INPUT_LEN;i++)
		arr[i] = (char) i;

	for(int i=0;i<INPUT_LEN;i++){
		int m = (int) arr[i];
		int e, d, n;
		generate_keys(&e, &d, &n);
		int c = encrypt(m, e, n);
		char dec = decrypt(c, d, n);
	}

}
