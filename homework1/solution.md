# Solutions to Homework 1

## Using The Terminal
1. Count how many lines are there in "data.dat"
    ```bash
    wc -l data.dat
    ```
    returns 175 lines

2. Count how many lines of those contains "dolor" or "dalor"?
    ```bash
    grep -E 'dolor|dalor' data.dat | wc -l
    ```
    returns 106 lines

3. Count how many words are there in "data.dat"
    ```bash
    wc -w data.dat
    ```
    returns 1904 words

4. Count how many of those start with "mol"?
    ```bash
    grep -Eo '\bmol' data.dat | wc -w
    ```
    returns 36 words

5. Count how many files in "test_folder" are ".txt" files
    ```bash
    find test_folder/ -name "*.txt" | wc -l
    ```
    returns 101 files with ".txt" extension

