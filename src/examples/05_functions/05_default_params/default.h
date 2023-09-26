const int weeks = 52;

//Function overlaoding
int get_weekly_pay(double salary);

int get_weekly_pay(double hours, double rate);

//function default param
double get_total(double amount, double rate = 1); 
//get_total(50) == get_total(50, 1)
//Note: Default value have to be the right most variable, otherwise
//c++ gets confused.
//There can only be one default value