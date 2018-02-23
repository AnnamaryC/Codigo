#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>


using namespace std;

void ExchangeSort(int numbers[], int &index);
void files_function (ifstream& merge1, ifstream& merge2, ofstream& output);

int main(){
	 
	 ifstream merge1, merge2;
	 ofstream output;
	 int temp;
	 
	merge1.open("merge1.txt");
	merge2.open("merge2.txt");
	
	output.open("Merged.txt");

	files_function(merge1, merge2, output);

	
	merge1.close();
	merge2.close();
	
	output.close();
	
	return 0;
}



void files_function (ifstream& merge1, ifstream& merge2, ofstream& output){
	int numbers[99];
	int index = 0;
	
	while(!merge1.eof())
	{
		merge1 >> numbers[index];
		index++;
	}
	
	while(!merge2.eof())
	{
		merge2 >> numbers[index];
		index++;
	}
	index -= 1;
	
	ExchangeSort(numbers, index);
	
	for(int i=0; i<=index; i++)
	{
		output << numbers[i] << " ";
	}
	
}


void ExchangeSort(int numbers[], int &index)
{
     int temp; 
     for (int i = 0; i < index; i++)  
    {
          for  (int j = 0; j < index; j++)
         {
                if (numbers[j] > numbers[j+1])          
               {
                        temp= numbers[j];         
                        numbers[j] = numbers[j + 1];
                        numbers[j+1] = temp;
               }
          }
     }
}
