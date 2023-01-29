
//-----------------------------------------------------------------------------------

vector<string> split(string str, char delimiter) {
    vector<string> res;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter)) {
        res.push_back(token);
    }
    return res;
}


void replace(string& s, string oldVal, string newVal) {
    size_t pos = 0;
    while ((pos = s.find(oldVal, pos)) != string::npos) {
        s.replace(pos, oldVal.size(), newVal);
        pos += newVal.size();
    }
}

//--------------------------------------------------------------------------------------
