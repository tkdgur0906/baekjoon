class Solution {
    public String solution(String s) {
        String[] list = s.split(" ");
        int a = Integer.parseInt(list[0]);
        int b = Integer.parseInt(list[0]);
        for(String str : list){
            if(a > Integer.parseInt(str)){
                a = Integer.parseInt(str);
            }
            else if(b < Integer.parseInt(str)){
                b = Integer.parseInt(str);
            }
        }
        String answer = "";
        answer += a;
        answer += " ";
        answer += b;
        return answer;
    }
}