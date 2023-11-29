#include <bits/stdc++.h>
using namespace std;
class Solution
{
    // two sum 1
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
    // chỉ áp dụng với mảng được sắp xếp
    vector<int> twoSum2(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                    swap(nums[i], nums[j]);
            }
        }
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            int sum = nums[start] + nums[end];
            if (sum == target)
            {
                ans.push_back(start);
                ans.push_back(end);
                break;
            }
            if (sum > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return ans;
    }

public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        int y = 0;
        while (x > y)
        {
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return x == y || x == y / 10;
    }
    // capital
public:
    bool detectCapitalUse(string word)
    {
        int upper = 0, lower = 0;
        bool tmp = false;
        if (word.size() == 1)
            return true;
        if (word[0] >= 'A' && word[0] <= 'Z')
            tmp = 1;
        for (int i = 1; i < word.size(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                upper++;
                if (tmp == 0 || lower > 0)
                    return false;
            }
            else
            {
                if (upper > 0)
                    return 0;
                lower++;
            }
        }
        return true;
    }

public:
    // int majorityElement(vector<int> &nums)
    // {
    //     int n = nums.size(), max = -1e9, count = 0, x;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (max < nums[i])
    //             max = nums[i];
    //     }
    //     vector<int> a(max + 1, 0);
    //     for (int i = 0; i < n; i++)
    //     {
    //         a[nums[i]]++;
    //     }
    //     for (int i = 0; i <= max; i++)
    //     {
    //         if (a[i] > n / 2)
    //         {
    //             x = i;
    //             break;
    //         }
    //     }
    //     return x;
    // }
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
    // 1, 2, 3, 4, 5, 6
    // 0, 1, 2, 3, 4, 5
    // nếu k có trong mảng thì show ra index đúng khi chèn target vào
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            if (target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        nums.push_back(target);
        for (int i = 1; i < nums.size(); i++)
        {
            int x = nums[i];
            int pos = i - 1;
            while (pos >= 0 && x < nums[pos])
            {
                nums[pos + 1] = nums[pos];
                pos--;
            }
            nums[pos + 1] = x;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
                break;
            }
        }
        return -1;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        if (target > nums[right])
            return right + 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            if (target > nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return left;
    }
    vector<int> leftRightDifference(vector<int> &nums)
    {
        // n = sizeOf(nums)/sizeOf(nums[0]);
        // [10,4,8,3]
        // left  [0,10,14,22]
        // right [15,11,3,0]
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> result;
        left[0] = 0;
        right[0] = 0;
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] + nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] + nums[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            result.push_back(abs(left[i] - right[i]));
        }
        return result;
    }
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> run(n);
        run[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            run[i] = run[i - 1] + nums[i];
        }
        return run;
    }
    // [1,7,3,6,5,6]
    // output = 3
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0, leftSum = 0, rightSum, n = nums.size();
        // tổng các phần tử trong vector
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        // finding the pivot
        for (int i = 0; i < n; i++)
        {
            rightSum = sum - nums[i] - leftSum;
            if (leftSum == rightSum)
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
    // n = 8
    // x = 6
    // 1+..+6 = 6+..+8 = 21
    int pivotInteger(int n)
    {
        int leftSum = 0, rightSum = 0;
        if (n == 1)
            return 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                leftSum += j;
            }
            for (int k = n; k > i; k--)
            {
                rightSum += k;
            }
            if (leftSum == rightSum)
            {
                return i;
            }
            else
            {
                leftSum = 0;
                rightSum = 0;
            }
        }
        return -1;
    }
    int pivotInteger2(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int left = i * (i - 1) >> 1;
            int right = ((n * (n + 1)) >> 1) - ((i * (i + 1)) >> 1);
            if (left == right)
                return i;
        }
        return -1;
    }
    // haystack = "sadbutsad", needle = "sad"
    // output = 0
    int strStr(string haystack, string needle)
    {
        const char *p = strstr(haystack.c_str(), needle.c_str());
        if (p)
        {
            return (p - haystack.c_str());
        }
        else
        {
            return -1;
        }
    }
    int pascal(int k, int n)
    {
        if (k == 0 || k == n)
            return 1;
        return pascal(k, n - 1) + pascal(k - 1, n - 1);
    }
    void use(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k <= i; k++)
            {
                cout << pascal(k, i) << " ";
            }
            cout << endl;
        }
    }
    vector<vector<int>> generate1(int numRows)
    {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1);
            for (int k = 0; k <= i; k++)
            {
                row[k] = pascal(k, i);
            }
            result.push_back(row);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        result.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            vector<int> a;
            a.push_back(1);
            for (int j = 1; j <= i - 1; j++)
            {
                a.push_back(result[i - 1][j - 1] + result[i - 1][j]);
            }
            a.push_back(1);
            result.push_back(a);
        }
        return result;
    }
};
int main()
{
    vector<int> nums = {2, 1, -1};
    int target = 5;
    Solution s;
    // vector<int> result = s.twoSum(nums, target);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
    // cout << s.isPalindrome(12321);
    string word = "ggg";
    // cout << s.detectCapitalUse(word);
    // vector<int> numss = {1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7};
    // cout << s.majorityElement(numss);
    // cout << s.searchInsert(nums, target);
    // vector<int> kq = s.leftRightDifference(nums);
    // for (int i = 0; i < kq.size(); i++)
    // {
    //     cout << kq[i] << " ";
    // }
    // vector<int> kq = s.runningSum(nums);
    // for (int i = 0; i < kq.size(); i++)
    // {
    //     cout << kq[i] << " ";
    // }
    // cout << s.pivotIndex(nums);
    // int n = 8;
    // cout << s.pivotInteger2(n);
    string hay = "sadbutsad", need = "sad";
    // cout << s.strStr(hay, need);
    int n;
    cin >> n;
    vector<vector<int>> kq = s.generate(n);
    for (int i = 0; i < kq.size(); i++)
    {
        for (int j = 0; j < kq[i].size(); j++)
        {
            cout << kq[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}