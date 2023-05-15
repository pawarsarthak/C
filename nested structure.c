#include<stdio.h>
struct college
{
	int cid;
	int cr;
}c;
struct student
{
	char name[20];
	int rollno;
	int marks;
	struct college c;
}s;

void main()
{	struct std;
	struct student s= {"sarthak",28,100,711,1};
	printf("%s\n%d\n%d\n%d\n%d",s.name,s.rollno,s.marks,s.c.cid,s.c.cr);
	getch();
//	the typedef is a keyword that is used to provide existing data types with a new name. the c typedef keyword us used to redifine the name of already existing data types.
//	when names of datatypes become difficult to use in programs, typef is used with user-defined datatypes, which behave similarly to defining an alias for commands.
//	c typedef syntax
//	typedef existing_name alias_nme;
//	After this declaration, we can use the alias_name as if it were the real existing_name in out c program.
//	examples of typedef in c
//	typedef long long ll;
//	below is the c progrsm to illutrate how to use typedef.
	// c program to implement typedef
	#include <stdio.h>
	//defining aan alias using typedef
	typedef long long ll;
	// driver code
	int main()
	{
		// using typedef name to declare variable
		ll var = 20;
		printf("%ld",var);
		
		return 0;
	}
//	output: 20
//	
//	Use of typedef in c
//	following are sime common uses of the typedef  in c programming:
//		the typedef keyword gives a meaningful name to an existing datatype which helps to other users to understand the program more easily.
//		it can be used with structures to increase code readability and we don't have to type truct repeatedly.
//		the typedef keyword can also be used with pointers to declare multiple pointers at single statement.
//		it can be used with arrays to declare any umber of variables.
//		
//		1. typedef struct
//		typedef can also be used with structures in c programming language. A new data type can be created and used to define the structure variable.
//		example 1: using typedef to define a name for a structure
//		c
		// cprogram to implement 
		// typedef with structures
		#include <stdio.h>
		#include <string.h>
		
		//using typedef to define an alias for structure
		typedef struct student 
		{
			char name[50];
			char branch[50];
			int ID_no;
		} stu;
		// driver code 
		int main()
		{
			stu st;
			strcpy(st.name,"kamlesh joshi");
			strcpy(st.branch, "computer science and engineering");
			st.ID_no = 108;
			
			printf("name: %s\n",st.name);
			printf("branch: %s\n",st.branch);
			printf("ID_no: %d\n", st.ID_no);
			return 0;
		}
//		output 
//		Name: kamlesh joshi
//		branch: computer science and engineering
//		ID_no : 108
//		2. typedef with pinters 
//		typedef can alse be used with pointers as it gives an alias name to the pointers. typedef is very efficient while declaring multiple pointers in a single statement because pointers bind to the right on the simple declaration.
//		example:
//			typedef int* Int_ptr;
//			Int_ptr var, var1, var2;
//			int te above statement var, var1, and var2 are declared as pointers of type int which helps us to declare mutiple numbers of pointers in single statement.
//			example 2: using typedef to define name for pointer type.
//			c
			// c program to impletement 
			// typedef without pointers 
			#include<stdio.h>
			typedef  int* ptr;
			//driver code
			int main()
			{
				ptr= var
				*var=20;
				
				printf("value of var is %d ", *var);
				return 0;
			}
//		output: 
//		value of vae is 20
//		3. typedef with array
//		typedef can also be used wth an array to increase their count
//		example:
//			typedef int arr[20]
//		here, arr is an alias for an array of 20 integer elements.
//		// it's same as Arr[20], teo-Arr[20][23];
//		arr Arr, two-Arr[23];
//		example 3: using typedef to define an alias for array.
//		c
		// c program to implement typedef with array
		#Include<stdio.>
		
		typedef int arr[4];
		
		// driver code 
		int main()
		{
			arr temp = {10,20,30,40};
			/////////////////////////typedef is like cloning any datatype by custom name with his internal specifications and elements//////////////////////////////////////
			printf("typedef using an array\n");
			
			for(int i=0; i<4i++)
			{
				printf("%d",temp[i]);
			}
			return 0;
		}
//		output:
//			typedef using an array
//			10 20 30 40
//			
//			c typedef vs#define
//			the following are the major difference between the typedef and #define in c:
//				1. #define is capable of defining aliases for values as well, for instance, you can define 1 as ONE,3.14 as PI, etc. typedef is limited to giving symbolling name types only.
//				2. preprocessors interpret #define statementd, while the compiler interprets typedef statementd.
//				3. there should be no semicolon at the end of #define, but a semicolon at the end of typedef.
//				4. in contrast with #define, typedef will actually define a new type by copying and pasting the definition values.
//				Below is the c program to implement #define:
//					c
					// c program to implement #define
					#includestdio.h>
					// macro definition
					#define LIMIT 3
					
					// driver code
					int main()
					{
						for (int i=0; i< LIMIT; i++)
						{
							printf("%d\n",i);
						}
						return 0;
					}
//					output
//					0
//					1
//					2
//					
//					FAQs on typedef in c
//					1. what is typedef in c?
//					the c typedef statement defines an alias or a nickname for the already existing data type.
//					2. What is typedef struct?
//					The typedef struct is the statement used to define an alias for the structure data type.
//					3. what is typedef enum?
//					the typedef enum is used to define the lias for the enumeration data type.
//					
					
}
