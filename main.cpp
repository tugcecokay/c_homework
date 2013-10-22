#include <stdio.h>		//
#include <math.h>		//
#include <conio.h>		// Kütüphaneler
#include <string.h>		//
#include <Windows.h>	//
void main()
{
	
	int hesapno, sifre;// Kullanici hesap no ve sifreyi tanimlar.
	int bnkislem;// Hesapta menü yapmak için kullanılan değişkeni tanımlar.
	int bnkekle;// Hesaba para eklemek için kullanılan değişkeni tanımlar.
	int bnktoplam;// Hesaptaki para değişimlerini tanımlar.
	int bnkcek;// Hesaptan para çekmek için kullanılan değişkeni tanımlar.
	int transhspno;//Para gönderilecek hesap numarası değişkenini tanımlar.
	int bnktrans;// Başka bir hesaba gönderilen para miktarı değişkenini tanımlar.
	int anapara=100;// Hesaptaki başlangıç para miktarını tanımlar.
		do
			{
			printf("\t\t\t+++COKAYBANK+++");
			printf("\nKullanici hesap no giriniz:");//
			scanf("%d",&hesapno);//
			printf("Sifreyi giriniz:");//
			scanf("%d",& sifre);//
			}
		while(hesapno!=88423 | sifre!=1993);// Kullanıcı hatalı giriş yaptığı sürece giriş ekranını getirir. 
			{
				system("cls");// Kullanıcı giriş ekranını temizler.
				do// do-while döngüsü
				{
						printf("\t\t\t+++COKAYBANK+++" );
						printf("\n\n\n");
						printf("\nTUGCE COKAY\n\n\n");					//
						printf("\n MENU :\n");							//
						printf(" 1: Hesaba Para Ekle\n");				//
						printf(" 2: Hesaptan Para Cek\n");				//
						printf(" 3: Baska Bir Hesaba Para Gonder\n");	// Hesap işlem menüsü
						printf(" 4: Bakiye Goruntule\n");				//
						printf(" 5: CIKIS\n\n");						//
						printf(" Yapmak Istediginiz Islemi Seciniz : ");//
						scanf("%d",&bnkislem);							//
						printf("\n ");									//
					if(bnkislem==1)// Kullanıcı 1 numaralı işlemi seçerse aşağıdaki işlemleri gerçekleştirir.
						{
							system("cls");// O anda ekranda bulunan görüntüyü temizler.
							printf("Yatirmak Istediginiz Miktari Giriniz :");
							scanf("%d",&bnkekle);
							printf("\n ");
							if(bnkekle>0)// Hesaba eklenen miktar 0 dan büyük olmalıdır ki işlem gerçekleştirilsin.
							{
							bnktoplam=anapara+bnkekle;// hesaptaki para ile eklenen para miktarını toplar bnktoplama aktarır.
							anapara=bnktoplam;//bnktoplamdaki miktarı anaparaya aktarır.
							printf("Hesapta suan %d",anapara);printf(" TL'niz var\n\n");// Hesaptaki son para miktarını ekranda görüntüler.
							}
							else 
								printf("Boyle para bicimi yok\n");// Hesaba eklenen miktar 0 dan küçük olursa ekranda bu kısım görüntülenir.
			
						}
					if(bnkislem==2)// Kullanıcı 2 numaralı işlemi seçerse aşağıdaki işlemler gerçekleştirilir.
						{	
							system("cls");
							printf("Cekmek Istediginiz Miktari Giriniz : ");
							scanf("%d",&bnkcek);//
							printf("\n ");// Bir satır boşluk bırakır.
							if (bnkcek>0)// Çekilecek miktar 0 dan büyük olmalı.
							{
							if(bnkcek>anapara)
								printf("Yetersiz Bakiye\n");// Çekilmek istenen miktar anaparadan büyük olduğunda ekranda bu kısım görüntülenir.
							else
								{
									bnktoplam=anapara-bnkcek;// Hesaptaki paradan çekilen para miktarını düşer ve bnktoplama aktarır.
									anapara=bnktoplam;//bnktoplamdaki miktarı anaparaya aktarır.
									printf("Hesapta suan %d",anapara);printf(" TL'niz var\n\n");// Sonucu ekrana yazdırır.
								}
							} else printf("Boyle Para bicimi yok\n");//Çekilmek istenen miktar 0 dan küçük olduğunda ekrana bu görüntü yazdırılır.
						}
					if(bnkislem==3)//Kullanıcı 3 numaralı işlemi seçerse aşağıdaki işlemler gerçekleştirilir.
						{	
							system("cls");//Ekranı temizler.
							printf("Transfer Yapilacak Hesap Numarasini Giriniz: ");
							scanf("%d",&transhspno);// transfer yapılacak kişinin hesap no yu transhspno'a aktarır.
							printf("\n");
							printf("Gondermek Istediginiz Miktari Giriniz : ");
							scanf("%d",&bnktrans);// Girilen miktarı bnktrans'e aktarır.
							printf("\n ");
							if (bnktrans>0)// Gönderilmek istenen miktarın 0 dan büyük olma şartı.
							{
							if(bnktrans>anapara)// Gönderilmek istenen miktar anaparadan büyük olursa işlem gerçekleştirilmez.
								printf("Yetersiz Bakiye\n");// Bu durumda ekrana yetersiz bakiye yazdırır.
							else
								{	
									bnktoplam=anapara-bnktrans;//Hesaptaki paradan gönderilen para miktarını düşer ve bnktoplama aktarır.
									anapara=bnktoplam;// bnktoplam daki para miktarını anaparaya aktarır.
									printf("%d",transhspno);printf(" Nolu Hesap Numarasina %d",bnktrans);printf(" TL gonderilmistir.\n");	
								}
							} else 
								printf("Boyle Para bicimi yok\n");// Girilen miktar 0 dan küçük olduğunda ekranda bu kısım görüntülenir.
						}
					if(bnkislem==4)//Kullanıcı 4 numaralı işlemi seçerse aşağıdaki işlemler gerçekleştirilir.
						{	
							system("cls");
							printf("Hesapta suan %d",anapara); printf(" TL'niz var. \n");// Bakiye görüntülenmek istenirse ekranda bu kısım görüntülenir.
						}
				}
					while(bnkislem!=5);//bnkislem 5e eşit olmadığı sürece döngüye devam eder, aksi halde programdan çıkış gerçekleşir.
					system("cls");
					printf("Cikis isleminiz gerceklesti. ");
					getch();// Görüntünün ekranda kalmasını sağlar.
			}
}
