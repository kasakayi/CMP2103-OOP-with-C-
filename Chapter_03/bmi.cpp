// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include <iostream>
double get_weight(){
    double weight;
    std::cout << "Enter weight in pounds? (Oz)\n-> ";
    std::cin >> weight;
    weight *= 0.45359237;
    return weight;
}

double get_height(){
    double height;
    std::cout << "Enter height in inches? (In)\n-> ";
    std::cin >> height;
    height *= 0.0254;
    return height;
}

double display_status(double bmi){
    if(bmi < 18.5)
    std::cout << "Under-weight.\n";
    else if(bmi >= 18.5 && bmi < 25.0 )
    std::cout << "Normal.\n";
    else if(bmi >= 25.0 && bmi , 30.0)
    std::cout << "Overweight.\n";
    else
    std::cout << "Obese.\n";
}

double get_bmi(double weight, double height){
    double bmi = weight/(height*height);
    return bmi;
}

int main(){
    int action;
    std::cout << "Calculate BMI:\n1.Yes\n2.No\n->";
    std::cin >> action;
    if(action == 1)
    while (action == 1){
            double weight = get_weight();
            double height = get_height();
            double bmi = get_bmi(weight, height);
            std::cout << "\nThe BMI is: " <<bmi<< "\n";
            display_status(bmi);
            std::cout << "\nWould you like to continue?\n1.Yes\n2.No\n->";
            std::cin >> action;
    }
    if(action == 2)
    std::cout << "Okay, have a great day.\n";    
    return 0;
}

