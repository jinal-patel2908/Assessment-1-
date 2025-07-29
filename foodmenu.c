#include<stdio.h>
int main(){
	int choice,quantity,amount,gt=0;
	int pizza=180,burger=100,dosa=120,idli=50;
	char choice1;
	up:
	printf("\n 1.pizza    price=180rs/pcs");
	printf("\n 2.dosa     price=100rs/pcs");
	printf("\n 3.Burger   price=120rs/pcs");
	printf("\n 4.idli     price=50rs/pcs");
	printf("\n please enter your choice....:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n you have selected  pizza");
			amount= pizza;
			break;
		case 2:
			printf("\n you have selected  burger");
			amount= burger;
			break;
		case 3:
			printf("\n you have selected  dosa");
			amount= dosa ;
break;
		case 4:
			printf("\n you have selected  idli");
			amount=idli;
			break;
		default:
			printf("\n you enter invalid choice:");
			break;
	}
	printf("\n enter quantity:-");
	scanf("%d",&quantity);
	amount=amount*quantity;
	gt=gt+amount;
	
	printf("\n amount is =%d",amount);
	printf("\n Total amount is= %d",gt);
	
	
	
	printf("\n do you want place more orders ? y & n:");
	scanf(" %c",&choice1);
	while(choice1=='y'||choice1=='Y'){
		printf("\n ----------------------------manu------------------------------");
		goto up;
	}
   return 0;
}

