#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	printf("\nEnter To email id :");
	char To_mail[30000], Your_mail[30000], Your_passwd[30000], Your_text[30000], Your_subject[30000];
	scanf("%s", To_mail);
	printf("\nEnter From email id :");
	scanf("%s", Your_mail);
	printf("\nEnter password : ");
	scanf("%s", Your_passwd);
	printf("\nEnter subject : ");
	scanf("%s", Your_subject);
	printf("\nEnter the body of mail : ");
	scanf("%s", Your_text);

	printf("\nTo : %s", To_mail);
	printf("\nFrom : %s", Your_mail);
	printf("\nPassword : %s", Your_passwd);
	printf("\nMessage : %s", Your_text);
	char load[30000], temp[300000];
	strcpy(load, "");
	strcpy(temp, "");
	strcat(load, "curl -url 'smtps://smtp.gmail.com:465' --ssl-reqd --mail-from '");
	strcat(load, Your_mail);
	strcat(load, "'");
	strcat(load, " --mail-rcpt '");
	strcat(load, To_mail);
	strcat(load, "' --user '");
	strcat(load, Your_mail);
	strcat(load, ":");
	strcat(load, Your_passwd);
	strcat(load, "' -T <(echo -e 'From: ");
	strcat(load, Your_mail);
	strcat(temp, "\\nTo: ");
	strcat(temp, To_mail);
	strcat(temp, "\\nSubject: ");
	strcat(temp, Your_subject);
	strcat(temp, "\\n\\n");
	strcat(temp, Your_text);
	strcat(temp, "')");
	strcat(load, temp);


	system("touch sendmessage.sh");
	system("chmod +x sendmessage.sh");
	FILE *fp;
   	fp = fopen("sendmessage.sh", "w");
   	fputs(load, fp);
   	fclose(fp);
	printf("\nRun sendmessage.sh to send the email\n");

	return 0;
}