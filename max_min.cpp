void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n >= 10) {
        digit_maxim_i_minim(n / 10, maxim, minim);
        
        int digit = n % 10;
        if (n % 10 > maxim) {
            maxim = digit;
        }
        if (n % 10 < minim) {
            minim = digit;
        }
    } else {
        maxim = n;
        minim = n;
    }
}