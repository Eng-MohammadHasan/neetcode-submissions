class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin() , people.end());

        int left = 0 , right = people.size() - 1;
        int boats = 0;

        while(right > left)
        {
            if(people[right] == limit)
            {
                boats++;
            }
            else if(people[right] + people[left] <= limit)
            {
                boats++;
                left++;
            }
            else 
            {
                for(int i = right - 1 ; i > left ; i--)
                {
                    if(people[i] + people[right] <= limit)
                    {
                        boats++;
                        break;
                    }
                    break;
                }

                boats++;
            }

            right--;


        }

        if(left == right)
        {
            boats++;
        }


        return boats;
    }
};