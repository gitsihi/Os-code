# ============================================================
#                    CODE LIST
# ============================================================
#
# 1.  Vowel or Consonant
# 2.  Vowel / Consonant / Digit / Special Character
# 3.  Uppercase or Lowercase
# 4.  Even or Odd
# 5.  Positive, Negative or Zero
# 6.  Largest of Two Numbers
# 7.  Largest of Three Numbers
# 8.  Leap Year
# 9.  Prime Number
# 10. Factorial
# 11. Fibonacci Series
# 12. Sum of First N Numbers
# 13. Reverse a Number
# 14. Palindrome Number
# 15. Sum of Digits
# 16. Count Number of Digits
# 17. Multiplication Table
# 18. Print 1 to N
# 19. Print Even Numbers
# 20. Print Odd Numbers
# 21. Sum of Even Numbers
# 22. Sum of Odd Numbers
# 23. Simple Calculator using Case
# 24. Check if File Exists
# 25. Check File or Directory
# 26. Count 1 to 10 using While
# 27. Menu using Case
#
# ============================================================


# ============================================================
# 1. VOWEL OR CONSONANT
# ============================================================

echo "Enter a character:"
read ch

case $ch in
    a|e|i|o|u|A|E|I|O|U)
        echo "Vowel"
        ;;
    *)
        echo "Consonant"
        ;;
esac


# ============================================================
# 2. VOWEL / CONSONANT / DIGIT / SPECIAL CHARACTER
# ============================================================

echo "Enter a character:"
read ch

if [[ "$ch" =~ [a-zA-Z] ]]
then
    case $ch in
        a|e|i|o|u|A|E|I|O|U)
            echo "Vowel"
            ;;
        *)
            echo "Consonant"
            ;;
    esac

elif [[ "$ch" =~ [0-9] ]]
then
    echo "Digit"

else
    echo "Special Character"
fi


# ============================================================
# 3. UPPERCASE OR LOWERCASE
# ============================================================

echo "Enter a character:"
read ch

if [[ "$ch" =~ [A-Z] ]]
then
    echo "Uppercase"

elif [[ "$ch" =~ [a-z] ]]
then
    echo "Lowercase"

else
    echo "Not an alphabet"
fi


# ============================================================
# 4. EVEN OR ODD
# ============================================================

echo "Enter a number:"
read n

if [ $((n % 2)) -eq 0 ]
then
    echo "Even"
else
    echo "Odd"
fi


# ============================================================
# 5. POSITIVE, NEGATIVE OR ZERO
# ============================================================

echo "Enter a number:"
read n

if [ $n -gt 0 ]
then
    echo "Positive"

elif [ $n -lt 0 ]
then
    echo "Negative"

else
    echo "Zero"
fi


# ============================================================
# 6. LARGEST OF TWO NUMBERS
# ============================================================

echo "Enter two numbers:"
read a b

if [ $a -gt $b ]
then
    echo "$a is largest"
else
    echo "$b is largest"
fi


# ============================================================
# 7. LARGEST OF THREE NUMBERS
# ============================================================

echo "Enter three numbers:"
read a b c

if [ $a -ge $b ] && [ $a -ge $c ]
then
    echo "$a is largest"

elif [ $b -ge $a ] && [ $b -ge $c ]
then
    echo "$b is largest"

else
    echo "$c is largest"
fi


# ============================================================
# 8. CHECK LEAP YEAR
# ============================================================

echo "Enter year:"
read year

if [ $((year % 400)) -eq 0 ] ||
   { [ $((year % 4)) -eq 0 ] && [ $((year % 100)) -ne 0 ]; }
then
    echo "Leap Year"
else
    echo "Not a Leap Year"
fi


# ============================================================
# 9. CHECK PRIME NUMBER
# ============================================================

echo "Enter a number:"
read n

flag=1

if [ $n -lt 2 ]
then
    flag=0
else
    for ((i=2; i*i<=n; i++))
    do
        if [ $((n % i)) -eq 0 ]
        then
            flag=0
            break
        fi
    done
fi

if [ $flag -eq 1 ]
then
    echo "Prime"
else
    echo "Not Prime"
fi


# ============================================================
# 10. FACTORIAL
# ============================================================

echo "Enter a number:"
read n

fact=1

for ((i=1; i<=n; i++))
do
    fact=$((fact * i))
done

echo "Factorial = $fact"


# ============================================================
# 11. FIBONACCI SERIES
# ============================================================

echo "Enter number of terms:"
read n

a=0
b=1

for ((i=1; i<=n; i++))
do
    echo -n "$a "

    c=$((a + b))
    a=$b
    b=$c
done

echo


# ============================================================
# 12. SUM OF FIRST N NUMBERS
# ============================================================

echo "Enter n:"
read n

sum=0

for ((i=1; i<=n; i++))
do
    sum=$((sum + i))
done

