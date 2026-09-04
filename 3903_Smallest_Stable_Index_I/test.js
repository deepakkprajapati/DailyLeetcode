// 1. Generate a test array of size 30,000 (ascending order)
const n = 100000;
const testNums = Array.from({ length: n }, (_, i) => i + 1);
const k = -1;

// --- APPROACH 1 ---
console.time("Approach 1 Time");
function approach1(nums, k) {
    const n = nums.length;
    const right = new Array(n);
    right[n - 1] = nums[n - 1];

    for (let i = n - 2; i >= 0; i--) {
        right[i] = Math.min(right[i + 1], nums[i]);
    }

    let left = 0;
    for (let i = 0; i < n; i++) {
        left = Math.max(left, nums[i]);
        if (left - right[i] <= k) {
            return i;
        }
    }
    return -1;
}
const result1 = approach1(testNums, k);
console.timeEnd("Approach 1 Time");


// --- APPROACH 2 ---
console.time("Approach 2 Time");
function approach2(nums, k) {
    let curr_max = nums[0];
    let curr_min = Math.min(...nums);
    for (let i = 0; i < nums.length; i++) {
        curr_max = Math.max(curr_max, nums[i]);
        if (k >= curr_max - curr_min) {
            return i;
        }
        if (curr_min === nums.at(i)) {
            curr_min = Math.min(...nums.slice(i + 1));
        }
    }
    return -1;
}
const result2 = approach2(testNums, k);
console.timeEnd("Approach 2 Time");

console.log("Outputs match:", result1 === result2);