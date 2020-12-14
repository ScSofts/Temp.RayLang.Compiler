#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <codecvt>
#include <locale>
#include <ctime>
#include <vector>
#include <unordered_map>

namespace ray {
    template <class T>
    using Vector = std::vector<T>;

    template <class TKey,class TValue>
    using Map = std::unordered_map<TKey, TValue>;

    using String = std::string;
    using WString = std::wstring;

    using std::wstring_convert;
    using std::codecvt_utf8;
    using Locale = std::locale;
};