#include <iostream>

using namespace std;

double apples;
double oranges;
double cherries;
double watermelons;
double  wallet = 100;
float userchoice;

int main()
{

    while (wallet >= 0)
    {
        cout << "\n\n welcome to T.J.'s!!\n\n";
        cout << "Menu:\n\n";
        cout << "1           Apples        $2\n";
        cout << "2           Oranges       $3\n";
        cout << "3           Cherries      $4\n";
        cout << "2           watermelon    $5\n\n";
        cout << "You have\n" << apples << "Apples\n" << Oranges << "Oranges\n" << Cherries << "Cherries\n" << watermelons << "watermelons \n\n";
        cout << "Your available credit is $" << wallet <<".\n\n";
    }
    



    cin.get();
    return 0;
}