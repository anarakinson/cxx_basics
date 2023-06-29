#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<string> elephant_friends;

    string friend_name;
    cout << "Enter friend names or \"end\" to exit:"s << endl;

    // Используем специальный приём: чтение из cin как условие цикла.
    // При этом цикл будет работать, пока чтения проходят успешно.
    // Если данные закончились или не могут быть прочитаны по другой
    // причине, цикл остановится.
    // Подобное выражение с cin можно использовать в условии if. Значение
    // условия будет истинным, если чтение было успешным. А если нет — ложным.
    while (cin >> friend_name) {
        cout << friend_name << endl;
        // Завершаем цикл, если прочитано end.
        if (friend_name == "end"s) {
            break;
        }

        // Добавляем прочитанное имя в вектор.
        elephant_friends.push_back(friend_name);
    }

    // Выводим информацию о том, сколько элементов добавили в вектор
    cout << "Elephant has "s << elephant_friends.size() << " friends."s << endl;
}
