#include <iostream>
using namespace std;
//ak sir lab progrmas 19 oct

//question1
//check wether a number is even or odd

void evenOrodd(int n1)
{
    if (n1 % 2 == 0)
    {
        cout << "Your Given Number Is A Even Number";
    }

    else if (n1 % 2 != 0)
    {
        cout << "Your Given Number Is A Odd Number";
    }
}

//question 2 is to find wether entered number is leap year or not

void leapYearFinder(int year)
{
    if ((year % 4 == 0 && year % 4 != 0) || (year % 400 == 0))
    {
        cout << "Yes, Your Entered Year Is A leap year ";
    }
    else
    {
        cout << "Your entered year is not a leap year";
    }
}

void votingCriteria(int age)
{
    if (age >= 18)
    {
        cout << "Congratulations !!, You Can Vote Now..";
    }
    else
    {
        cout << "Sorry, You are not eligible for voting, wait for " << 18 - age << " years";
    }
}

void greatestNumber(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        cout << "Largest Number is " << n1 << endl;
    }
    if (n2 > n1 && n2 > n3)
    {
        cout << "Largest Number is " << n2 << endl;
    }
    if (n3 > n2 && n3 > n1)
    {
        cout << "Largest Number is " << n3 << endl;
    }
    if (n1 == n2 || n2 == n3 || n3 == n1)
    {
        cout << "Don't enter equal numbers";
    }
}

void positiveNegative(int n)
{
    if (n > 0)
    {
        cout << "This Is positive integer";
    }
    if (n < 0)
    {
        cout << " This Is negative integer ";
    }
    if (n == 0)
    {
        cout << "You Enter Zero, Not Positive niether Negative ";
    }
}

void ultaSeedhanumber()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int n1, n2, n3;
    n1 = n;
    n2 = 0;
    if (n >= 0)
    {
        while (n1 > 0)
        {
            n2 = ((n2 + (n1 % 10)) * 10);
            n1 = n1 / 10;
        }
    }
    else
    {
        while (n1 < 0)
        {
            n2 = ((n2 + (n1 % 10)) * 10);
            n1 = n1 / 10;
        }
    }
    if (n == n2 / 10)
    {
        cout << "Yes, This is a palidrom number";
    }
    if (n != n2 / 10)
    {
        cout << "No, This is not a palidrom number";
    }
    cout << " ";
    if (n < 2147483647)
    {
        cout << "Reverse Number is " << n2 / 10 << endl;
    }
    else
    {
        cout << "Please Not Enter Very Large Number";
    }

    if (n > -2147483647)
    {
    }
    else
    {
        cout << "Please Not Enter Very Small Number";
    }
}

void grading()
{
    int n1;
    cout << "Enter The First Subject Number You Want To check";
    cout << endl;
    cin >> n1;

    int n2;
    cout << "Enter The second Subject Number You Want To check";
    cout << endl;
    cin >> n2;

    int n3;
    cout << "Enter The third Subject Number You Want To check";
    cout << endl;
    cin >> n3;

    int n4;
    cout << "Enter The Fourth subject Number You Want To check";
    cout << endl;
    cin >> n4;

    int n5;
    cout << "Enter The fifth subject number You Want To check";
    cout << endl;
    cin >> n5;

    if (n1 > 100 || n2 > 100 || n3 > 100 || n4 > 100 || n5 > 100)
    {
        cout << "Enter Valid Marks, Not Greater Than 100" << endl;
    }

    int per = ((n1 + n2 + n3 + n4 + n5) / 5);
    cout << "Your Percentage is" << per << endl;
    if (per >= 90)
    {
        cout << "A+";
    }
    else if (per >= 80)
    {
        cout << "A";
    }
    else if (per >= 70)
    {
        cout << "B";
    }
    else if (per >= 60)
    {
        cout << "C";
    }
    else if (per >= 50)
    {
        cout << "D";
    }
    else if (per >= 40)
    {
        cout << "E";
    }
    else if (per >= 30)
    {
        cout << "You Failed !!";
    }
}

int main()
{
    int n;
    //	cout<<"Enter The First Number You Want To check";      cout<<endl;
    //	cin>>n1;

    //	int n2;
    //	cout<<"Enter The second Number You Want To check";      cout<<endl;
    //	cin>>n2;
    //
    //		int n3;
    //	cout<<"Enter The third Number You Want To check";      cout<<endl;
    //	cin>>n3;

    //calling the functions
    //evenOrodd(n);
    //leapYearFinder(n);
    //votingCriteria(n);
    //greatestNumber(n1,n2,n3);
    //positiveNegative(n1);
    //ultaSeedhanumber();
    grading();
    return 0;
}
