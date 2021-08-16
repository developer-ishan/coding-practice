Minimum number of deletions and insertions to transform one string into another
Given two strings ‘str1’ and ‘str2’ of size m and n respectively. The task is to remove/delete and insert minimum number of characters from/in str1 so as to transform it into str2. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.
Example:
Input : str1 = "geeksforgeeks", str2 = "geeks"
Output : Minimum Deletion = 8
Minimum Insertion = 0

https://www.geeksforgeeks.org/minimum-number-deletions-insertions-transform-one-string-another/

a --(deletion)---> lcs ---(insertion)---> b

eg: heap -> pea

heap -> ea -> pea

no of del = a-lcs
no of ins = b-lcs
