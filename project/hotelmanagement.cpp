#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	
	int Qrooms=0, Qriceplate=0, Qpasta=0, Qnoodle=0, Qburger=0, Qpizza=0, Qmocktail=0;
	
	int Srooms=0, Sriceplate=0, Spasta=0, Snoodle=0, Sburger=0, Spizza=0, Smocktail=0;
	
	int Total_rooms=0, Total_riceplate=0,Total_pasta=0, Total_noodle=0, Total_burger=0, Total_pizza=0, Total_mocktail=0;
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms Available :";
	cin>>Qrooms;
	cout<<"\n Quantity of Riceplate :";
	cin>>Qriceplate;
	cout<<"\n Quantity of Pasta :";
	cin>>Qpasta;
	cout<<"\n Quantity of Noodles :";
	cin>>Qnoodle;
	cout<<"\n Quantity of Burgers :";
	cin>>Qburger;
	cout<<"\n Quantity of Pizzas :";
	cin>>Qpizza;
	cout<<"\n Quantity of Mocktails :";
	cin>>Qmocktail;
	
	m:
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Riceplate";
	cout<<"\n3) Pasta";
	cout<<"\n4) Noodle";
	cout<<"\n5) Burger";
	cout<<"\n6) Pizza";
	cout<<"\n7) Mocktail";\
	cout<<"\n8) Information regarding sales and collection ";
	cout<<"\n9) Exit";
	
	cout<<"\n\n Please enter your choice ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			
			cin>>quant;
			if(Qrooms-Srooms >= quant)
			{
				Srooms=Srooms+quant;
				Total_rooms= Total_rooms+quant*1500;
				cout<<"\n\n\t\t"<<quant<<"room\rooms have been alloted to you! ";
				
			}
			else
			
			cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms Available for rent ";
			break;
			
			case 2:
				cout<<"\n\n Enter Riceplate Quantity :";
				
				cin>>quant;
				if(Qriceplate-Sriceplate >= quant)
				{
					Sriceplate=Sriceplate+quant;
				Total_riceplate=Total_riceplate+quant*70;
				cout<<"\n\n\t\t"<<quant<<" Riceplate is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qriceplate-Sriceplate<<" Riceplate is remaining in the hotel ";
				break;
				
				case 3:
				cout<<"\n\n Enter Pasta Quantity :";
				
				cin>>quant;
				if(Qpasta-Spasta >= quant)
				{
					Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quant*299;
				cout<<"\n\n\t\t"<<quant<<" Pasta is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qpasta-Spasta<<" Pasta is remaining in the hotel ";
				break;
				
				case 4:
				cout<<"\n\n Enter Noodle Quantity :";
				
				cin>>quant;
				if(Qnoodle-Snoodle >= quant)
				{
					Snoodle=Snoodle+quant;
				Total_noodle=Total_noodle+quant*120;
				cout<<"\n\n\t\t"<<quant<<" Noodle is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qriceplate-Sriceplate<<" Noodle is remaining in the hotel ";
				break;
				
				case 5:
				cout<<"\n\n Enter Burger Quantity :";
				
				cin>>quant;
				if(Qburger-Sburger >= quant)
				{
					Sburger=Sburger+quant;
				Total_riceplate=Total_burger+quant*55;
				cout<<"\n\n\t\t"<<quant<<" Riceplate is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger is remaining in the hotel ";
				break;
				
				case 6:
				cout<<"\n\n Enter Pizza Quantity :";
				
				cin>>quant;
				if(Qpizza-Spizza >= quant)
				{
					Spizza=Spizza+quant;
				Total_pizza=Total_pizza+quant*110;
				cout<<"\n\n\t\t"<<quant<<" Pizza is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qpizza-Spizza<<" Pizza is remaining in the hotel ";
				break;
				
				case 7:
				cout<<"\n\n Enter Mocktail Quantity :";
				
				cin>>quant;
				if(Qmocktail-Smocktail >= quant)
				{
					Smocktail=Smocktail+quant;
				Total_mocktail=Total_mocktail+quant*150;
				cout<<"\n\n\t\t"<<quant<<" Mocktail is the order! ";
				
				}
				else
				cout<<"\n\tOnly"<<Qmocktail-Smocktail<<" Mocktail is remaining in the hotel ";
				break;
				
				case 8:
					
					cout<<"\n\t\tDetails of sales and collection ";
					cout<<"\n\n Number of rooms we had : "<<Qrooms;
					cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
					cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
					cout<<"\n\n Total room collection for the day : "<<Total_rooms;
			
					cout<<"\n\n Number of Riceplate we had : "<<Qriceplate;
					cout<<"\n\n Number of Riceplate we sold : "<<Sriceplate;
					cout<<"\n\n Remaining riceplates : "<<Qriceplate-Sriceplate;
					cout<<"\n\n Total riceplate collection for the day : "<<Total_riceplate;
					
					cout<<"\n\n Number of pasta we had : "<<Qpasta;
					cout<<"\n\n Number of pastas we sold : "<<Spasta;
					cout<<"\n\n Remaining pastas : "<<Qpasta-Spasta;
					cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;
					
					cout<<"\n\n Number of noodle we had : "<<Qnoodle;
					cout<<"\n\n Number of noodles we sold : "<<Snoodle;
					cout<<"\n\n Remaining noodles : "<<Qnoodle-Snoodle;
					cout<<"\n\n Total noodle collection for the day : "<<Total_noodle;
					
					cout<<"\n\n Number of burger we had : "<<Qburger;
					cout<<"\n\n Number of burgers we sold : "<<Sburger;
					cout<<"\n\n Remaining burgers : "<<Qburger-Sriceplate;
					cout<<"\n\n Total burger collection for the day : "<<Total_burger;
					
					cout<<"\n\n Number of pizza we had : "<<Qpizza;
					cout<<"\n\n Number of pizzas we sold : "<<Spizza;
					cout<<"\n\n Remaining pizzas : "<<Qpizza-Spizza;
					cout<<"\n\n Total pizza collection for the day : "<<Total_pizza;
					
					cout<<"\n\n Number of mocktail we had : "<<Qmocktail;
					cout<<"\n\n Number of mocktails we sold : "<<Smocktail;
					cout<<"\n\n Remaining mocktails : "<<Qmocktail-Smocktail;
					cout<<"\n\n Total mocktail collection for the day : "<<Total_mocktail;
					
					case 9:
						exit(0);
						
						default:
							cout<<"\n Please select the numbers metioned above! ";
			
	}
	goto m;
}
