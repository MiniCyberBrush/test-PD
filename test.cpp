#include<iostream>
using namespace std;
main(){
cout << "Enter your name: ";
string name;
cin >> name;
cout << "Enter your roll number: ";
int roll_no;
cin >> roll_no;
cout << "Enter your aggregate: ";
float aggregate;
cin >> aggregate;
cout << "Enter your section: ";
char section;
cin >> section;
cout << "name: " << name <<endl;
cout << "Roll number: " << roll_no<<endl;
cout << "aggregate: " << aggregate<<endl;
cout << "section: " << section <<endl;



}




#include<iostream>
using namespace std;
main(){
cout << "Weight in lbs = ";
int weight_lbs;
cin >> weight_lbs;
int weight_kgs;
weight_kgs = weight_lbs*0.45;

cout << weight_lbs << " pounds are equal to " << weight_kgs << " kilograms"<<endl;




}






#include<iostream>
using namespace std;
main(){
cout << "Enter length of rectangle = ";
int length;
cin >> length;
cout << "Enter width of rectangle =";
int width;
cin >> width;
int area;
area = length * width;

cout <<" The area of rectangle is " << area ;




}









#include<iostream>
using namespace std;
main(){
cout << "Enter charge value (Q) in Coulomb = ";
int Q;
cin >> Q;
cout << "Enter Time (t) in seconds =";
int t;
cin >> t;
int Current;
Current = Q / t;

cout <<"the current (I) is " << Current ;




}






#include <iostream>
using namespace std;
main()
{
    cout << "Enter your name = ";
    string name;
    cin >> name;
    cout << "Enter Marks in matric (out of 1100) = ";
    float marks_matric;
    cin >> marks_matric;
    cout << "Enter marks in intermediate (out of 550)= ";
    float marks_inter;
    cin >> marks_inter;
    cout << "Enter marks in ECAT = ";
    float marks_ecat;
    cin >> marks_ecat;
    float aggregate;
    aggregate = (marks_matric / 1100 * 10) + (marks_inter / 550 * 40) + (marks_ecat / 400 * 50);

    cout << "The Aggregate score for " << name << " is " << aggregate;
}






#include<iostream>
using namespace std;
main(){
cout << "enter size in megabytes: ";
long long   MB;
cin >> MB;
long long bits;
bits = MB*1024*1024*8;

cout << MB << "Mb is equivalent to " << bits << " bits";




}







#include<iostream>
using namespace std;
main(){
cout << "Enter number of hours = ";
int hours;
cin >> hours;
int sec;
sec = hours*60*60;

cout << hours << " hours are equivalent to " << sec ;




}






#include<iostream>
using namespace std;
main(){
cout << "Enter Voltage (V) = ";
int V;
cin >> V;
cout << "Enter Current (A) ";
float I;
cin >> I;
int P;
P = V*I;

cout << " The power is " << P << " Watt" ;




}





#include<iostream>
using namespace std;
main(){
cout << "enter your age in years: ";
int age;
cin >> age;
int age_days; 

age_days = age * 365;

cout << " your age in days is approximately " << age_days << " days" ;




}






#include<iostream>
using namespace std;
main(){
cout << "enter the name of the cricket team: ";
string name;
cin >> name;
cout << "enter the number of wins: ";
int wins;
cin >> wins;
cout << "enter the number of draws: ";
int draws;
cin >> draws;
cout << "enter the name of losses: ";
int losses;
cin >> losses;
int total_points;
total_points = wins*3 + draws*1;
cout << " Pakistan has obtained " << total_points << " points in the Asia cup tournament" ;




}






#include<iostream>
using namespace std;
main(){
cout << "enter the current world population: ";
int population;
cin >> population;
cout << "enter the monthly birth rate (number of births per month): ";
int births;
cin >> births;
int years;
years = births*12*10;
int population_3decade;
population_3decade = population + years;
cout << " the population in three decades will be " << population_3decade;




}








#include<iostream>
using namespace std;
main(){
cout << "Enter the number of sides of the polygon: ";
int sides;
cin >> sides;
int internal_angle;
internal_angle = (sides-2)*180;
cout << "The sum of internal angles of a " << sides << "-sided polygon is: " << internal_angle << " degrees";



}







