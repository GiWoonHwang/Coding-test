import javax.xml.crypto.dsig.keyinfo.RetrievalMethod;

/*
 각에서 0도 초과 90도 미만은 예각, 90도는 직각, 90도 초과 180도 미만은 둔각 180도는 평각으로 분류합니다.
 각 angle이 매개변수로 주어질 때 예각일 때 1, 직각일 때 2, 둔각일 때 3, 평각일 때 4를 return 하라
 */

class Solution {
    public int solution(int angle) {
        if(0< angle && angle < 90){
            return 1;
        }else if(angle == 90){
            return 2;
        }else if(angle > 90 && angle <180){
            return 3;
        }else return 4;

    }
}
