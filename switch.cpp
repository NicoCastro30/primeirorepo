#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    
    cout << "Program name is: " << argv[0] << endl;

    if (argc < 2) {
        std::cout << "No extra Command Line Argument passed" << std::endl;
        return 1;
    }

    switch (argv[1][0]) {
        case 'e':
            std::cout << "Function Encrypt." << std::endl;
            break;
        case 'd':
            std::cout << "Function Descrypt." << std::endl;
            break;
        case 'i':
            std::cout << "Function Inference." << std::endl;
            break;
         case 't':
            std::cout << "Function Training." << std::endl;
            break;
        default:
            std::cout << "Don't exist this Function." << std::endl;
            break;
    }

    for (int i = 0; i < argc; i++) {
            cout << "argv[" << i << "]: " << argv[i]
                 << '\n';
        }

    return 0;
}

