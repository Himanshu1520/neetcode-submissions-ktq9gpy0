class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten=0,five=0,twenty=0;

        for(int i=0;i<bills.size();i++){
            
            if(bills[i]==5){
                five++;
                continue;
            }
            if(bills[i]==10){
                ten++;
            }
            if(bills[i]==20){
                twenty++;
            }

            int change=bills[i]-5;
            
            while(change>=20){
                if(twenty==0){
                    break;
                }
                twenty--;
                change-=20;
            }

            while(change>=10){
                if(ten==0){
                    break;
                }
                ten--;
                change-=10;
            }

            while(change>=5){

                if(five==0){
                    break;
                }
                five--;
                change-=5;
            }

            if(change!=0){
                return false;
            }

        }

        return true;
    }
};