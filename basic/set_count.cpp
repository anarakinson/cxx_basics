#include <iostream>
#include <set>
#include <vector>


using namespace std;

void CheckBirdPresence(const set<string> &input_set, const string &bird_name) {
    if (input_set.count(bird_name)) {
        cout << bird_name << " here"s << endl;
    } else {
        cout << bird_name << "'s gone" << endl;
    }
}

int main() {
    // ласточка, орёл, сова, ласточка, скворец
    vector<string> birds_vec = {"swallow"s, "swallow"s, "swallow"s, "eagle"s, "owl"s, "swallow"s, "starling"s};
    set<string> birds(birds_vec.begin(), birds_vec.end());

    cout << birds.count("swallow"s) << endl;
    CheckBirdPresence(birds, "swallow"s);
    cout << endl;
    birds.erase("swallow"s);
    cout << birds.count("swallow"s) << endl;
    CheckBirdPresence(birds, "swallow"s);
    cout << endl;

    for (string &word : birds_vec) {
        word.push_back('.');
        word += '.';
    }
    cout << birds_vec[3] << endl << endl;

    for (string const& word : birds) {
        cout << word << endl;
    }

    return 0;
}
