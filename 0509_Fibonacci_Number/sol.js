/**
 * @param {number} n
 * @return {number}
 * Time:    O(N)
 * Space:   O(1)
 * Strategy: Itertive [Bottom-up Dynamic Programming]
 */
var func = function(n) {
    if(n < 2) return n;
    let prev0 = 0;
    let prev1 = 1;
    let result = 0;
    for(let i=2; i<=n; i++){
        result = prev0 + prev1;
        prev0 = prev1;
        prev1 = result;
    }
    return result
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [2], expected: 1 },
        { args: [3], expected: 2 },
        { args: [4], expected: 3 }
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