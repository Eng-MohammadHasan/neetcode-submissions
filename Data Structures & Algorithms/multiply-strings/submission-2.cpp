class Solution {
public:
    string multiplyOneDigit(string num1 , char digit)
    {
        int d = digit - '0';
        int carry = 0;
        string result = "";

        for(int i = num1.size() - 1 ; i >= 0 ; i--)
        {
            int product = (num1[i] - '0') * d + carry;

            result.push_back((product % 10 ) + '0');
            carry = product / 10;
        }

        if(carry)
            result.push_back(carry + '0');

        reverse(result.begin() , result.end());

        return result;
    }

    string addStrings(string a , string b)
    {
        string result = "";
        int carry = 0;

        int i = a.size() - 1;
        int j = b.size() - 1;

        while(i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if(i >= 0)  
                sum += a[i--] - '0';

            if (j >= 0)
                sum += b[j--] - '0';

            result.push_back((sum % 10) + '0');
            carry = sum / 10;    
        }

        reverse(result.begin(), result.end());

        return result;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";

       string result = "0";
       int zeros = 0;


       for(int i = num2.size() - 1 ; i >= 0 ; i--)
       {
            string partial = multiplyOneDigit(num1 , num2[i]);

            for(int j = 0 ; j < zeros ; j++)
            {
                partial.push_back('0');
            }

            result = addStrings(result , partial);
            zeros++;
       }

       return result;
    }
};
