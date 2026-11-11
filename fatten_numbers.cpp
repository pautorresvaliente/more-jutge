int fatten(int x) {
    if (x < 10) return x;
    
    int fat = fatten(x / 10);
    int max_digit = (fat % 10 > x % 10) ? (fat % 10) : (x % 10);
    
    return fat * 10 + max_digit;
}