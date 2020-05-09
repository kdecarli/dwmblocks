//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/                 		/*Update Interval*/	/*Update Signal*/
	{"", "signal_strength.sh",	                            5,	            	0},
	{"", "cat /tmp/top_process | tail -n1 | tr '\n' '%'",   3,		            0},
	{"", "cpu_freq.sh",		                                1,                  0},
	{"", "cpu_temperature.sh",                              1,              	0},
	{"", "cpu_fanspeed.sh",			                        2,	            	0},
	{"", "memory.sh",				                        1,	            	0},
	{"", "date '+%a %d %h %Y %T'",	                        1,	            	0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[4] = " | ";
