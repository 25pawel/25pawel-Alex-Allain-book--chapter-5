#include <iostream>

using namespace std;

static void print99BottlesOfBeer(void);
static void launchMenu(void);
static void calcSumUntil0(void);
static void logIntoSystem(void);
static void printFirst20SquareNumbers(void);
static void calculateResultsOfQuestionnaire(void);


int main()
{
    // print99BottlesOfBeer();
    // launchMenu();
    // calcSumUntil0();
    // logIntoSystem();
    // printFirst20SquareNumbers();
    calculateResultsOfQuestionnaire();
}

static void calculateResultsOfQuestionnaire(void)
{
    int choice = -1;
    int sumOfStatham = 0;
    int sumOfCena = 0;
    int sumOfSimpson = 0;
    
    while(choice != 0)
    {
        cout << "Who is the best actor?\n";
        cout << "1. Jason Statham\n";
        cout << "2. John Cena\n";
        cout << "3. Homer Simpson\n";
        cout << "0. If you want to see results of questionnaire\n";
        cin >> choice;

        if(choice == 1)
        {
            sumOfStatham++;
        }
        else if(choice == 2)
        {
            sumOfCena++;
        }
        else if (choice == 3)
        {
            sumOfSimpson++;
        }
        else
        {
            if(choice == 0)
            {
                break;
            }
            else
            {
                cout << "Bad answer. Try one more time !\n";
            }
        }
    }
    cout << "Statham    ";
    for(int i = 0; i < sumOfStatham; i++)
    {
        cout << "*";
    }
    cout << "\nCena       ";
    for(int i = 0; i < sumOfCena; i++)
    {
        cout << "*";
    }
    cout << "\nSimpson    ";
    for(int i = 0; i < sumOfSimpson; i++)
    {
        cout << "*";
    }
}

static void printFirst20SquareNumbers(void)
{
    for(int i = 0; i < 20; i++)
    {
        cout << i << "^2 is " << i*i << "\n";
    }
}

static void logIntoSystem(void)
{
    string password;
    int i = 0;
    for ( int i = 0; i < 5; i++)
    {
        cout << "Enter password: ";
        cin >> password;

        if(password == "pass")
        {
            cout << "Password correct\n";
            break;
        }
    }
}

static void calcSumUntil0(void)
{
    int sum = 0;
    int number;
    do
    {
        cout << "Enter number: ";
        cin >> number;

        sum += number;
    
    } while ( number != 0);

    cout << "Calculated sum : " << sum;
    
}

static void launchMenu(void)
{
    int choice = 0;
    do
    {
        cout << "What do you want to do? Enter a number :\n";
        cout << "1.Continue Game\n";
        cout << "2.New Game\n";
        cout << "3.Multiplayer\n";
        cout << "4.Settings?\n";
        cout << "5.Exit\n";
        cin >> choice;
        cin.get();
    } while ( (choice < 1) || (choice > 5) );
}

static void print99BottlesOfBeer(void)
{
    for(int i = 99; i > 1; i--)
    {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer\n";
        cout << "take one down pass it around, " << (i-1) << " bottles of beer on the wall\n";
    }

    cout << "1 bottlee of beer on the wall\n";
    cout << "take one down pass it around, 0 bottles of beer on the wall\n";
}