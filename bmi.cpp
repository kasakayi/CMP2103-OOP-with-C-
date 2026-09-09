#include <iostream>
double get_weight(){
    double weight;
    std::cout << "Enter weight in pounds?(lb)\n-> ";
    std::cin >> weight;
    weight *= 0.453592;
    return weight;
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
double get_height(){
    double height;
    std::cout << "Enter height in inches?(In)\n-> ";
    std::cin >> height;
    height *= 0.0254;
    return height;
}
double get_bmi(double weight, double height){
    double bmi = weight/(height*height);
    return bmi;
}
int main(){
    int action;
    std::cout << "Calculate BMIs:\n1.Yes\n2.No\n->";
    std::cin >> action;
    if(action == 1)
    while (action == 1){
            double weight = get_weight();
            double height = get_height();
            double bmi = get_bmi(weight, height);
            std::cout << "\nBMI is " <<bmi<< "\n";
            display_status(bmi);
            std::cout << "\nWould you like to continue?\n1.Yes\n2.No\n->";
            std::cin >> action;
    }
    if(action == 2)
    std::cout << "Okay, have a great day.\n";    
    return 0;
}

