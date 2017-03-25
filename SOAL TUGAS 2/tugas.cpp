#include <stdio.h>
#include <string.h>

int main() {

	struct {
		char prodi[3];
		char nama[100];
		char nilai[3];
	}rekaman;

	FILE *BeforeUpdate; 	//* (pointer)
	FILE *AfterUpdate;

	BeforeUpdate = fopen("BeforeUpdate.dat", "r");
	AfterUpdate = fopen("AfterUpdate.dat", "w");

	// baca data pertama
	fscanf(BeforeUpdate, "%s %s %s\n", &rekaman.prodi, 
		&rekaman.nama, &rekaman.nilai);

	// baca data 
	do{

	  //core logic 
	  //jika prodi if dan nama = "mhsE"
	if (
	     (strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"mhsE") == 0) //strcmp : (membandingkan/membaca string) 
		) 
				  
	{
	  //ganti nilai jadi 80 
	  strcpy(rekaman.nilai, "80"); 	//strcpy : untuk mengedit nilai
	}
				  
    if (
	     (strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"mhsJ") == 0) //strcmp : (membandingkan/membaca string) 
	   ) 
				  
	{
	  //ganti nilai jadi 80 
	  strcpy(rekaman.nilai, "80"); 	//strcpy : untuk mengedit nilai
	}
				  
			
	  //printf("%s %s %s\n", &rekaman.prodi, &rekaman.nama, &rekaman.nilai);

	  fprintf
	  (AfterUpdate, "%s %s %s\n", rekaman.prodi, rekaman.nama, rekaman.nilai); //menulis di arsipmatkulupdate.dat

	  //baca data berikutnya
	  fscanf(BeforeUpdate, "%s %s %s\n", &rekaman.prodi, &rekaman.nama, &rekaman.nilai);
	  
	}while(!feof(BeforeUpdate)); // feof : membaca data perbaris
	
	printf("PEROSES UPDATING BERES") ;
	fclose(BeforeUpdate);
	fclose(AfterUpdate);
	     
	return 0;
}
