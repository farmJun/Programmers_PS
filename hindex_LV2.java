class Solution {
    public int solution(int[] citations) {
        int answer = 0;


        for(int i = 0; i <= citations.length; i++){
            int temp = i;
            int cnt = 0;

            for(int j =0; j< citations.length; j++){
                if(citations[j] >= temp){
                    cnt ++;
                }

            }
            if(temp <= cnt){
                answer = temp;
            }
        }

        return answer;
    }
}