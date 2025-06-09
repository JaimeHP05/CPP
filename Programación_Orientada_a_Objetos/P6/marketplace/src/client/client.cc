#include "client.h"

int Client::GetPremium(){
	return premium_;
}

void Client::SetPremium(int new_premium){
	premium_=new_premium;
}
