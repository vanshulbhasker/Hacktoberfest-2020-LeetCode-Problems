# Hacktoberfest 2020 - LeetCode Problems

This repository is made for those who are looking for a place to make their first Pull Request for the [Hacktoberfest 2020 event](https://hacktoberfest.digitalocean.com/). You can add your own solutions to LeetCode problems found at [https://leetcode.com/problemset/all/](https://leetcode.com/problemset/all/) into this repository.

## How to contribute

### Fork the repository

Press the **Fork** button at the top-right corner of the page

![](https://docs.github.com/assets/images/help/repository/fork_button.jpg)

#### Clone the fork

Create a local clone of your fork by running the `git clone` command. Replace the `<username>` in the path with your own GitHub username

```
git clone https://github.com/<username>/Hacktoberfest-2020-LeetCode-Problems
```

### Create your own branch

Navigate to the folder of your local clone of the repo and create a new branch named after your GitHub username

```
git branch <username>
```

Switch branch to the new branch. Replace the `<branch>` with the name you set in the previous step

```
git checkout <branch>
```

### Add your solution

#### Choose a problem

Navigate to [https://leetcode.com/problemset/all/](https://leetcode.com/problemset/all/) and find a problem of your liking

#### Create a new file

Create a new file in `/problems` for your solution to the problem of your choosing

Name the file as follows:

`<username>-<problem-name>-<language>.<ext>`

Where:
- `<username>` is replaced with your GitHub username
- `<problem-name>` is replaced with the name of the problem in URL friendly format (e.g. `add-two-numbers`)
- `<language>` is replaced with the programming language used to solve the problem
- `<ext>` is replaced with the proper file extension for the language you chose

#### Add comment to the file

Add the following comment in the beginning of the file

```
/**
 * Solution to <problem-name> at LeetCode in <language>
 *
 * author: <username>
 * ref: <problem-source>
 */
```

Replace the reference `<problem-source>` with the URL of the problem (e.g. `https://leetcode.com/problems/add-two-numbers/`)

#### Solve the problem

Solve and submit the problem at LeetCode. This is where the *magic* happens

#### Add the solution

When your solution passes all the tests at LeetCode, copy and paste the working solution in the file created previously, right below the required comment in the beginning of the file

Example solution for Two Sum problem in C#:
```csharp
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for (int i = 0; i < nums.Length; i++) {
            for (int j = i + 1; j < nums.Length; j++) {
                if (nums[i] + nums[j] == target) return new int[2] { i, j };
            } 
        } 
      return null;
    }
}
```

### Commit changes

Stage your changes in git by running the following command

```
git add .
```

Commit the file to the local repository. Replace the `<filename>` and `<ext>` accordingly

```
git commit -m "Add <filename>.<ext>"
```

Finally push the local changes to your forked repository in GitHub. Replace the `<branch>` with your branch name

```
git push origin <branch>
```

### Submit a pull request

Navigate to your forked repository on GitHub, and press the **New pull request** button in the Pull requests tab