#include<iostream>
using namespace std;
main(){
cout << "Number of Minutes: ";
int minutes;
cin >> minutes;
cout << "Frames per Second: ";
int frames;
cin >> frames;
int total_frames;
total_frames = minutes*60*frames;
cout << "Total Number of Frames: " << total_frames;



}








#include<iostream>
using namespace std;
main(){
cout << "Enter Initial Velocity (m/s): ";
float initial_velocity;
cin >> initial_velocity;
cout << "Enter Acceleration (m/s^2): ";
float acceleration;
cin >> acceleration;
cout << "Enter Time (s): ";
float time;
cin >> time;
float final_velocity;
final_velocity = acceleration * time + initial_velocity;
cout << "Final Velocity (m/s): " << final_velocity;

}






#include<iostream>
using namespace std;
main(){
cout << "Enter Imposter Count: ";
float imposter_count;
cin >> imposter_count;
cout << "Enter Player Count: ";
float player_count;
cin >> player_count;
float imposter;
imposter = 100*(imposter_count/player_count);
cout << "Chance of being an imposter: " << imposter << "%";



}








#include<iostream>
using namespace std;
main(){
cout << "Enter the Name of the Person: ";
string name;
cin >> name;
cout << "Enter the target weight loss in kilograms: ";
float target;
cin >> target;
float days;
days = target*15; 
cout <<  name  << " will need " << days << " days to lose " << target << " kg of weight by following the doctor's suggestions";



}











#include<iostream>
using namespace std;
main(){
cout << "Enter the size of the fertilizer bag in pounds: ";
int size;
cin >> size;
cout << "Enter the cost of the bag: $";
int cost;
cin >> cost;
cout << "Enter the area in square feet that can be covered by the bag: ";
int area;
cin >> area;
int per_pound;
per_pound = cost/size;
int per_squarefoot;
per_squarefoot = cost/area; 
cout << "Cost of fertilizer per pound: $" << per_pound<<endl;
cout << "Cost of fertilizing per square foot: $" << per_squarefoot;



}








#include<iostream>
using namespace std;
main(){
cout << "Enter the movie name: ";
string name;
cin >> name;
cout << "Enter the adult ticket price: $";
int adult_ticket;
cin >>adult_ticket;
cout << "Enter the child ticket price: $";
int child_ticket;
cin >> child_ticket;
cout << "Enter the number of adult tickets sold: ";
int adult_number;
cin >> adult_number;
cout << "Enter the number of child tickets sold: ";
int child_number;
cin >> child_number;
cout << "Enter the percentage of the amount to be donated to charity: ";
int percentage;
cin >> percentage;
int total_amount;
total_amount = adult_ticket*adult_number + child_ticket*child_number;
int charity;
charity = total_amount/10;
int remaining;
remaining = total_amount - charity;
cout << "Movie :" << name<<endl;
cout << "Total amount generated from the ticket sales: $" << total_amount<<endl;
cout << "Donation to charity (10%): $" << charity <<endl;
cout << "Remaining amount after donation: $" << remaining;



}













#include<iostream>
using namespace std;
main(){
cout << "Enter vegetable price per kilogram (in coins): ";
float vegetable_price;
cin >> vegetable_price;
cout << "Enter fruit price per kilogram (in coins): ";
float fruit_price;
cin >> fruit_price;
cout << "Enter total kilograms of vegetables: ";
int kilogram_vegetable;
cin >> kilogram_vegetable;
cout << "Enter total kilograms of fruits: ";
int kilogram_fruits;
cin >> kilogram_fruits;
int earning;
earning = vegetable_price*kilogram_vegetable + fruit_price*kilogram_vegetable;
int total_earningRPS;
total_earningRPS = earning/1.94;
cout << "Total earnings in Rupees (Rps): " << total_earningRPS;




}









#include<iostream>
using namespace std;
main(){
cout << "enter a 4-digit number: ";
int num;
cin >> num;
int num1=  num%10;
int num2 = (num/10)%10;
int num3 = (num/100)%10;
int num4 = (num/1000)%10;
int sum = num1+num2+num3+num4;
cout << sum; 





}






