Action()
{
 /* 
	web_url("index.html", 
		"URL=http://10.10.70.4:9008/tours/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);
 */
		web_url("index.html1", 
		"URL={scheme}{param3}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);
		
		Test;
	
	return 0;
}