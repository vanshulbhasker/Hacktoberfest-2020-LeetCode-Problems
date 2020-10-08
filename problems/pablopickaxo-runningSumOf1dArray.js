/**
 * Solution to Running Sum of 1d Array
 *
 * author: joonasmoilanen
 * ref: https://leetcode.com/problems/running-sum-of-1d-array/
 *
*/
var runningSum = function(nums) {
    
    const array1 = [1,2,3,4];
    const array2 = [];
    var temp = 0;

    array1.forEach(handleNum);

    function handleNum(value){
        output = temp + value;
        temp = output;
        array2.push(output);
    };

    return array2;
    
};