#include<iostream>
using namespace std;
main(){
int number1,number2,number3,number4,number5,number6,number7,number8,number9;
int number10,number11,number12,number13,number14,number15;
cout << "number 1: ";
cin >> number1;
cout << "number 2: ";
cin >> number2;
cout << "number 3: ";
cin >> number3;
cout << "number 4: ";
cin >> number4;
cout << "number 5: ";
cin >> number5;
cout << "number 6: ";
cin >> number6;
cout << "number 7: ";
cin >> number7;
cout << "number 8: ";
cin >> number8;
cout << "number 9: ";
cin >> number9;
cout << "number 10: ";
cin >> number10;
cout << "number 11: ";
cin >> number11;
cout << "number 12: ";
cin >> number12;
cout << "number 13: ";
cin >> number13;
cout << "number 14: ";
cin >> number14;
cout << "number 15: ";
cin >> number15;
int addition;
addition = number1+number2+number3+number4+number5;
int multiplication = number6*number7*number8*number9*number10;
int subtraction = number11-number12-number13-number14-number15;
int add_result = addition+multiplication;
int final_result = add_result-subtraction;
cout << "the final result is: " << final_result;







}














#include<iostream>
using namespace std;
main(){
cout << "enter the person's age: ";
int age;
cin >> age;
cout << "enter the number of times they've moved: ";
int time;
cin >> time;
int average;
average = age/(time+1);
cout << "average number of tears lived in the same house: " << average;






}











#include<iostream>
using namespace std;
main(){
cout << "Number of square meters you can paint: ";
int n;
cin >> n;
cout << "Width of the single wall (in meters): ";
int w;
cin >> w;
cout << "Height of the single wall (in meters): ";
int h;
cin >> h;
int area = w*h;
int wallsYouCanPaint;
wallsYouCanPaint = n/area;
cout << "Number of walls you can paint: " << wallsYouCanPaint ;




}







#include <iostream>
using namespace std;
main() {
    int num, sum;
    sum = 0;
    cout << "Enter the first integer: ";
    cin >> num;
    sum += num;

    cout << "Enter the second integer: ";
    cin >> num;
    sum += num;

    cout << "Enter the third integer: ";
    cin >> num;
    sum += num;

    cout << "Enter the fourth integer: ";
    cin >> num;
    sum += num;

    cout << "Enter the fifth integer: ";
    cin >> num;
    sum += num;

    cout << "The sum of the entered integers is: " << sum ;

}








#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){
float distance;
cout << "Enter the distance: ";
cin >> distance;
calculateFuel(distance);

}


void calculateFuel(float distance)
{
   float fuel_needed;
   fuel_needed = distance*10;
   cout << "Fuel needed: " << fuel_needed;
   
}









#include<iostream>
using namespace std;
void inchesToFeet(float inches);
main()

{
   float inches;
   cout << "Enter the measurement in inches: ";
   cin >> inches;
   inchesToFeet(inches);

}

void inchesToFeet(float inches)
{
  float measurement_feet;
  measurement_feet = inches/12;
  cout << "Equivalent in feet: " << measurement_feet ;
   
}








#include<iostream>
using namespace std;
void howManyStickers(int side_length);
main()

{
   int side_length;
   cout << "Enter the side length of the Rubik's Cube: ";
   cin >> side_length;
   howManyStickers(side_length);

}

void howManyStickers(int side_length)
{
  int stickers;
  stickers = side_length*side_length*6;
  cout << "Number of stickers needed: " << stickers ;
   
}









#include<iostream>
using namespace std;

main()

{
   float num1,num2;
   cout << "Enter 1st number: ";
   cin >> num1;
   cout << "Enter 2nd number: ";
   cin >> num2;
   cout << "Enter an operator (+, -, *, /): ";
   char o;
   cin >> o; 
   if( o == '+' )
    {
    float addition;
     addition = num1 + num2;
     cout << "Addition: " << addition;
    }
   if( o == '-' )
    {
    float subtraction;
     subtraction = num1 - num2;
     cout << "Subtraction: " << subtraction;
    }
   if( o == '*' )
    {
      float multiplication;
     multiplication = num1 * num2;
     cout << "Multiplication: " << multiplication;
    }
   if( o == '/' )
    { 
      float division;
      division = num1/num2;
      cout << "Division: " << division;
    }
}











