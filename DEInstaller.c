#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int main()
{

char input[1];

printf("Welcome to the Paper Distributive DE Installer!\n");
printf("Please choose an option\n");



printf("1) XFCE\n");
printf("2) KDE\n");
printf("3) GNOME\n");




scanf("%s", &input);

//DONE
if (!strcmp(input, "1")) {
	int XFCE;
	XFCE = system("sudo pacman -Syu xfce4 xfce4-goodies");

	printf("To enter into XFCE, please reboot your system with 'sudo reboot'\n");
	return XFCE;
}

//DONE DOCS UPDATE NEEDED
if (!strcmp(input, "2")) {
	int KDE;
	KDE = system("sudo pacman -Syu --needed xorg sddm && sudo pacman -S --needed plasma kde-applications && sudo systemctl enable sddm && sudo systemctl enable NetworkManager");

        

        printf("To enter into KDE, please reboot your system with 'sudo reboot'\n");
	return KDE;
}



//DONE 
if (!strcmp(input, "3")) {
	int GNOME;
	GNOME = system("sudo pacman -Syu xorg xorg-server && sudo pacman -S gnome && sudo systemctl start gdm.service && sudo systemctl enable gdm.service ");
	
	printf("To enter into GNOME, please reboot your system with 'sudo reboot'\n");
	return GNOME; 

}





return 0;
}
