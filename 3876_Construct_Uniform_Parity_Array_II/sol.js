/**
 * @param {number[]} nums1
 * @return {boolean}
 * Time:    O(N)
 * Space:   O(N)
 * Strategy: Minimum tracking with condtion filtering/ Two-pass baseline approach.
 */
var func = function(nums1) {
    let min = Number.MAX_SAFE_INTEGER;
    for (const x of nums1) {
        min = Math.min(min, x);
    }
    if(min %2 ===0){
        for (const x of nums1) {
            if(x %2 !==0){
                return false;
            }
        }
    }
    return true;
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [1,4,7], expected: true },
        { args: [2,3], expected: false },
        { args: [4,6], expected: true }
    ];
    testCases.forEach(({ args, expected }, index) => {
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