/*
School  : Contra Costa College 
Term    : 2017 Spring
Course:   Comp-251-2384
        
Chapter : 3
Program : Pr03b-Vote-Gurung-Rabin.cpp
Auther  : Gurung, Rabin
Date    : Feb. 7, 2017
Purpose : Continue getting familiar with concepts in 
          Chapter 3, including variables, values and calculations,
          plus rounding (if  time permits)

Problem : Declare variables shown on the classroom
          screen

          To the console, output a program title and 
          some column headings, as shown on the 
          classroom screen
 
          For the United States presidential 
          election four years ago, store in 
          variable the election year, the ;last
          and first name of the Democratic and 
          the Republican Candidates, and his or her 
          Popular vote count (in thousands).
          
          Calculate a percentage (rounded to one 
          decimal place) of the popular vote that 
          each major-party candidate recieved.
       
          (Pretend that no third-party or 
          independent candidates participated in
          the election).
      
          To the console, output stored and 
          calculated values neatly beneath their 
          respective column headings. 
 
          Repeat the process for the most recent
          presidential election (if time permits)
  
          For coding conventions, see comments in 
          the prior program.
 */
  
           
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  // Declare variables 

  string year;   //Election year

  string nameD;  //Candidate name, Democrat
  string nameR;  //Candidate name, Republican
  
  int   countD;  //pupular vote count, Dem.
  int   countR;  //popular vote count, Rep.

  float   sum;   //pupular vote sum
 
  int    trun;   //Truncated percentage 

  float pctD;    //popular vote percentage, Dem.
  float pctR;    //popular vote percentage, Rep.
 
  //To the console, output program title and 
  //column headings

  cout << endl;
  cout << "Popular Vote Program" << endl;
  cout << "--------------------" << endl;
  cout << endl;
  cout << "Year  candidate Name    Count  Pct" << endl;
  cout << "----  --------------    -----  ---" << endl;

  // Assign Values 

  year   = "2012";
 
  nameD  = "Obama, Barack   ";
  nameR  = "Romney, Mitt    ";
 
  countD = 65446;
  countR = 60589;
 
  //Calculate sum and percentages
  
  sum  = countD + countR;
  pctD = countD / sum;
  trun = pctD * 1000.0 + 0.5;
  pctD = trun / 10.0;

  //pctD = countD * 100.0/sum;

  //pctR = countR * 100.0/sum;

  pctR = countR / sum;

  trun = pctR * 1000.0 + 0.5;
 
  pctR = trun / 10.0;

  //To the console, output results
   
  cout << endl;
  cout << year   << "  ";
  cout << nameD  << "  ";
  cout << countD << "  ";
  cout << pctD   << "%" << endl;

  //To the console, output results

  cout << endl;  
  cout << year   << "  ";
  cout << nameR  << "  ";
  cout << countR << "  ";
  cout << pctR   << "%" << endl;

 // Assign Values 

  year   = "2016";
 
  nameD  = "Clinton, Hilary ";
  nameR  = "Trump, Donald   ";
 
  countD = 65845;
  countR = 62980;
  
  cout << endl;
 
  //Calculate sum and percentages
  
  sum  = countD + countR;
  pctD = countD / sum;
  trun = pctD * 1000.0 + 0.5;
  pctD = trun / 10.0;


  //pctD = countD * 100.0/sum;

  //pctR = countR * 100.0/sum;
 
  pctR = countR / sum;
  trun = pctR * 1000.0 + 0.5;
  pctR = trun / 10.0;
 

  //To the console, output results
   
  cout << endl;
  cout << year   << "  ";
  cout << nameD  << "  ";
  cout << countD << "  ";
  cout << pctD   << "%" << endl;
  

  //To the console, output results

  cout << endl;  
  cout << year   << "  ";
  cout << nameR  << "  ";
  cout << countR << "  ";
  cout << pctR   << "%" << endl;
  cout << endl;
 
}