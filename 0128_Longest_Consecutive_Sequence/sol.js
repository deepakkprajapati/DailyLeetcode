/**
 * @param {number[]} nums
 * @return {number}
 * Time:    O(N)
 * Space:   O(N)
 * Strategy: Hash set
 */
var func = function(nums) {
    let numset = new Set(nums);
    let longstreak = 0;
    for (const x of numset) {
        if(!(numset.has(x-1))){
            let curr_num = x;
            let curr_streak = 1;
            while(numset.has(curr_num+1)) {
                curr_streak++;
                curr_num++;
            }
            longstreak = Math.max(curr_streak, longstreak);
        }
    }
    return longstreak
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [100,4,200,1,3,2], expected: 4 },
        { args: [0,3,7,2,5,8,4,6,0,1], expected: 9 },
        { args: [1,0,1,2], expected: 3 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        // Use spread syntax (...) to pass array elements as separate arguments
        const result = func(args);
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
