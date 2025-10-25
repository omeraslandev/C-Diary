#include <iostream>
#include <string>       //Required for std::string and std::stoi
#include <stdexcept>    //Required for handling exceptions like std::invalid_argument 

int main()
{
    // A string variable to hold the users raw input.
    std::string userInput;

    // An integer variable to store the converted number
    int convertedNumber;

    // Promp the user to enter something
    std::cout << "Please enter a number: ";

    // Read the entire line of input from the user
    // Using std::getline is safer than 'std::cin >> userInput'
    // because it correctly handles inputs with spaces
    std::getline(std::cin, userInput);

    try {
        // Attempt to convert the input string to an integer
        // std::stoi stands for "string to integer"
        convertedNumber = std::stoi(userInput);

        // If the conversion is successful, print the result
        std::cout << "Input converted to int types correctly." << std::endl;
        std::cout << "The number you entered: " << convertedNumber << std::endl;

        //Now you can perform mathematical operations with the integer
        int result = convertedNumber * 2;
        std::cout << "The twice of your number:  " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        // This block 'catches' the exception if std::stoi fails
        // 'std::invalid_argument' is thrown if no conversion could
        std::cerr << "Error: Unvalid input. The entered value couldn't be converted to an integer." << std::endl;
    } catch (const std::out_of_range& e) {
        // This 'catches' of the exception if the number is too big or too small
        // 'std::out_of_range' is thrown if the number exceeds the limits of an 'int'
    }

    return 0;

}