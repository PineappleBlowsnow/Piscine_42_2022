#include <stdio.h>

int ft_find_next_prime(int nb);
int main()
{
    int tab[]={-933,2,0 ,  2,1 ,  2,2 ,  2,7853 ,  7853,78989 ,  78989,2147483643 ,  2147483647,2147483645 ,  2147483647,2147483646 ,  2147483647,2147483647 ,  2147483647,98308 ,  98317,251911 ,  251917,353800 ,  353807,181243 ,  181243,117264 ,  117269,178194 ,  178207,145939 ,  145949,112659 ,  112663,185366 ,  185369,55332 ,  55333,243756 ,  243769,273453 ,  273457,107571 ,  107581,90677 ,  90677,373819 ,  373823,2108 ,  2111,40509 ,  40519,81469 ,  81509,117314 ,  117319,391254 ,  391273,174190 ,  174197,417903 ,  417931,28785 ,  28789,44667 ,  44683,174209 ,  174221,420996 ,  420997,65169 ,  65171,23703 ,  23719,62105 ,  62119,423068 ,  423083,39069 ,  39079,152733 ,  152753,171682 ,  171697,115373 ,  115399,72367 ,  72367,268463 ,  268487,223937 ,  223939,165570 ,  165587,216264 ,  216289,158408 ,  158419,336074 ,  336079,52940 ,  52951,60110 ,  60127,12496 ,  12497,345819 ,  345823,169707 ,  169709,158446 ,  158449,70896 ,  70901,106225 ,  106243,106742 ,  106747,335099 ,  335107,61699 ,  61703,231686 ,  231701,221959 ,  221987,264456 ,  264463,44300 ,  44351,64780 ,  64781,159006 ,  159013,100638 ,  100649,178470 ,  178481,382257 ,  382267,232755 ,  232777,143157 ,  143159,132405 ,  132409,215865 ,  215893,201531 ,  201547,351042 ,  351047,23880 ,  23887,180554 ,  180563,73546 ,  73547,339802 ,  339811,289136 ,  289139,47984 ,  48017,205683 ,  205703,18293 ,  18301,189816 ,  189817,176506 ,  176507,403326 ,  403327,136064 ,  136067,384898 ,  384907,17288 ,  17291,208273 ,  208277,171418 ,  171427,56220 ,  56237,238502 ,  238519,107437 ,  107441,143794 ,  143797,196530 ,  196541,199617 ,  199621,176065 ,  176081,130506 ,  130513,174029 ,  174047,403406 , 403433,253902 ,  253907,339411 ,  339413,101345 ,  101347,53223 ,  53231,416752 ,  416761,165369 ,  165379,315899 ,  315899};
    for (unsigned int i=0;i<sizeof(tab)/sizeof(tab[0])-1;i+=2)
		{
			if(ft_find_next_prime(tab[i])!=tab[i+1])
				printf ("%d\n",tab[i]); 
		}
}