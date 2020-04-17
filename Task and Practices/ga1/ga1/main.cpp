#include<iostream>
#include<string>
using namespace std;
int main()
{
void roulette_wheel(int fitness [population], char chromosome[population][chromelength],
char parent[population][chromelength])
{
  int i;
  int j;
  int k;
  int max_fitness;
  max_fitness=0;
  cout<<endl;
  int random;
  int running_total[population];

	for (i=0; i<population; i++)
	 {
	   max_fitness = fitness[i] + max_fitness;
		running_total[i] = max_fitness;
	   cout<<"Running Total ["<<i<<"]  "<<running_total[i]<<endl;
	 }

	 	 cout<<endl;
	   cout<<"Max Fitness = "<<max_fitness<<endl;
	   cout<<endl;

	   for (i=0; i<population; i++)
		  {
		   cout<<endl;
		   random = My_rand_no(max_fitness);
		   cout<<"Random Number = "<<random<<endl;
		   	 for (j=0; j < population; j++)
				{
				  if (random < running_total[j])
			   	{
				 	  cout<<"Chromosome	= "<<running_total[j]<<endl;
						for (k=0; k<chromelength; k++)
					  {
				 		 	parent[i][k]= chromosome[j][k];
				 		 	cout<<"Parent ["<<i<<"]		 = "<<parent[i][k]<<endl;
					  }
						  j = population + 1;
				  }
		   		}
	 	 	}
}
//------------------------------------------------------------------------------
//Cross Over & Mutation
/*Loop1
	get 2 chromosomes from parent[i]
	chromsome a = 10010  18
	chromosme b = 10111  23

	randomly select crossover point
	chromsome a = 100!10
	chromosme b = 101!11
Loop2
	then crossover the existing chromsome into the new chromosomes
	New Chromosome A = 10011   19
	New Chromosome B = 10110   22
*/
void crossover (char chromosome[population][chromelength],
char parent[population][chromelength]);

int parent[population][chromelength];
{
cout<<parent[i][k]<<endl;
}



}