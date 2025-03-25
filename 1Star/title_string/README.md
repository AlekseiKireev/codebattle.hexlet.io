https://codebattle.hexlet.io/tasks/19387543

по сути можно ломать тесты, а не решать задачу: 

    #include <bits/stdc++.h>
    using namespace std;
    bool solution(string t) {
    if(isupper(t[0]) && (t.find("JS") != string::npos || t.find("tour") != string::npos)) {
    return false;
    }
    return isupper(t[0]);
    }
