// #6

vector<string> split(const string& str, char delim = ' ') {
    vector<string> result;
    const char* start = str.c_str();
    const char* ptr = start;

    while (*ptr) {
        if (*ptr == delim) {
            if (ptr > start) {
                result.emplace_back(start, ptr);
            }
            start = ptr + 1;
        }
        ++ptr; 
    }

    if (ptr > start) {
        result.emplace_back(start, ptr);
    }

    return result;
}

string reverseWords(string s) {
    vector<string> result = split(s);
    string nres;

    for (string r : result) {
        if (r != " ") {
            nres = r + " "+ nres;
        }
    }
    nres.pop_back();
    return nres;
}
