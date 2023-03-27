#include <iostream>
#include <string> // allows use of strings
#include <iomanip> // library to use fixed() and setprecision(), total will remain at 2 decimal places
using namespace std;

int main()
{
    string state, month;
    int day, year;
    float amount, total; // The "amount" variable is the amount of money the user inputs, the "total" variable is the total amount they must pay after tax
    
    //prompt the user for necessary inputs
    cout << "State Name: ";
    getline(cin, state);
    
    cout << "Purchase amount: ";
    cin >> amount;
    
    cin.ignore(1000, '\n'); // clears keyboard buffer from the previous line, next usage of getline() will accept new input
    cout << "Provide the month: ";
    getline(cin, month);
    
    cout << "Provide the day: ";
    cin >> day;
    
    cout << "Provide the year: ";
    cin >> year;
    
    // display error messages if the user enters invalid input
    // state must be one  of the 50 states spelled right and capitalized
    if(state != "Alabama" && state != "Alaska" && state != "Arizona" && state != "Arkansas" && state != "California" && state != "Colorado" && state != "Connecticut" && state != "Delaware" && state != "Florida" && state != "Georgia" && state != "Hawaii" && state != "Idaho" && state != "Illinois" && state != "Indiana" && state != "Iowa" && state != "Kansas" && state != "Kentucky" && state != "Louisiana" && state != "Maine" && state != "Maryland" && state != "Massachusetts" && state != "Michigan" && state != "Minnesota" && state != "Mississippi" && state != "Missouri" && state != "Montana" && state != "Nebraska" && state != "Nevada" && state != "New Hampshire" && state != "New Jersey" && state != "New Mexico" && state != "New York" && state != "North Carolina" && state != "North Dakota" && state != "Ohio" && state != "Oklahoma" && state != "Oregon" && state != "Pennsylvania" && state != "Rhode Island" && state != "South Carolina" && state != "South Dakota" && state != "Tennessee" && state != "Texas" && state != "Utah" && state != "Vermont" && state != "Virginia" && state != "Washington" && state != "West Virginia" && state != "Wisconsin" && state != "Wyoming")
    {
        cout << "Invalid state!" << endl;
    }
    // the emount must be greater than 0
    else if(amount <=0)
    {
        cout << "Invalid amount!" << endl;
    }
    // the month must be one of the twelve months spelled correctly and capitalized on the first letter
    else if(month != "January" && month != "February" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December")
    {
        cout << "Invalid month!" << endl;
    }
    // because months only have days 1 through 31, users must input a number from 1 to 31
    else if(day < 1 || day > 31)
    {
        cout << "Invalid day!" << endl;
    }
    // the program will only calculate totals for years 1 through 2025
    else if(year < 1 || year > 2025)
    {
        cout << "Invalid year!" << endl;
    }
    // If the user has valid input, the program calculates and outputs the total amount they must pay after tax
    // Some states have free tax days where there is no sales tax, in which case total is the amount the user inputs. Those states are Alabama, Arkansas, Connecticut, Indiana, Maryland, Massachusetts, Mississippi, Missouri, Nevada, Ohio, Oklahoma, South Carolina, Tennessee, Texas and West Virginia
    else if(state == "Alabama" && month != "July" && day != 15 && day != 16 && day != 17)
    {
        total = amount * 1.0914;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Alabama" && month == "July" && (day == 15 || day == 16 || day == 17))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Alaska")
    {
        total = amount * 1.0143;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Arizona")
    {
        total = amount * 1.0837;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Arkansas" && month != "August" && day != 6 && day != 7)
    {
        total = amount * 1.0943;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Arkansas" && month == "August" && (day == 6 || day == 7 || day == 8))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "California")
    {
        total = amount * 1.0956;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Colorado")
    {
        total = amount * 1.0736;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Connecticut" && month != "August" && day != 21 && day != 22 && day != 23 && day != 24 && day != 25 && day != 26 && day != 27)
    {
        total = amount * 1.0635;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Connecticut" && month == "August" && (day == 21 || day == 22 || day == 23 || day == 24 || day == 25 || day == 26 || day == 27))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Delaware")
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Florida")
    {
        total = amount * 1.0705;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Georgia")
    {
        total = amount * 1.0729;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Hawaii")
    {
        total = amount * 1.0441;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Idaho")
    {
        total = amount * 1.0603;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Illinois")
    {
        total = amount * 1.0874;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Indiana")
    {
        total = amount * 1.07;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Iowa" && month != "August" && day != 5 && day != 6)
    {
        total = amount * 1.0682;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Iowa" && month == "August" && (day == 5 || day == 6))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Kansas")
    {
        total = amount * 1.0867;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Kentucky")
    {
        total = amount * 1.06;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Louisiana")
    {
        total = amount * 1.0945;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Maine")
    {
        total = amount * 1.055;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Maryland" && month != "August" && day != 14 && day != 15 && day != 16 && day != 17 && day != 18 && day != 19 && day != 20)
    {
        total = amount * 1.06;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Maryland" && month == "August" && (day == 14 || day == 15 || day == 16 || day == 17 || day == 18 || day == 19 || day == 20))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Massachusetts" && month != "August" && day != 14 && day != 15)
    {
        total = amount * 1.0625;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Massachusetts" && month == "August" && (day == 14 || day == 15))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Michigan")
    {
        total = amount * 1.06;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Minnesota")
    {
        total = amount * 1.0743;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Mississippi" && month != "July" && day != 29 && day != 30)
    {
        total = amount * 1.0707;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Mississippi" && month == "July" && (day == 29 || day == 30))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Missouri" && month != "April" && day != 19 && day != 20 && day != 21 && day != 22 && day != 23 && day != 24 && day != 25)
    {
        total = amount * 1.0813;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Missouri" && month == "April" && (day == 19 || day == 20 || day == 21 || day == 22 || day == 23 || day == 24 || day == 25))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Montana")
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Nebraska")
    {
        total = amount * 1.0685;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Nevada" && month != "August" && day != 5 && day != 6 && day != 7)
    {
        total = amount * 1.0814;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Nevada" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "New Hampshire")
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "New Jersey")
    {
        total = amount * 1.066;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "New Mexico")
    {
        total = amount * 1.0782;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "New York")
    {
        total = amount * 1.0849;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "North Carolina")
    {
        total = amount * 1.0697;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "North Dakota")
    {
        total = amount * 1.0685;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Ohio" && month != "August" && day != 5 && day != 6 && day != 7)
    {
        total = amount * 1.0717;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Ohio" && month == "August" && (day == 5 || day == 6))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Oklahoma" && month != "August" && day != 6 && day != 7 && day != 8)
    {
        total = amount * 1.0892;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Oklahoma" && month == "August" && (day == 6 || day == 7 || day == 8))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Oregon")
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Pennsylvania")
    {
        total = amount * 1.0634;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Rhode Island")
    {
        total = amount * 1.07;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "South Carolina" && month != "August" && day != 5 && day != 6 && day != 7)
    {
        total = amount * 1.0743;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "South Carolina" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "South Dakota")
    {
        total = amount * 1.064;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Tennessee" && month != "July" && day != 29 && day != 30 && day != 31)
    {
        total = amount * 1.0947;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Tennessee" && month == "July" && (day == 29 || day == 30 || day == 31))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Texas" && month != "August" && day != 5 && day != 6 && day != 7)
    {
        total = amount * 1.0819;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Texas" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Utah")
    {
        total = amount * 1.0819;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Vermont")
    {
        total = amount * 1.0618;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Virginia")
    {
        total = amount * 1.0565;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Washington")
    {
        total = amount * 1.0917;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "West Virginia" && month != "August" && day != 5 && day != 6 && day != 7)
    {
        total = amount * 1.0639;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "West Virginia" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = amount;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Wisconsin")
    {
        total = amount * 1.0544;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    else if(state == "Wyoming")
    {
        total = amount * 1.536;
        cout << "Please pay a total of $" << fixed << setprecision(2) << total;
    }
    
    return 0;
}
