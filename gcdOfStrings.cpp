int gcd(size_t a, size_t b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    return str1.substr(0, gcd(str1.size(), str2.size()));
}
