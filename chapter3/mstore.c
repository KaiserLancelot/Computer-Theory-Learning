long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    int i = 0xffU;
    *dest = t;
}