#include<syslog.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *f;

	f = fopen("not_here","r");
	if(!f)
		syslog(LOG_ERR|LOG_USER,"opps - %m\n");
	exit(0);
}
