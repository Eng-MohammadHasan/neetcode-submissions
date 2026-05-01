class Solution {
public:
    int countSeniors(vector<string>& details) {
        int passengersAboveSixty = 0;
        int num;

        for(string passenger : details)
        {
            num = std::stoi(passenger.substr(11,2));
            if(num > 60)
                passengersAboveSixty++;
            
        }
        
        return passengersAboveSixty;
    }
};