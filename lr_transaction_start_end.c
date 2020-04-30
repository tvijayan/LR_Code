// refer to globals.h for declarations

strTxnName = lr_eval_string("A1_LandingPage"); 
lr_start_transaction(strTxnName);

//---------------------------------------------------//

// transaction actions block

//---------------------------------------------------//

HTTP_rc = web_get_int_property(HTTP_INFO_RETURN_CODE);

if((HTTP_rc == 200) || (HTTP_rc == 201) || (HTTP_rc == 302))
{
	lr_end_transaction(strTxnName, LR_PASS);
}
else
{
	lr_end_transaction(strTxnName, LR_FAIL);
	lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
}

lr_think_time(TT);