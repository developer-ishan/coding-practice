# Vulnerabilities of the gets function in C

Notes:
03:26 : gets() is risky because if somebody gives an input that is larger than the specified memory for the input, then it will show an error and further can be used to exploit vulnerabilities by a malicious user.

Think of it like asking computer to make space on top of each other.
03:49 : First we ask it to create 10 bytes to stores the values of str array and then we ask it to create space for 4 bytes to store the value of int v. Imagine making a ground floor of a building of height 10 bytes. That is 'str'. Next you make another floor on it, the first floor and give it a height of 4 bytes. That is the variable v. Now since gets() isn't equipped to handle inputs larger than 10 bytes, it still decides to store the excess input somewhere. But where does it store it after the ground floor gets full? It sends it to the floor above it. So the first 10 bytes entered by the user were stored in the the ground floor, i.e, str, and the rest of it stored in the first floor, i.e v variable.
04:57 : (char*)str - (char*)&v shows how much space is between them, which is 44 bytes. So one can store 44 bytes of information in str and the rest of it is stored in variable v.
05:13 : #Screenshot
05:19 : As you can see, when 44 bytes of information is input, all of it is stored in str and thus v shows 0. All though you still get an error because you entered way more than 10 characters.

05:35 : Now when 45 bytes of information is added, the 45th byte of information, i.e, 'a' is stored in v. ASCII value of 'a' is 97 therefore a value of 97 is assigned to v. int v is now 97. 
07:00 : This vulnerability can be used by a malicious person to do any wrongdoing. Basically, anything after gets() is vulnerable.

A safer option is to gets_s() because it takes a second parameter to limit the maximum number of information you can input.

So gets_s(str,10) means 'take the input and store it in the 'str' string but don't store anything beyond 10 bytes). Anything beyond 10 characters will raise an error.

One can also use, fgets(). It works with 3 parameters. fgets(str, 10, stdin), it means that 'store only 10 bytes in str array and take the input from stdin, i.e, from the standard input given by the user'. It's different from gets_s as unlike gets_s which would raise an error if you use enter 11 characters, fgets would take the 11 character input but will store the first 10 characters in the str array.