echo "Sum = $sum"


# ============================================================
# 13. REVERSE A NUMBER
# ============================================================

echo "Enter a number:"
read n

reverse=0

while [ $n -gt 0 ]
do
    digit=$((n % 10))
    reverse=$((reverse * 10 + digit))
    n=$((n / 10))
done

echo "Reverse = $reverse"


# ============================================================
# 14. PALINDROME NUMBER
# ============================================================

echo "Enter a number:"
read n

original=$n
reverse=0

while [ $n -gt 0 ]
do
    digit=$((n % 10))
    reverse=$((reverse * 10 + digit))
    n=$((n / 10))
done

if [ $original -eq $reverse ]
then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi


# ============================================================
# 15. SUM OF DIGITS
# ============================================================

echo "Enter a number:"
read n

sum=0

while [ $n -gt 0 ]
do
    digit=$((n % 10))
    sum=$((sum + digit))
    n=$((n / 10))
done

echo "Sum of digits = $sum"


# ============================================================
# 16. COUNT NUMBER OF DIGITS
# ============================================================

echo "Enter a number:"
read n

count=0

while [ $n -gt 0 ]
do
    count=$((count + 1))
    n=$((n / 10))
done

echo "Number of digits = $count"


# ============================================================
# 17. MULTIPLICATION TABLE
# ============================================================

echo "Enter a number:"
read n

for ((i=1; i<=10; i++))
do
    echo "$n x $i = $((n * i))"
done


# ============================================================
# 18. PRINT 1 TO N
# ============================================================

echo "Enter n:"
read n

for ((i=1; i<=n; i++))
do
    echo $i
done


# ============================================================
# 19. PRINT EVEN NUMBERS
# ============================================================

echo "Enter n:"
read n

for ((i=1; i<=n; i++))
do
    if [ $((i % 2)) -eq 0 ]
    then
        echo $i
    fi
done


# ============================================================
# 20. PRINT ODD NUMBERS
# ============================================================

echo "Enter n:"
read n

for ((i=1; i<=n; i++))
do
    if [ $((i % 2)) -ne 0 ]
    then
        echo $i
    fi
done


# ============================================================
# 21. SUM OF EVEN NUMBERS
# ============================================================

echo "Enter n:"
read n

sum=0

for ((i=2; i<=n; i+=2))
do
    sum=$((sum + i))
done

echo "Sum of even numbers = $sum"


# ============================================================
# 22. SUM OF ODD NUMBERS
# ============================================================

echo "Enter n:"
read n

sum=0

for ((i=1; i<=n; i+=2))
do
    sum=$((sum + i))
done

echo "Sum of odd numbers = $sum"


# ============================================================
# 23. SIMPLE CALCULATOR USING CASE
# ============================================================

echo "Enter two numbers:"
read a b

echo "Enter operator (+ - * /):"
read op

case $op in
    +)
        echo "Result = $((a + b))"
        ;;
    -)
        echo "Result = $((a - b))"
        ;;
    \*)
        echo "Result = $((a * b))"
        ;;
    /)
        echo "Result = $((a / b))"
        ;;
    *)
        echo "Invalid operator"
        ;;
esac


# ============================================================
# 24. CHECK FILE EXISTS
# ============================================================

echo "Enter filename:"
read file

if [ -e "$file" ]
then
    echo "File exists"
else
    echo "File does not exist"
fi


# ============================================================
# 25. CHECK FILE OR DIRECTORY
# ============================================================

echo "Enter name:"
read name

if [ -f "$name" ]
then
    echo "It is a file"

elif [ -d "$name" ]
then
    echo "It is a directory"

else
    echo "Does not exist"
fi


# ============================================================
# 26. COUNT FROM 1 TO 10 USING WHILE
# ============================================================

i=1

while [ $i -le 10 ]
do
    echo $i
    i=$((i + 1))
done


# ============================================================
# 27. MENU USING CASE
# ============================================================

echo "1. Even/Odd"
echo "2. Positive/Negative"
echo "3. Vowel/Consonant"
echo "4. Exit"

echo "Enter choice:"
read choice

case $choice in

    1)
        echo "Enter number:"
        read n

        if [ $((n % 2)) -eq 0 ]
        then
            echo "Even"
        else
            echo "Odd"
        fi
        ;;

    2)
        echo "Enter number:"
        read n

        if [ $n -gt 0 ]
        then
            echo "Positive"
        elif [ $n -lt 0 ]
        then
            echo "Negative"
        else
            echo "Zero"
        fi
        ;;

    3)
        echo "Enter character:"
        read ch

        case $ch in
            a|e|i|o|u|A|E|I|O|U)
                echo "Vowel"
                ;;
            *)
                echo "Consonant"
                ;;
        esac
        ;;

    4)
        echo "Exit"
        ;;

    *)
        echo "Invalid choice"
        ;;
esac