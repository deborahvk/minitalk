# minitalk

Consignes spécifiques au projet
• Les fichiers exécutables doivent être nommés client et server.
• Vous devez rendre un Makefile qui compilera vos fichiers sources. Il ne doit pas
relink.
• Vous devez gérer les erreurs avec du bon sens. En aucun cas votre programme ne
doit quitter de manière inattendue (faute de segmentation, erreur de bus, double
free, etc.).
• Votre programme ne doit pas avoir de fuites de mémoire.
• Vous pouvez utiliser une variable globale par programme (une pour le client
et une pour le serveur) mais leur usage doit être justifié.
• Afin de faire la partie obligatoire, vous avez le droit d’utiliser les fonctions sui-
vantes :
◦ write
◦ ft_printf et tout équivalent que VOUS avez codé
◦ signal
◦ sigemptyset
◦ sigaddset
◦ sigaction
◦ kill
◦ getpid
◦ malloc
◦ free
◦ pause
◦ sleep
◦ usleep
◦ exit

Partie obligatoire
Vous devez réaliser un programme de communication sous la forme d’un client et
d’un serveur.
• Le serveur doit être lancé en premier et doit, après le lancement, afficher son PID.
• Le client prend deux paramètres :
◦ Le PID du serveur.
◦ Une chaîne de caractères à transmettre.
• Le client doit communiquer au serveur la chaîne passée en paramètre.
Une fois la chaîne entièrement reçue, le serveur doit l’afficher.
• Le serveur doit être capable d’afficher la chaîne rapidement. Par rapidement, on
entend que si vous pensez que c’est trop long, alors c’est sûrement trop long.
1 seconde pour afficher 100 caractères, c’est COLOSSAL !
• Votre serveur doit pouvoir recevoir des chaînes de plusieurs clients à la suite sans
nécessiter d’être relancé.
• La communication entre vos programmes doit se faire uniquement à l’aide de
signaux UNIX.
• Vous ne pouvez utiliser que les deux signaux suivants : SIGUSR1 et SIGUSR2.
Le système Linux ne met PAS les signaux en file d’attente lorsque
vous avez déjà un signal en attente de ce type ! Bonus ?

Partie bonus
Liste des bonus :
• Le serveur confirme la réception de chaque message en envoyant un signal au client.
• Le support des caractères Unicode !
Les bonus ne seront évalués que si la partie obligatoire est
PARFAITE. Par parfaite, nous entendons complète et sans aucun
dysfonctionnement. Si vous n’avez pas réussi TOUS les points de la
partie obligatoire, votre partie bonus ne sera pas prise en compte.
