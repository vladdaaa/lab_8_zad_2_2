#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string s;
    cout << "Введите строку";
    getline(cin, s);//считывает целую строку
    int res = INT_MAX, k = INT_MAX;
    //в s начиная с 0 индкса вставляем пробел один раз
    s.insert(0, 1, ' ');
    s += " ";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            k = 1;
            while (s[++i] != ' ')
                ++k;
        }
        res = min(res, k);
    }
    cout <<res<<endl;
    return 0;
}