Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html", 
		"URL=http://10.10.30.7:81/tours/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_custom_request("rappor", 
		"URL=https://clients4.google.com/rappor", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.rappor", 
		"BodyBinary=\\x08F\\x12\\x1B\t\\xB6\"\\xE3\\xAE\\xB9\\xCAE\\xE2\\x12\\x10F\\xE2&5yU\\x11\\xCC\\x92h\\xD6\\xB4\\x81\\x01\\xD8\\x13\\x12\\x1B\t\\xB2U\\xE18[\\xEE\\x9E\\xBA\\x12\\x10\\x1B}\"A2\\x06\\xAA9\\x89\\x12\\xE2)\\xB5\\xDA@\\x1B", 
		EXTRARES, 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=71", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("SMSV=ADHTe-DswTkJyfP5ToiPzMjl1WzaXgYnZ9XQx_opc4yp4UPm7P1A_J4uHAnUZep8pz3ga738IgNS7dHlnLdfMHwqiZrN1l0wHp6h3TFNcrWF2CTkLB3kqXTSVvhXXRjGamK4jDTxyMrX; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5_-GKSkAR4N5B82jttzI0UHJGew1IK8M7uf5a2dk5nKOBvm0ekf4GSQVJrT3f9n77XTaAXKKcCrcBZnXByaCYQGGWIyJ37T2HybiPTcb2UDMAluc_I_8dz1TFCW7NLA_rEu_PuOET2AHICMMb7sS3p8zL1zJOTWYFGg6rV93TUnDdGIzARu6K9MNiZwnVkXk4rmjf12Guvvr0H5WzzjfK8qSqDAQ; DOMAIN=accounts.google.com");

	web_add_cookie("SID=xQaNrjj20SaHUhN0oSlnkL8oC13HBp1amve4Ujvrkayy29Ym7kyDMPGlwe7ET6B_P3BSLg.; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=s.IN|wise:xQaNrtnEbIkAC42_4yHC5kMVQ3ItRPRk6xVGhz1EULRLCm6ZiAsOvncg4vGDUgH-EO7Xxw.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AWTQOR7I7nw2gUB8z; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AqjRnI6eLHnpadeHA; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=CDBV4AhfvRftuCpu/APcucHoXzCxSHr5SU; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=QDMB5_tmXGnXS0GF/A3i0gi53tsdchFmIH; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:5JxnML4RGY_RK2sJsv106ECbXHllgiplho8UkePPEoCnQHA9piqZmYgdAYatyS6XlY2-9ZMpjgABddKMCkVtFurTLoGoug:5V8Rn-KPrUlInXzx; DOMAIN=accounts.google.com");

	web_add_cookie("NID=156=OiLqW35aaZUaLWAXmyuj5h_yj8Ae6-dcmfWp0_hg0a1CxI9sXoevRLZl5b42ullfLfO_KOUNoKauqouHQjRV7T6cE4EFpZf-KMayZOclsV7rUzBeHnvjkie_yQxMCeKeczT97WXCfcMoxa6xYb31QFQaek07bjpIQKiBbV867E1gOPTIY4RO1hQPNFr-SHco18GLNDyBIzjaVrWEbWU2koskYlFh4mqcoKrMYGjCmLHGruWX; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=ABtHo-F3BeoVO1McffqBtYozXkS3x7-13WMpIZchEkKBRKs41S5YjfoBoa5FRpW4eyREi25Cb9Y; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-1-29-10; DOMAIN=accounts.google.com");

	web_add_cookie("IDE=AHWqTUmbUmvGd33Q2nNZnCQhkUH7I5P3iHSyUDE94JayzQpoEI69pgZoq_wW9YML; DOMAIN=stats.g.doubleclick.net");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=durations_metrics&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=https://ssl.google-analytics.com/ga.js", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZkZpsLWtdPNQjLeeNQA4kIy3OQUx6JBQ=", "Referer=", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-33054271-5&cid=279443394.1470319213&jid=951328821&_v=5.7.2&z=2018062406", "Referer=", ENDITEM, 
		LAST);

	return 0;
}