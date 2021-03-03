#include <bits/stdc++.h>

using namespace std;

int main()
{
    int strings_count, queries_count;
    cin >> strings_count;
    map<string, int> strings;

    for(int i = 0;i < strings_count; i++) {
        string strings_item;
        cin >> strings_item;
        if(strings.find(strings_item) != strings.end())
            strings[strings_item]++;
        else
            strings[strings_item] = 1;
    }

    cin >> queries_count;
    for(int i = 0;i < queries_count; i++) {
        string queries_item;
        cin >> queries_item;
        if(strings.find(queries_item) != strings.end())
            cout << strings[queries_item] << endl;
        else
            cout << 0 << endl;
    }
}