#include<iostream>
using namespace std;
void Vote(int age);
main(){
cout << "Enter your age: ";
int age;
cin >> age;
Vote(age);




}

void Vote(int age)
{


if (age >= 18)
cout << "You are eligible to vote.";
if (age < 18)
cout << "You are not eligible to vote.";

}











#include<iostream>
using namespace std;
void test_score(int score);
main(){
int score;
cout << "Enter your score: ";
cin >> score;
test_score(score);

}


void test_score(int score)
{
if (score > 50)
  cout << "Pass" ;
if (score <= 50)
  cout << "Fail";

   
}









#include<iostream>
using namespace std;
void evenOrOdd(int number);
main(){
int number;
cout << "Enter a number: ";
cin >> number;
evenOrOdd(number);

}


void evenOrOdd(int number)
{
if (number%2==0)
  cout << "Number " << number << " is even" ;
if (number%2==1)
  cout << "Number " << number << " is odd";

   
}













#include<iostream>
using namespace std;
void discount(string day, float purchase);
main(){
float purchase;
string day;
cout << "Enter the day of purchase: ";
cin >> day;
cout << "Enter the total purchase amount: $";
cin >> purchase;
discount(day,purchase);

}


void discount(string day, float purchase)
{
   
   if (day == "Sunday"||"sunday")
   {
     float discounted_value;
     discounted_value = purchase*0.1;
     float payable_amount = purchase - discounted_value;
     cout << "Payable Amount: $" << payable_amount;
  }
   else if (day != "Sunday"||"sunday")
      cout << "Payable Amount: $" << purchase;
}







#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){
int distance;
cout << "Enter the distance: ";
cin >> distance;
calculateFuel(distance);

}


void calculateFuel(float distance)
{
   float fuel_needed;
   fuel_needed = distance*10;
   if (fuel_needed < 100)
   cout << "Fuel needed: 100";
   if (fuel_needed > 100)
   cout << "Fuel needed: " << fuel_needed;
   
}









#include<iostream>
using namespace std;
main(){

while (1) 
cout << "minahil" ;

}












#include<iostream>
using namespace std;
void names(string name);
main(){


string name;
cout << "Enter your name: " ;
cin >> name;


names(name);
}

void names(string name)
{

 while (1) 
  cout << name;


}
 










 #include<iostream>
using namespace std;
void discount(string day, float purchase);
main(){
system("cls");
while(1)
{
float purchase;
string day;
cout << "Enter the day of purchase: ";
cin >> day;
cout << "Enter the total purchase amount: $";
cin >> purchase;
discount(day,purchase);
cout << endl;
}
}


void discount(string day, float purchase)
{
   
   if (day == "sunday")
   {
     float discounted_value;
     discounted_value = purchase*0.1;
     int payable_amount = purchase - discounted_value;
     cout << "Payable amount $" << payable_amount;
  }
   else if (day != "sunday")
     {
      float discount_value;
      discount_value = purchase*0.05;
      int  AmountToBePaid = purchase - discount_value;
      cout << "Payable amount: $" <<  AmountToBePaid;
     }


}











#include<iostream>
using namespace std;
void IsEqual(int num1, int num2);
main(){
int num1 ,num2;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

IsEqual(num1 , num2);




}

void IsEqual(int num1, int num2)
{
 if (num1 > num2)
    cout << "false";
 if (num1 < num2)
    cout << "false";
 if (num1 == num2)
     cout << "true";






}










#include <iostream>
using namespace std;
void Reverse(string binary);
main()
{
   string binary;
   cout << "Enter 'true' or 'false': ";
   cin >> binary;
   Reverse(binary);
}

void Reverse(string binary)
{
   if (binary == "true")
      cout << "false";

   if (binary == "false")
      cout << "true";
}













#include <iostream>
using namespace std;
void discount(string name, float price);
main()
{
    string name;
    float price;
    cout << "Enter the country's name: ";
    cin >> name;
    cout << "Enter the ticket price in dollars: $";
    cin >> price;
    discount(name, price);
}
void discount(string name, float price)
{
    float discount_value;
    if (name == "Pakistan")
    {
        discount_value = price * 0.05;
    }
    if (name == "Ireland")
    {
        discount_value = price * 0.1;
    }
    if (name == "India")
    {
        discount_value = price * 0.2;
    }
    if (name == "England")
    {
        discount_value = price * 0.3;
    }
    if (name == "Canada")
    {
        discount_value = price * 0.45;
    }
     cout << "Final ticket price after discount: $" << price-discount_value;
    
    }










    #include<iostream>
