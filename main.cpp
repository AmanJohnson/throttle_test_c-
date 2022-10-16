#include <iostream> // Provides cout and cin
#include <cstdlib> // Provides EXIT_SUCCESS
using namespace std; // Allows all Standard Library items to be used

class throttle
{
public:
// MODIFICATION MEMBER FUNCTIONS
void shut_off( );
void shift(int amount);
// CONSTANT MEMBER FUNCTIONS
double flow( ) const;
bool is_on( ) const;
private:
int position;
};

main () {
throttle sample;
int user_input;
// Set the sample throttle to a position indicated by the user.
cout << "I have a throttle with 6 positions." << endl;
cout << "Where would you like to set the throttle? " << endl;
cout << "Please type a number from 0 to 6: ";
cin >> user_input;
sample.shut_off( );
sample.shift(user_input);
// Shift the throttle down to zero, printing the flow along the way.
while (sample.is_on( ))
{
cout << "The flow is now " << sample.flow( ) << endl;
sample.shift(-1);
}
cout << "The flow is now off" << endl;
return EXIT_SUCCESS;
}