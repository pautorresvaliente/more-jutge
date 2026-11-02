int sum_of_digits(int x) {
    if (x <= 9) {
        return x;
    }

    return x % 10 + sum_of_digits(x / 10);
}


int reduction_of_digits(int x) {
    int sum_digits = sum_of_digits(x);

    if (sum_digits <= 9) {
        return sum_digits;
    }

    return reduction_of_digits(sum_digits);
}