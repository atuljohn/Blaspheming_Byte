void tail (fstream& in, int n) {
	int count = 0; // we will count how many newlines we have read.
	
	
	unsigned long long pos;
	
	char str[2 * 100]; // assuming every line is at most 200 characters
	char c;
	// just go to end of file.
	
	//if(fseek(in, 0, SEEK_END))
	if(in.seekg(0, ios::end)
		perror("fseek() failed\n");
	
	// if successfuly reached the end, then back track and count the new lines;
	
	//pos =  ftell(in);
	pos = tellg(in);
	
	while(pos) {
		//if(!fseek(in, --pos, SEEK_SET)) {
		if(!in.seekg(--pos, ios::begin)) {
			//if(fgetc(in) == '\n')
			if(in.get(c) == '\n')
				if(count++ == n)
					break;
		} else {
			perror("seekg() failed\n");
		}
	}
	// now let's print it out.
	//while(fgets(str, sizeof(str), in))
	while(getline(myFile, line))
		cout << str << endl;
}