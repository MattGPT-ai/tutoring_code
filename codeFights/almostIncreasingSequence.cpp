bool almostIncreasingSequence(std::vector<int> sequence) 
{
	  	//cout << sequence.front();
		int counter = 0;//records # of successful, comparisons where removing one elements results in the vector being strictly increasing
		int total = 0;//records # of occurences where sequence[index+1] >= sequence[index]
		for (int i = 0; i < sequence.size(); i++)//iterates and removes an element within sequence
		{
			//cout << "i: " << i;
			//cout << sequence[i];
			int temp = sequence[i];
			sequence.erase(sequence.begin() + i);
			for (int j = 0; j < sequence.size() - 1; j++)//Checks if vector is in strictly increasing order after an element is removed
			{
				//cout << sequence[j];
				//cout << sequence[j+1];
				//cout << " ";
					if (sequence[j] > sequence[j + 1])
					{
						total = 0;
						break;
					}
					else
					{
						total++;	
					}
			
			}//second for loop
			
			if (total != 0)
			{
				counter = total;//if successful and vector is strictly increasing when an element is removed, then counter is equal to the number of comparisons where sequence[index+1] >= sequence[index]

			}
			//cout << " " << counter;
			//cout << " ";
			sequence.insert(sequence.begin() + i, temp);
		}//first for loop

		if (counter == sequence.size() - 1)//if a vector or array is in strictly increasing or decreasing order, there would always be n - 1 successful comparisons between the elements, where n is size of the vector or array
		{
			cout << "true";
			return 1;
		}

		else
		{  
			cout << "false";
			return 0;
		}

}

