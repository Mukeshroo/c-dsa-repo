#include <stdio.h>

int main() {
    int n =20;
    int *p;
    p = &n;
    
    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",p);
    
    
    printf("%d\n",&p);
    printf("%d\n",*p);
	
	    return 0;
}
