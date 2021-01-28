print "Enter Size Of Array: "
size=gets.chomp.to_i;
arr=[]
i=0
while (i<size)
  print "Enter Number: " 
  a=gets.chomp.to_i;
  arr.push a
  i=i+1
end
print arr
for i in 0...size do
    p=i
    small=arr[i]
    for j in (i+1)...size
      if small > arr[j]
         small=arr[j]
         p=j
      end
    end
    b=arr[i]
    arr[i]=small
    arr[p]=b
end
puts
print arr
#5,4,3,2,1