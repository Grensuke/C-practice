
#include <iostream>
#include <string>

int main() {
    std::string reply;
    std::cout << "Say 'yes' or 'no': ";
    std::getline(std::cin, reply);
    for (auto &c : reply) c = tolower(c); // make input lowercase
    if (reply == "yes") {
        std::cout << "Thank you" << std::endl;
    } else if (reply == "no") {
        std::cout << "I will take it as a yes too fr" << std::endl;
    } else {
        std::cout << "Invalid input. Please reply with 'yes' or 'no'." << std::endl;
    }
    return 0;
}
