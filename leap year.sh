echo "Enter the year"
read y
b=`expr $y % 4`
if [ $b -eq 0 ]
then
echo "$y is a Leap Year"
else
echo "$y is not a Leap Year"
fI         
