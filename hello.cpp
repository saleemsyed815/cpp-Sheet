#include <iostream>                                     //Header File 

int main(){
    std::cout<<"Hello\n";                               //standard charachter output
    std::cout<<"World"<<std::endl;                      //endl ends line

    return 0;                                           // If we return 0 then there is no problem in code if returned -1 there is a problem
}


// Data Types

#include <iostream>

int main() {

    //int (whole number)
    int age = 21;
    int year = 2023;
 
    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;

    //char (single character)
    char grade = 'A';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
 
    //string (objects that represent a sequence of text)
    std::string name = "Saleem";
    std::string address = "3-150 Hafeezpet";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}


// Const

// The Variable we do not want change can be stored using const. In const name of the variable should be in UPPER CASE
#include <iostream>

int main() {
    const double PI = 3.14159;
    //PI = 420.69; This will cause an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}


// Namespace

// Namespace provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the name space are different

#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {

    int x = 0;

    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;

    return 0;
}

Output:
 0
 1 
 2

using namespace std below header can stop reusing of std in every operation
But std has a lot of functions So, we can use using (using namespace std::cout) for calling cout operations


// typedef
it is a reserved keyword used to create an additional name(alias) for another data type
for example :
 let there be a data type as
    std::vector<std::pair<std::string, int>>;
 for this we can use 
    typedef std::vector<std::pair<std::string, int>> pairlist_t;
and can call the data type like pairlist_t variable1 = xyz

typedef is largely replaced with using keyword because it largely suits templates

#include <iostream>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Syed";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}

arithmetic operations
#include <iostream>

int main() 
{
   int students = 20;

   addition
   ------------------
   students = students + 1;
   students+=1;
   students++;

   subtraction
   ------------------
   students = students - 1;
   students-=1;
   students--;

   multiplication
   ------------------
   students = students * 2;
   students*=2;

   division
   ------------------
   students = students / 2;
   students/=2;

   modulus
   ------------------
   int remainder = students % 3;
   std::cout << remainder;

   std::cout << students;

   return 0;
}


// Type Conversion

there are two types of data conversion
impicit--- done automatically
example if we divide float but the output variable is int so it changes the number in int and return int
and can be used to convert number into its ASCII value
explicit-- done manually

#include<iostream>
 
