
void blm_out_main(void);
const int var_1 = 5; /** Global Constant variables
                        are stored in .rodata section of code segment. **/
static int var_2;   /** Global Uninitialized static variables
                        are stored in .bss section (uninitialized data seg.)
                        of data segment. **/
static int var3_3 = 1; /** Global Initialized static variables
                            are stored in .data section ( Initialized data seg.)
                            of data segment. **/
int var_4 = 10;     /** Global Initialized variable stored in .data section
                        of data segment. **/
int var_5;          /** Global Uninitialized variable stored in .bss section
                        of data segment. **/
void bml_in_main()
{
  int var_6;        /** Normal Auto variable.
                        (Local) Auto variables are
                        stored in stack. **/
  static int var_7; /** Uninitialized Local static variables
                        are stored in .bss section (uninitialized data seg.)
                        of data segment. **/
  static int var_8 = 1; /** Initialized Local static variables
                         *  are stored in .data section (Initialized data seg.)
                         *  of data segments. **/
  char *var_9 = "This stores in RODADTA";
  char var_10[] = "But this stores in Stack";

  const int var_11 = 5; /** Local Constant variables
                            are stored in Stack. **/
}
