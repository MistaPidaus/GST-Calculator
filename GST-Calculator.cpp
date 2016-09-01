/** My GST Programming Code
Developed By Mista Pidaus
Helped by Zhafri
Copyright 2016
**/
#include <iostream>

using namespace std;
int main()
{
   double item_price, tax_before, gst6_difftaxb4, tax_after_prev, gst6_price, total_gst6; //value may be in decimal, so I declare as "float"
   char item_label; //only accept the declare code

   cout <<".:: Welcome to GST Calculator! ::. " << endl; //2nd line for first string

   cout << "Enter price :   RM"; //2nd line for first string
   cin >> item_price;

   cout << "Enter Item Label : "; //Enter Item Label
   cin >> item_label;
      if (!((item_label >= 'a' && item_label <= 'z') || (item_label >= 'A' && item_label <= 'Z'))) //Only accept letter
   {
       cout << "ERROR! Invalid Character.\n"; //echo error
       return 0;
   }
   
   if (item_label=='P' || item_label=='p') //Only accept character that I declared
   {
      tax_before = item_price*10/100; //tax before GST6%
   }
    else
   {
             if (item_label=='S' || item_label=='s') //Only accept character that I declared
      {
         tax_before = item_price*5/100;
	  }
    }	    
    

if (!(item_label=='S' || item_label=='s' || item_label=='P' || item_label=='p')) //Not valid la if item takde dlm declare hmm
{
      tax_after_prev = item_price+tax_before;
      cout<< "Price (including previous tax) :  RM" << tax_after_prev <<endl;
	  cout<< "Price after excluding previous tax :  RM" << item_price <<endl;
      gst6_price = item_price*0/100; //Do the GST calculation process!
	  cout<< "6% tax (GST)  :  RM" << gst6_price << endl;
	  total_gst6 = item_price + gst6_price;
      cout << "Price after include 6% tax  :  RM"  << total_gst6 << endl;
      gst6_difftaxb4 = gst6_price - tax_before;
      cout << "Different price between before and after 6% GST  :  RM" << gst6_difftaxb4 << endl;
        // display the output
}
  else{
    {
      tax_after_prev = item_price+tax_before;
      cout<< "Price (including previous tax) :  RM" << tax_after_prev <<endl;
	  cout<< "Price after excluding previous tax :  RM" << item_price <<endl;
      gst6_price = item_price*6/100; //Do the GST calculation process!
	  cout<< "6% tax (GST)  :  RM" << gst6_price << endl;
	  total_gst6 = item_price + gst6_price;
      cout << "Price after include 6% tax  :  RM"  << total_gst6 << endl;
      gst6_difftaxb4 = gst6_price - tax_before;
      cout << "Different price between before and after 6% GST  :  RM" << gst6_difftaxb4 << endl;
        // display the output
    }}
   cout << ".:: Developed by Mista Pidaus | Zhafri ::. "<< endl; //2nd line for first string

   return 0;
}