int main()
{
    // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}


Accepting inputs in c++

#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() 
{
   std::string name;
   int age;

   std::cout << "What's your full name?: ";
   std::getline(std::cin >> std::ws, name);                     //if our input conatins some white spaces then we use getline function  and std::ws eliminates newline charachters for any whitespaces  before user input

   std::cout << "What's your age?: ";
   std::cin >> age;

   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age << " years old";

   return 0;
}


// Math Function
#include <iostream>
#include <cmath>                                //Contain Math Functions

int main() 
{
   double x = 3.99;
   double y = 4;
   double z;

   z = std::max(x, y);                          //Finds max value
   z = std::min(x, y);                          //Finds min value
   z = pow(2, 4);                               //Finds power   
   z = sqrt(9);                                 //Finds squareroot
   z = abs(-3);                                 //Absolute Value
   z = round(x);                                //Round up the Number
   z = ceil(x);                                 //Round up the Number and increases
   z = floor(x);                                //Round up the Number and decreases
    For more math functions---- cplusplus/reference/cmath/

   std::cout << z;

   return 0;
}


//If statement
#include <iostream>

int main() 
{
   int age;

   std::cout << "Enter your age: ";
   std::cin >> age;

   if(age >= 18){
      std::cout << "Welcome to the site!";
   }
   else if(age < 0){
      std::cout << "You haven't been born yet!";
   }
   else{
      std::cout << "You are not old enough to enter!";
   }

   return 0;
}

//Switch
#include <iostream>

int main() 
{
   char grade;

   std::cout << "What letter grade?: ";
   std::cin >> grade;

   switch(grade){
      case 'A':
         std::cout << "You did great!";
         break;
      case 'B':
         std::cout << "You did good";
         break;
      case 'C':
         std::cout << "You did okay";
         break;
      case 'D':
         std::cout << "You did not do good";
         break;
      case 'F':
         std::cout << "YOU FAILED!";
         break;
      default:
         std::cout << "Please only enter in a letter grade (A-F)";
   }

   return 0;
}


// ternary operator
ternary operator ?: = replacement to an if/else statement
   condition ? expression1 : expression2;
#include <iostream>

int main() 
{
   int grade = 50;
   grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

   int number = 9;
   number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

   bool hungry = true;
   hungry ? std::cout << "You are hungry" : std::cout << "You are full";

   return 0;
}

// Logical operator
   && = check if two conditions are true
   || = check if at least one of two conditions is true
   !  = reverses the logical state of its operand

#include <iostream>

int main() 
{
   int temp;
   bool sunny = false;

   std::cout << "Enter the temperature: ";
   std::cin >> temp;

   if(temp > 0 && temp < 30){
      std::cout << "The temperature is good!\n";
   }
   else{
      std::cout << "The temperature is bad!\n";
   }

   if(temp <= 0  || temp >= 30){
      std::cout << "The temperature is bad!\n";
   }
   else{
      std::cout << "The temperature is good!\n";
   }

   if(!sunny){                                          //Generally if(sunny) means true but using ! checks for false
      std::cout << "It is cloudy outside!";
   }
   else{
      std::cout << "It is sunny outside!";
   }

   return 0;
}

// string methods
getline()                           //for white spaces input
.length()                           //retunrs length of the string
.empty()                            //To check if empty or not             
.clear()                            //clears
.append()                           //appends thestring with another string
.at()                               //returns index
.insert(index, "value to insert")   //inserts
.find()                             //finds the charachter and retuns index
.erase(0, 3)                        //Erase charachters from 0 to 3

For more cplusplus/reference/cstring

// While loop
#include <iostream>

int main() 
{
   std::string name;
   
   while(name.empty()){                 //until name is empty keeps on running
      std::cout << "Enter your name: ";
      std::getline(std::cin, name);
   }
   
   std::cout << "Hello " << name;

   return 0;
}

// Do while loop
#include <iostream>
 
int main()
{
   int number;

   do{
      std::cout << "Enter a positive #: ";
      std::cin >> number;
   }while(number < 0);

   std::cout << "The # is: " << number;

   return 0;
}

// For Loops
#include <iostream>
 
int main()
{
   for(int i = 10; i > 0; i--){
      //count down to 10
      std::cout << i << '\n';
   }
 
   std::cout << "HAPPY NEW YEAR!\n";  
 
   return 0;
}

// break and continue statement
#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 12){
            //break;                    // breaks out of the loop
            //continue;                 // skips 12 and continue the loop
        }
        std::cout << i << '\n';
    }

    return 0;
}

// Nested loops
#include <iostream>
 
int main()
{
   int rows;
   int columns;
   char symbol;

   std::cout << "How many rows?: ";
   std::cin >> rows;

   std::cout << "How many columns?: ";
   std::cin >> columns;

   std::cout << "Enter a symbol to use: ";
   std::cin >> symbol;

   for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= columns; j++){
         std::cout << symbol;
      }
      std::cout << '\n';
   }

   return 0;
}


//Random number
#include <iostream>

int main()
{
    srand(time(NULL));

    int num = rand();

    std::cout<<num;

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}

//Random Event Generator
#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker!\n";
                break;
        case 2: std::cout << "You win a t-shirt!\n";
                break;
        case 3: std::cout << "You win a free lunch!\n";
                break;
        case 4: std::cout << "You win a gift card!\n";
                break;
        case 5: std::cout << "You win concert tickets!\n";
                break;
    }

    return 0;
}

//Number Guessing Game
#include <iostream>

int main() {
    int num, guess, tries;
    srand(time(0));
    
    num = (rand()%100) + 1;
    
    do{
        std::cout<<"Guess the number: ";
        std::cin>>guess;
        
        if(guess>num)
        std::cout<<"To High\n";
        
        else if(guess<num)
        std::cout<<"To Low\n";
        
        else
        std::cout<<"\nCorrect Guess "<<guess;
        
        
    }while(guess!=num);
}