#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
int
main (void)
{
    int xj = 1, xk = 1, yj = 1, yk = 1;
    int mx = 80 * 2, my = 24 * 2;

    WINDOW *ablak;
    ablak = initscr ();
    noecho ();
    cbreak ();
    nodelay (ablak, true);
    
    for (;;)
    {
        xj = (xj - 1) % mx;
        xk = (xk + 1) % mx;

        yj = (yj - 1) % my;
        yk = (yk + 1) % my;

        clear ();
        int i;
        for(i=1;i<=my;i++)
            {
			mvprintw (i, 0 , ".");
			mvprintw (i, 80, ".");
		    }
        int j;
         for(j=1;i<=mx;j++)
            {
			mvprintw (0, j , ".");
			mvprintw (24, j, ".");
		    }
        mvprintw (abs ((yj + (my - yk)) / 2),
                  abs ((xj + (mx - xk)) / 2), "o");

        refresh ();
        usleep (150000);

    }
    return 0;
}
