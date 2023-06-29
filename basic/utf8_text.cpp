#include <iostream>
#include <io.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {

    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin),  _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;
    // или
    wprintf(L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");

    return 0;
    
}
