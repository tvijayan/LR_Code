// refer to globals.h for declarations
// write registered users & payment issued logs to file	
if ((fstream = fopen(registeredLog, "a+")) == NULL) // open file in append mode
{ 
	lr_error_message ("Cannot open %s", registeredLog); 
	return -1; 
}

fprintf (fstream, "First Name: %s | Last Name: %s | Reference No.: %s | Type: %s | Payment ID: %s | Nominee: %s | Method: %s | Payment Date: %s | Amount: %s\n", 
         lr_eval_string("{p_fname}"),
         lr_eval_string("{p_lname}"),
         lr_eval_string("{c_registernewperson_referenceNo}"),
         lr_eval_string("{c_type}"),
         lr_eval_string("{c_paymentID}"), 
         lr_eval_string("{c_nominee}"),
         lr_eval_string("{c_method}"),
         lr_eval_string("{c_paymentdate}"),
         lr_eval_string("{c_amount}"));

fclose(fstream);