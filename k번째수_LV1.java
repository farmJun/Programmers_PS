import java.util.*;

class Solution {

    public int calculate(int[] array, int[] command){

        int []temp = Arrays.copyOfRange(array, command[0]-1, command[1]);
        Arrays.sort(temp);
        return temp[command[2]-1];
    }


    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        for(int i = 0; i<commands.length; i++){
            answer[i] = calculate(array, commands[i]);
        }
        return answer;
    }
}