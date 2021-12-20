#Assignment: Shell Programming
#Class ID: SE1601
#Student ID: DE160277
#Student Name: HoangKimPhu
#Source File: HoangKimPhu_DE160277_ShellProgramming.sh
#!/bin/sh
echo "*********************************************************************"
echo "Please choose from the following options; type the option number and hit the <Enter> key. \n"
echo "a or A To display the current directory"
echo "b or B To list names of the files in a given directory"
echo "c or C To display today's date and time"
echo "d or D To display whether a file is a simple file or directory"
echo "e or E To execute a command line."
echo "q or Q To exit the program."
echo "********************************************************************* \n"
while true;
do
echo "Enter your choice and hit <Enter>: \c"
read option
case "$option" in
	a|A)	pwd	;;
	b|B)	echo "Please enter the directory path: \c"
		read pth
		[ -d "$pth" ] && ls -l $pth || echo "$pth is not a directory."
		;;
	c|C)	date	;;
	d|D)	echo "Please enter file name: \c"
		read filename
		
		if [ -d "$filename" ] 
			then echo "$filename is a directory."
		elif [ -f "$filename" ] 
			then echo "$filename is an ordinary file." 
		else echo "$filename does not exist."
		fi
		;;
	e|E)	echo "Please enter a command to be executed: \c"
		read cmd
		eval $cmd	;;
	q|Q)	echo "Bye now!"
		break	;;
	*) 	echo "Unknown response" ;;
esac

echo "Hit <Enter> to continue. \c"
read enter
echo
done
