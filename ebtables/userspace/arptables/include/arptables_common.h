#ifndef _ARPTABLES_COMMON_H
#define _ARPTABLES_COMMON_H

enum exittype {
	OTHER_PROBLEM = 1,
	PARAMETER_PROBLEM,
	VERSION_PROBLEM
};
extern void exit_printhelp() __attribute__((noreturn));
extern void exit_tryhelp(int) __attribute__((noreturn));
int check_inverse(const char option[], int *invert, int *optind, int argc);
extern int string_to_number(const char *, 
			    unsigned int, 
			    unsigned int,
			    unsigned int *);
extern int iptables_insmod(const char *modname, const char *modprobe);
void exit_error(enum exittype, char *, ...)__attribute__((noreturn,
							  format(printf,2,3)));
extern const char *program_name, *program_version;

  extern void init_extensions(void);

#endif /*_IPTABLES_COMMON_H*/
