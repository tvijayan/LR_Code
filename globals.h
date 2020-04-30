#ifndef _GLOBALS_H 
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

//--------------------------------------------------------------------
// Global Variables
char *strTxnName;
double TT = 30;
int tCount;
int HTTP_rc;

//	random name generator
random_lnamegen(char* param_lname, int length) 
{
	char buffer[32] = "";
 	int r,i;
 	char c; 	
 	srand((unsigned int)time(0)); 	
 	for (i = 0; i < length; i++) 
 	{
 		r = rand() % 25 + 65;
 		c = (char)r; 		
 		buffer[i] = c; 		
 		if (buffer[i] == buffer[i-1])
 		{
 			r = rand() % 25 + 65;
 			c = (char)r;
 			buffer[i] = c;
 		}
 	} 	
 	lr_save_string(buffer, param_lname); 	
 	return 0;
}

//	write output to file
char * registeredLog = ".\\_registeredlog.txt";
long fstream;

// string manipulation variables
int i, j, k, l;
char* p_tmpID;
char* p_userName01;
char* p_userName02;
char t_cID1[32];
char t_cID2[32];
char t_tmpID1[24];
char t_tmpID2[24];

#endif // _GLOBALS_H