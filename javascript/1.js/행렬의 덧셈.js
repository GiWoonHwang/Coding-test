/*
행렬의 덧셈은 행과 열의 크기가 같은 두 행렬의 같은 행, 같은 열의 값을 서로 더한 결과가 됩니다. 2개의 행렬 arr1과 arr2를 입력받아, 행렬 덧셈의 결과를 반환하는 함수, solution을 완성해주세요.

제한 조건
행렬 arr1, arr2의 행과 열의 길이는 500을 넘지 않습니다.
입출력 예
arr1	        arr2	        return
[[1,2],[2,3]]	[[3,4],[5,6]]	[[4,6],[7,9]]
[[1],[2]]	    [[3],[4]]	    [[4],[6]] 
*/

// 시간안에 풀지 못함 + 좋은 풀이가 있어 참고 했습니다.

let arr1 = [[1,2],[2,3]];
let arr2 = [[3,4],[5,6]];
let result = []; // 더한 값을 리턴할 빈 배열 

// forEach는 리턴값이 없다.
// arr1.forEach((row, rowIndex) => {
//     answer.push(row.map((col, colIndex) => col + arr2[rowIndex][colIndex]));
//   });



arr1.forEach((for_i,for_index)=>{
    console.log(for_i), // [1,2], [2,3]
    console.log(for_index) // 0, 1
    answer.push(for_i.map((v,i,a)=>{ // v: 1,2 
        return v + arr2[for_index][i];
    }))
})