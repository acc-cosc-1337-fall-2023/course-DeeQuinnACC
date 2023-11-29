#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//use_parallel_arrays();
	//arrays_and_pointers();
	int times_table[ROWS][COLS];
	populate_time_time(times_table, ROWS);
	display_time_table(times_table, ROWS);

	return 0;

}