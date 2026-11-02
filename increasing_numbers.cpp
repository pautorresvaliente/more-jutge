// bool is_increasing(int n) {
//     if (n < 10) {
//         return n;
//     }

//     return (is_increasing(n / 10) >= (n % 10));
// }

bool is_increasing(int n) {
    if (n < 10) {
        return true;
    }
    
    return n % 10 >= ((n / 10) % 10) and is_increasing(n / 10);
}