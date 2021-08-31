#include<stdio.h>
float Product_cost_per_unit()
{   float a;
    printf("Enter the Product cost per unit\n");
    scanf("%f",&a);
	if(a<10)
	{
		printf("Produce cost per unit should be greater than 10\n");
		return Product_cost_per_unit();
	}
	else
	{
		return a;
	}
}



int Quantity()
{   int quantity;
	printf("Enter the quantity Purchased\n");
	scanf("%d",&quantity);
	if(quantity>=1 && quantity<=100)
	{
		return quantity;
	}
	else
	{
		return Quantity();
	}
}


void S_finalbill(float a,int b)
{   
    float Total_cost=a*b;
	if(Total_cost>1000)	
	{
		float Final_cost=Total_cost*0.85;
		printf("Your Final bill is:");
		printf("%f",Final_cost);
	}
	
	
	if(Total_cost<1000)	
	{
		float Final_cost=Total_cost*0.9;
		printf("Your Final bill is:");
		printf("%f",Final_cost);
	}
}



void R_finalbill(float c,int d)
{
	float Total_cost=c*d;
	printf("Your Final bill is:");
	printf("%f",Total_cost);
}




int main()
{   char choice;
    int Product_NO,Quantity_Purchased;
    float Product_cost;
	printf("Welcome to GOPALAN MALL!\n");
	printf("Choose the customer Type\n");
	printf("R-Regular\n");
	printf("S-special\n");
	printf("Chosse R for regular customer and S for special customer\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'R':
			printf("Enter the Product number\n");
			scanf("%d",&Product_NO);
			Product_cost=Product_cost_per_unit();
			Quantity_Purchased=Quantity();
			R_finalbill(Product_cost,Quantity_Purchased);
			break;
			
		case 'S':
			printf("You are our special customer\n");
			printf("Enter the Product number\n");
			scanf("%d",&Product_NO);
			Product_cost=Product_cost_per_unit();
			Quantity_Purchased=Quantity();
			S_finalbill(Product_cost,Quantity_Purchased);
			break;
		default:
			printf("You Entered the wrong choice!\n");
			
	}

    printf("\n\n\n");
	return main();
}
