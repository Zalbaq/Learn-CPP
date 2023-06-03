// Update the code below to solve the problem


#include <bits/stdc++.h>
#include <string>


int main() 
{
	int t;
    std::cin >> t;
	
	while(t--)
	{
	    // declare N as a string instead of an integer
	    std::string N;
	    std::cin >> N;
	    // array to hold all integers of the number
	    int final_ans[N.length()];
	    
	    
	    for(int i = 0; i < N.length(); i++)
	    {
	        // Convert the elements in the string N to integer(by subtracting '0' from each character) and insert it to the array
	        final_ans[i] = N[i] - '0'; // we calculate the ASCII character
	    }
	   
	    for(int i = 0; i < N.length(); i++)
	    {
	        std::cout << final_ans[i] << " ";
	    }
	    
	    std::cout << std::endl;
	}
}