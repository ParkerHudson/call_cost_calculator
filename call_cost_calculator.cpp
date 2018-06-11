
/*

Name: Gregory Hudson
Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 1/23/17
Due Time: 11:30pm
Module 2: Assignment #1
Date program: 1/19/17

Description : This program calculates the net cost of a call, the tax on a call
and the total cost of the call.

*/



		
#include <iostream> //standard library for i/o
#include <string>   //library used for type string variables

		using namespace std;

int main()
{

	cout.setf(ios::fixed);        //To specify fixed point notation
	cout.setf(ios::showpoint);    //To specify that the decimal point will always be shown
	cout.precision(2);            //To specify that two decimal places will always be shown

	int relays;
	string cell_number; //The phone number
	double tax_rate;    //Tax rate 
	double net_cost;    //Net cost of the phone call
	double call_length; //How long the phone call is
	double call_tax;    //The phone call tax
	double total_cost;  //Total cost of the phone call

	
	//When the user types in yes to continue the calculations of the phone cost
	string user_response = "y"; 
	
	



	while (user_response == "y" || user_response == "Y")  //while loop used to repeat input statements if users desires to continue calculations 
		                                                  //for their phone call
	{
		
		//The code to get the user's input, perform the calculations, and print
		// the results to the screen should go here.

		cout << "Please enter cell phone number: "; //Prompt given to the user to input their cell phone number
		cin >> cell_number;                         //reads cell phone number

		cout << "Please enter relays: ";  //Prompt given to users to enter the number of relays in the area
		cin >> relays;                    //reads relays

		cout << "Please enter call length: ";   //Prompt given to users to enter how long their phone call was
		cin >> call_length;                    //reads the call length


		if (relays >= 0 && relays <= 5) {        // if the number of relay sations is >= 0 and the number of relay stations is <=5
			                                     //the tax rate is 1%
			tax_rate = 0.01;
			//tax rate is 1%
		}

		else if (relays >= 6 && relays <= 11) {   // if the number of relay sations is >= 6 and the number of relay stations is <=11
			                                     //the tax rate is 3%
			tax_rate = 0.03;
			//tax rate is 3%
		}

		else if (relays >= 12 && relays <= 20) {   // if the number of relay sations is >= 12 and the number of relay stations is <=20
			                                     //the tax rate is 5%
			tax_rate = 0.05;
			//tax rate is 5%
		}

		else if (relays >= 21 && relays <= 50) {  // if the number of relay sations is >= 21 and the number of relay stations is <=50
			                                     //the tax rate is 8%
			tax_rate = 0.08;
			//tax rate is 8%
		}

		else {                                    // if the number of relay sations is greater than 50 then the tax rate is 12%
			                                     
			tax_rate = 0.12;
			//tax rate is 12%
		}

	

		net_cost = (relays / 50.0 * 0.40 * call_length);  //Formual to get the net cost of the phone call
		call_tax = (net_cost * tax_rate);  //Formula to get the call tax of the phone call
		total_cost = (net_cost + call_tax);  //Formula to get the total cost of the phone call

		cout << "Cell number: " << cell_number << endl;    //Output of the cell number cost
		cout << "Number of Relay Sations: " << relays << endl;  //Output of the number of relay stations
		cout << "Call Length: " << call_length << endl; //Output of the call length
		cout << "Net Cost: " << net_cost << endl;  //Output of the net cost 
		cout << "Call Tax: " << call_tax << endl;  //Output of the phone call tax
		cout << "Total Cost of Call: " << total_cost << endl;  //Output of the total cost of the phone call

	

		//Prompting the user to enter yes or no to continue calculating the cost of the phone call
	    cout << "Would you like to do another calculation (Y or N): " << endl;  
		cin >> user_response;

	}

	
       

	return  0;
}
