#Introduction to R studios and basic R commands.
#Q1. Basic arithmatic operations in R.



x<-10
x
y<-20
y

x+y
x-y
x*y
x/y

#Q2.Assigning and displaying variables


a<-"ich bin shreyas! "
b<-"ich bin klug"


#Q3.Creating a vector using c() function
Marks<-c(11,22,3,3,4)
Marks 

courses<-c('bsc','bba')
courses


#Q4. creating a sequence function using seq() function
table<-seq(2,20, by=2)
table

t2<-seq(4,57, by =3 )
t2

t3<-seq(5,68, by =6 )
t3

#Q5. creating a vector using rep() function 

rep_value<-rep(c(1,2,3), time=20000)
rep_value

#Q6. Repeating Each element using REp()

rep_eachvalue<-rep(c(1,2,3), each=200)
rep_eachvalue

#Q7. Arithmatic operations on two vectors

v1<-c(1,2,2)
v2<-c(2,3,4)
add<-v1+v2
sub<-v1-v2
mul<-v1*v2
div<-v1/v2
print(sub)
print(mul)
print(div)
print(add)


#Q8.Vector and scalar artihmetic operations

v1<-c(1,2,3)
s<-1
add<-v1+s
sub<-v1-s
mul<-v1*s
div<-v1/s
print(sub)
print(mul)
print(div)
print(add)