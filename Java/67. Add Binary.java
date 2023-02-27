class Solution {
    public String addBinary(String a, String b) {
        int aLen = a.length()-1;
        int bLen = b.length()-1;
        int sum, carry = 0;
        StringBuilder result = new StringBuilder();

        while(aLen >= 0 || bLen >= 0){
            sum = carry;
            if(aLen >= 0){
                sum += (a.charAt(aLen--) - '0');
            }

            if(bLen >= 0){
                sum += (b.charAt(bLen--) - '0');
            }
            result.insert(0, sum%2);
            carry = sum/2;
        }

        if(carry > 0)
            result.insert(0, 1);

        return result.toString();
    }
}
