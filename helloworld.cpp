#include "myheader.h"

int main() 
{
    userInput();
}
void userInput()
{
    int x , y;
    std::cout << "Enter two integers to add : Int Int" << std::endl;
    std::cin >> x >> y;
    if (!isValidInput(x, y)) {
        std::cout << "Invalid input. Please enter non-negative integers." << std::endl;
        return;
    }
    std::cout << "You entered: " << x << " and "<< y << std::endl;
    Add(x, y);
}

void Add(int x, int y) 
{
    int result = x + y;
    std::cout << "Final result: " << result << '\n';
}


bool isValidInput(int x, int y) {
    return (x >= 0 && y >= 0); //Both numbers must be non-negative
}