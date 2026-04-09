class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int plot = 0;

            if(flowerbed[plot] == 0 && flowerbed.size() == 1)
            {
                return true;
            }
            else if(flowerbed[plot] == 1 && flowerbed.size() == 1 && n > 0)
            {
                return false;
            }

        while(n > 0 && plot < flowerbed.size())
        {
            if((plot == 0 && plot < flowerbed.size() - 1) && flowerbed[plot] == 0 && flowerbed[plot + 1] == 0)
            {
                flowerbed[plot] = 1;
                n--;
            }
            else if((plot > 0 && plot < flowerbed.size() - 1) && flowerbed[plot - 1] == 0 && flowerbed[plot] == 0 && flowerbed[plot + 1] == 0)
            {
                flowerbed[plot] = 1;
                n--;
            }
            else if(plot == flowerbed.size() - 1 && flowerbed[plot] == 0 && flowerbed[plot - 1] == 0)
            {
                flowerbed[plot] = 1;
                n--;
            }

            plot++;
        }

        for(int i = 0 ; i < flowerbed.size() - 1 ; i++)
        {
            if(flowerbed[i] == 1 && flowerbed[i + 1] == 1 || n > 0)
            {
                return false;
            }
        }

        return true;
    }
};