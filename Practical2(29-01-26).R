#Q2  create a data frame containing ID, Name and Age of 5 students and display it.

student_df<-data.frame(
  Id = c('abc','def','ghi','jkl','mno'),
  Name = c('p','q','r','s','t'),
  Age = c(19,20,21,22,23)
)
write.csv(student_df,"student_df.csv",row.names=FALSE)
student_df <- read.csv("student_df.csv")
student_df


#Q3 Import a CSV file containing emloyee details and display its structure.(emp_name,emp_id,Salary,age)
data<- data.frame(
  emp_name = c('Bob','tina','mia','ria'),
  emp_id = c(101,102,103,104),
  salary=c(1000,2000,3000,4000),
  age=c(22,24,26,32)
)
write.csv(data,"employee.csv",row.names=FALSE)
employee_df <- read.csv("employee.csv",stringsAsFactors = FALSE)
print("Structure of the Employee Data : ")
str(employee_df)

#4 Create a data frame using vectors representing product name,price and quantity
product_name <- c("Keyboard","Mouse","Monitor","CPU")
price <- c(100,200,4020,54020)
quantity<-c(50,60,40,50)

products_df <- data.frame(product_name,price,quantity)
print(products_df)

#5 Create a data frame of students and display only the name and marks columns
student_df<-data.frame(
  Name = c('abc','def','ghi','jkl','mno'),
  Marks = c(19,20,21,22,23)
)
write.csv(student_df,"student_df.csv",row.names=FALSE)
student_df <- read.csv("student_df.csv")
student_df

#MQ2 Diagrammatic Representation (Bar,Pie,Stem & leafplots)
#Q1 Create a data frame containing ID, Name and Age of 5 students and display it.
student_df<-data.frame(
  Id = c('abc','def','ghi','jkl','mno'),
  Name = c('p','q','r','s','t'),
  Age = c(19,20,21,22,23)
)
write.csv(student_df,"student_df.csv",row.names=FALSE)
student_df <- read.csv("student_df.csv")
student_df


#2 Draw pie chart representing percentage share of marks obtained by students 
marks <- c(20,10,50,60,50)
names(marks)<- c('p','q','r','s','t')
pie(marks,
    main="Percentage share of marks",
    col = rainbow(length(marks)))

#3 Construct a stem and leaf plot for the given marks
marks <- c(20,10,50,60,50,90,95,85,75,84,61)
stem(marks,scale = 2)

#4 Draw a bar diagram for mothly sales data
sales <- c(1000,2200,4200,5100,5542)
months <- c('Jan','Feb','Mar','Apr','May')
barplot(sales,
        names.arg=months,
        main="Monthly sales",
        xlab="months",
        ylab="sales Amount",
        col="blue")

#5 Draw a pie chart showing population distribution of 4 cities.
cities<- c("Pune","Mumbai","Nashik","Goa")
population <- c(20000,100000,50000,60000)
pie(population,
    labels=cities,
    col = rainbow(length(population)))

#6 Bar plot sample
Attendance <- c(57,58,68,45,44)
months <- c('Jan','Feb','Mar','Apr','May')
barplot(Attendance,
        names.arg=months,
        main="Monthly Attendance",
        xlab="months",
        ylab="Attendance",
        col="blue")
#7 leaf plot sample
Attendance <- c(20,10,50,60,50,90,95,85,75,84,61)
stem(Attendance,scale = 2)