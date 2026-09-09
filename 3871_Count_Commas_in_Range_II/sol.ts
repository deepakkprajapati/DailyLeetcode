/**
 * Time:   O(log N)
 * Space:  O(1)
 * Strategy: Maths
 */
const solve = (n: number): number => {
    let result = 0;
    for (let i = 1000; i <= n; i*=1000) {
        result += n-i +1;
    }
    return result;
};
/**
 * Local testing
 */
interface TestCase {
    args: number; 
    expected: number;
}
function test(): void {
    const testCases: TestCase[] = [
        { args: 1002, expected: 3 },
        { args: 998, expected: 0 },
        { args: 1004590, expected: 1008182 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = solve(args);
        const isPassed = result === expected;
        const status = isPassed ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();
export {}; // This forces the file to be treated as a module with its own scope
