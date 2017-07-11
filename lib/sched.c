#include <env.h>
#include <pmap.h>
#include <printf.h>

/* Overview:
 *  Implement simple round-robin scheduling.
 *  Search through 'envs' for a runnable environment ,
 *  in circular fashion statrting after the previously running env,
 *  and switch to the first such environment found.
 *
 * Hints:
 *  The variable which is for counting should be defined as 'static'.
 */
void sched_yield(void)
{
	static int i = 0;
	//printf("sched, i = %d\n", i);
	while(1) {
		struct Env* cur = &(envs[i]);
		if (cur->env_status == ENV_RUNNABLE) {
			i = (i+1)%NENV;
			env_run(cur);
			return;
		}
		i = (i+1) % NENV;
		//printf("now i = %d\n", i);
	}
	//printf("hit");
}
