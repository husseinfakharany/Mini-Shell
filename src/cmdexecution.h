//
// Created by fabie on 24/02/2021.
//

#ifndef TP4_CMDEXECUTION_H
#define TP4_CMDEXECUTION_H

/* Execution d'un commande seul fourni par le pointeur sur la structure de données cmdline */
void executeCmd (struct cmdline *l);

/* Execution de deux commandes, lié par un tube, fourni par le pointeur sur la structure de données cmdline */
void executePipe(struct cmdline *l);

/* Execution de tout types de commandes fourni par le pointeur sur la structure de données cmdline */
void executePipes(struct cmdline *l);

/* Redirige le flot de sortie ou d'entrée du processus en cours */
void redirect(char *file, int old);

/* Recupère tous les fils mort
 * Fait pour être utiliser comme handler par le processus père à la reception de SIGCHLD
*/
void handler(int sig);

#endif //TP4_CMDEXECUTION_H

