// refer to globals.h for declarations
// code to search and remove non-alphanumeric characters in the given string
p_userName02 = lr_eval_string("{c_userName}");
for(k = 0; p_userName02[k] != '\0'; ++k)
	{
		while (!((p_userName02[k] >= 'a' && p_userName02[k] <= 'z') || (p_userName02[k] >= 'A' && p_userName02[k] <= 'Z') || (p_userName02[k] >= '0' && p_userName02[k] <= '9') || p_userName02[k] == '\0'))
		{
			for(l = k; p_userName02[l] != '\0'; ++l)
			{
				p_userName02[l] = p_userName02[l+1];
			}
			p_userName02[j] = '\0';
		}
	}

// string copy, concatenate and format functions to derieve a desired formatted string
strncpy(t_tmpID2,lr_eval_string("{c_uploadDatasetID}"),16);
strcat(p_userName02, t_tmpID2);
strcpy(t_cID2, "XSA");
strcat(t_cID2, p_userName02);
lr_output_message("%s", t_cID2);
lr_param_sprintf("c_columnID2", "%s", t_cID2);
