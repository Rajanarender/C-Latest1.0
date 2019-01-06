#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h> //for struct sockaddr_in

/**********************************************************************************
gcc server.c -o server.out
CLI:./server.out portno
socket();

serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = INADDR_ANY; //IP address 
portno = atoi(argv[1]); //portno from char array to integer format ,V.V.Imp step
serv_addr.sin_port = htons(portno); //portno from integer to N/w format 

connect(); //same as bind(),socket struct should be filled using serv_addr object
read();
write();

NOTE: We need to validate Every API function calls except listen()
If any API returns less than zero,then exit from the program
if(apireturnvalue <0) //V.V.Imp
{
exit(0);
}
***************************************************************************************/


int main(int argc,char*argv[])
{
	int sockfd,newsockfd,portno;
	char buff[256]; //Buffer to store data
	struct sockaddr_in serv_addr,cli_addr; //2 struct objects client and server

	if(argc < 2) //argv[0]=./server.out,argv[1]= portno[say 1234]
	{
          //fprintf(stderr,"ERROR since no portno provided in server Commandline\n");
          perror("ERROR since no portno provided in server Commandline\n");
          exit(1);
	}

	sockfd = socket(AF_INET,SOCK_STREAM,0);
	if(sockfd<0)
	{
             perror("ERROR in creating socket\n");
             exit(1);
	}

#if 1 //The loading of socket parameters should be same as client
//Fill the sockaddr_in struct using serv_addr object before binding serv_addr with socket
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY; //IP address 
	portno = atoi(argv[1]);//portno from char array to integer format
	serv_addr.sin_port = htons(portno);//portno from integer to N/w format 
#endif

/*******************************************************
Fill the structure and then pass into bind(),V.V.Imp 
*******************************************************/
	if ( bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr)) < 0 ) //bind server_addr to socket ,typecast sockaddr_in to sockaddr
	{
             perror("ERROR in binding socket\n");
             exit(1);
	}

	listen(sockfd,5); //clients count,At a time how many clients does this server handle

#if 1   //It is different
        int cli_len = sizeof(cli_addr); V.V.Imp step
	newsockfd = accept( sockfd,(struct sockaddr*)&cli_addr,&cli_len ); //Always pass cli_addr to accept,V.V.Imp
	if(newsockfd<0)
	{
             perror("ERROR in accepting the connection\n");
             exit(1);
	}
#endif 
	int n;
	n=read(newsockfd,buff,sizeof(buff));
	if(n<0)
	{
             perror("ERROR in reading from socket\n");
             exit(1);
	}
	printf("Received message from client: %s\n",buff);

	n=write(newsockfd,"Hi",2);
 	if(n<0)
	{
             perror("ERROR in writing to socket\n");
             exit(1);
	}

	close(sockfd);
}
