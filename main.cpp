#include <iostream>
int main()
{
short old; std::string names, gender; char marital_status; std::cout << "what's your frist name: "; std::cin >> names; std::cout << "what is your gender(m/w): ";
std::cin >> gender;
//!MEN
    if (gender == "men" || gender == "m" || gender == "Men")
    {
std::cout << "How old you Mr." << names << ": "; std::cin >> old;
std::cout << "Are you married Mr." << names << "(y/n): "; std::cin >> marital_status;
if (names == "ahmed" || names == "mohamed" || names == "atrees" && gender == "m" && old >= 30 && marital_status == 'y')
{
std::cout << "Go and collect the pension." << "\n";}
else
std::cout << "\n sorry mr." << names << "You don't deserve a pension. You can die quietly my friend." << "\n";}
//! WOmen
else if (gender == "women" || gender == "w" || gender == "Women")
    {std::cout << "How old you Mrs." << names << ": "; std::cin >> old;
std::cout << "Are you married Mrs." << names << "(y/n): "; std::cin >> marital_status;
if (names == "sara" || names == "hend" || names == "atreesa" || names == "lily" && gender == "w" && old >= 25 && marital_status == 'n')
if (names == "sara" || names == "hend" || names == "atreesa" || names == "lily" && gender == "w" && old >= 30 && marital_status == 'y')
{
std::cout << "Go and collect the pension." << "\n";}
else
{
std::cout << "\n sorry mr." << names << "You don't deserve a pension. You can die quietly my friend." << "\n";}}
else
    {
        std::cout << "\nwrong result, Try again.";
    }
    return 0;
}