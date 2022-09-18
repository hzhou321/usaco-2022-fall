g++ -o prob1_bronze prob1_bronze.cpp

i=1
for i in {1..10} ; do
    echo i=$i
    echo Expect
    cat $i.out
    echo I got:
    cat $i.in | ./prob1_bronze
done