using namespace std;
void CheckSpeed(int speed);
main(){
int speed;
cout << "Speed: ";
cin >> speed;
CheckSpeed(speed);







}
void CheckSpeed(int speed)
{
if (speed > 100)
cout << "Halt... YOU WILL BE CHALLENGED!!!";
if (speed < 100 )
cout << "Perfect! You're going good.";




}










#include<iostream>
using namespace std;
void PossibleBonus(int a , int b);
main(){
int a,b;
cout << "Enter your position: ";
cin >> a;
cout << "Enter your friend's position: ";
cin >> b;
PossibleBonus(a , b);



}
void PossibleBonus(int a , int b)
    {

if (b-a <= 6)
cout << "true";
if (b-a > 6)
cout << "false";



    }










    #include<iostream>
using namespace std;
void LongestTime(int hour , int minutes);
main(){

int hour,minutes;
cout << "Enter the number of hours: ";
cin >> hour;
cout << "Enter the number of minutes: ";
cin >> minutes;
LongestTime(hour ,minutes);







}

void LongestTime(int hour , int minutes)
{
if (hour*60>minutes)
cout << hour;
else 
cout << minutes;




}











#include<iostream>
using namespace std;
void FlowerShop(int red_rose, int white_rose , int tulips);
main(){
int red_rose, white_rose,tulips; 
cout << "Red Rose: ";
cin >> red_rose;
cout << "White Rose: ";
cin >> white_rose;
cout << "Tulips: ";
cin >> tulips;

FlowerShop(red_rose,white_rose ,tulips);





}
void FlowerShop(int red_rose, int white_rose , int tulips)
{
float original_price = red_rose*2.0 + white_rose*4.10 + tulips*2.50;
cout << "Original price: $" << original_price <<endl;
if (original_price>200)
{
float discount_price = original_price-original_price*0.2;
cout << "Price after Discount: $" << discount_price;

}

else if (original_price<200)
{
    cout << "No discount applied." ;
}




}













#include<iostream>
using namespace std;
void pet(int holidays);
main(){
int holidays;
cout << "Holidays: ";
cin >> holidays;
pet(holidays);
}
void pet(int holidays)
{

int working_days = 365-holidays;
int time_for_games = (365-holidays)*63+(holidays*127);
int difference_from_norm = 30000-time_for_games;
int hours = difference_from_norm/60;
int minutes = difference_from_norm % 60;

if (difference_from_norm >=0) 
    {
        cout << "Tom sleeps well"<<endl ;
        cout << hours << " hours and " << minutes << " minutes less for play" ;

    } else 
    
    {
        cout << "Tom will run away"<<endl;
        cout << -1*hours << " hours and " << -1*minutes << " minutes for play" ;
}
}
















#include<iostream>
using namespace std;
void tpChecker(int people , int tp);
main(){

int tp, people;
cout << "Number of people in the household: ";
cin >> people;
cout << "Number of rolls of TP: ";
cin >> tp;
tpChecker(people ,tp);

}

void tpChecker(int people , int tp)
{
int check = (tp*500)/(people*57);
if (check < 14)
cout << "Your TP will only last " << check << " days, buy more!";
if (check >= 14)
cout << "Your TP will last "<< check << " days, no need to panic!";


}














#include<iostream>
#include<windows.h>
using namespace std;
void moveplayer(int x,int y);
void gotoxy(int x , int y );
void maze();
main (){
system("cls");
int x=4,y=5;
maze();
moveplayer(x,y);



gotoxy(4,13);



}
void moveplayer(int x,int y)
{
while(1)
{
gotoxy(x, y);
cout << "P";
Sleep(200);
gotoxy(x,y);
cout << " ";

x=x+1;
if (x==24)
x=4;
}


}

void maze()
{

cout << "*************************"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*************************"<<endl;

 
}

void gotoxy(int x , int y )
{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);





}
