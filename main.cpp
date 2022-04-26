#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"Podaj rozmiar macierz:"<<endl;
cin>>n;//rozmiar macierzy
int ** tablica = new int * [n];//alokujemy tablice na wskazniki
for (int i = 0; i<n; i++)
{
    tablica[i] = new int [n];
}//wypisujemy wiersze czyli tworzymy tablice dwu wymiarowa
		
for(int i = 0; i<n;i++)
{
    for(int j = 0; j<n;j++)
    {  cout<<"Podaj "<<i+1<< " liczbe:";
    cin>>tablica[i][j];
    cout<<endl;

   }   
   }
  for(int i = 0; i<n;i++)
{
    for(int j = 0; j<n;j++)
    {  
        cout<<tablica[i][j]<<" ";
    
    } 
    cout<<endl;
}
   for (int i = 0; i<n; i++)
   {
       delete [] tablica[i];//usuwamy tablice
   }
		

delete [] tablica; 
    return 0;
}