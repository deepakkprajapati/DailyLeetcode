/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 * Time:    O(N)
 * Space:   O(N)
 * Strategy: Prefix & suffix
 */
var func = function(nums, k) {
    // Approach 2
    let curr_max = nums[0];
    let suffixmin = new Array(nums.length);
    suffixmin[nums.length-1] = nums.at(-1);
    for (let i = nums.length-2; i >= 0; i--) {
        suffixmin[i] = Math.min(suffixmin[i+1], nums[i])
    }
    for (let i = 0; i < nums.length; i++) {
        curr_max = Math.max(curr_max, nums[i]);
        if (k >= curr_max- suffixmin[i]){
            return i;
        }
    }return -1;

    // Approach 1 
    // let curr_max = nums[0];
    // let curr_min = Math.min(...nums);
    // for (let i = 0; i < nums.length; i++) {
    //     curr_max = Math.max(curr_max, nums[i]);
    //     if (k >= curr_max- curr_min){
    //         return i;
    //     }
    //     if (curr_min == nums.at(i)){
    //         curr_min = Math.min(...nums.slice(i+1));
    //     }
    // }
    // return -1;
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [[5,0,1,4], 3], expected: 3 },
        { args: [[3,2,1], 1], expected: -1 },
        { args: [[0], 0], expected: 0 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = func(...args);
        const status = (result === expected) ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();