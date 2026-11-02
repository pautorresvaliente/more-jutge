/**
 * @pre n >= 0
 * @post returns true if n is a sandwich number, false otherwise
 */
bool is_sandwich(int n) {
    if (n < 100) return false; // Needs at least 3 digits (k >= 1 filling)

    int d = n % 10; // Bread (last digit)
    n /= 10;

    int e = n % 10; // Filling digit
    n /= 10;

    if (d == e) return false; // Bread and filling must be distinct digits

    // Check all inner digits up to the first digit
    while (n >= 10) {
        if (n % 10 != e) return false; // Filling must match 'e'
        n /= 10;
    }

    // Check if first digit matches last digit 'd'
    return n == d;
}