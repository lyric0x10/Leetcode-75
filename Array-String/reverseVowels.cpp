// #5

vector<char> Vowels = { 'A', 'E', 'I', 'O', 'U' };

string reverseVowels(string s) {
    vector<int> Found_Indexes;
    vector<char> Found_Chars;
    for (size_t i = 0; i < s.length(); ++i) {
        if (find(Vowels.begin(), Vowels.end(), toupper(s[i])) != Vowels.end() ) {
            Found_Indexes.push_back(i);
            Found_Chars.push_back(s[i]);
        }
    }
    for (size_t i = Found_Indexes.size()-1; 0 < i+1; --i) {
        s[Found_Indexes[i]] = Found_Chars[Found_Chars.size()-1-i];
    }
    return s;
}
