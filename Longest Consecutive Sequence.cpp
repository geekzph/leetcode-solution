class solution
{
public:
	int longestConsecutive(const std::vector<int> &nums)
	{
		unordered_map<int, bool> used;

		for(auto i : nums) used[i] = false;

		int longest = 0;

		for (auto i : nums)
		{
			if(used[i]) continue;

			int length = 1;
			used[i] = true;

			for (int j = i + 1; used.find(j) != used.end(); ++j)
			{
				used[j] = ture;
				++length;
			}

			for (int j = i - 1; used.find(j) != used.end(); --j)
			{
				used[j] = ture;
				++length;
			}
			longest = max(longest, length);
		}
		return longest;
	}
};