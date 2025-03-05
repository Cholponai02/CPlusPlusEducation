#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Функция для преобразования текста в зависимости от раскладки
string convertLayout(const string& input) {
    // Словарь для перевода с русской раскладки на английскую
    unordered_map<char, string> ru_to_en = {
        {'а', "f"}, {'б', ","}, {'в', "d"}, {'г', "u"}, {'д', "l"}, {'е', "t"},
        {'ё', "ё"}, {'ж', ";"}, {'з', "p"}, {'и', "b"}, {'й', "q"}, {'к', "r"},
        {'л', "k"}, {'м', "v"}, {'н', "y"}, {'о', "j"}, {'п', "g"}, {'р', "h"},
        {'с', "c"}, {'т', "n"}, {'у', "e"}, {'ф', "a"}, {'х', "x"}, {'ц', "w"},
        {'ч', "o"}, {'ш', "i"}, {'щ', "p"}, {'ь', "z"}, {'ы', "s"}, {'э', "c"},
        {'ю', "ch"}, {'я', "z"}
    };

    // Словарь для перевода с английской раскладки на русскую
    unordered_map<char, string> en_to_ru = {
        {'f', "а"}, {',', "б"}, {'d', "в"}, {'u', "г"}, {'l', "д"}, {'t', "е"},
        {';', "ж"}, {'p', "з"}, {'b', "и"}, {'q', "й"}, {'r', "к"}, {'k', "л"},
        {'v', "м"}, {'y', "н"}, {'j', "о"}, {'g', "п"}, {'h', "р"}, {'c', "с"},
        {'n', "т"}, {'e', "у"}, {'a', "ф"}, {'x', "х"}, {'w', "ц"}, {'o', "ч"},
        {'i', "ш"}, {'p', "щ"}, {'z', "ь"}, {'s', "ы"}, {'c', "э"}, {'z', "я"}
    };

    string result = "";
  
    for (char ch : input) {
        if (ru_to_en.find(ch) != ru_to_en.end()) {
            result += ru_to_en[ch]; // Переводим с русской раскладки на английскую
        } else if (en_to_ru.find(ch) != en_to_ru.end()) {
            result += en_to_ru[ch]; // Переводим с английской раскладки на русскую
        } else {
            result += ch; // Если символ не из алфавита, просто добавляем его
        }
    }

    return result;
}

int main() {
    string inputText;
    cout << "Введите текст: ";
    getline(cin, inputText);
    string outputText = convertLayout(inputText);

    cout << "Преобразованный текст: " << outputText << endl;

    return 0;
}
