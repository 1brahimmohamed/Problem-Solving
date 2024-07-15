class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(n == 0)
            return true;

        if(flowerbed.size() == 1){
            if (flowerbed[0] == 0){
                if (n == 1)
                    return true;
                else
                    return false;
            }
            else{
               if (n == 0)
                    return true;
                else
                    return false;
            }
        }

        for(int j = 0; j < flowerbed.size(); j++){
            if (flowerbed[j] == 0){
                
                if(j == 0){
                    if (flowerbed[j+1] != 1){
                        flowerbed[j] = 1;
                        n--;
                        if (n == 0)
                            break;
                    }     
                }

                else if(j == flowerbed.size() -1 ){
                    if (flowerbed[j-1] != 1){
                        flowerbed[j] = 1;
                        n--;
                        if (n == 0)
                            break;
                    }     
                }
                else{
                    if (flowerbed[j+1] != 1 && flowerbed[j-1] != 1){
                        flowerbed[j] = 1;
                        n--;
                        if (n == 0)
                            break;
                    }     
                }
            }
        }

        return !(n > 0);
    }
};