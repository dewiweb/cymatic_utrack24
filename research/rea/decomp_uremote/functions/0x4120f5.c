// rea decompile_all
// name: FUN_004120f5
// address: 0x4120f5
// body: available
// range: 0x4120f5-0x41216a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004120f5(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *extraout_ECX;
  int in_EDX;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  iVar3 = 0;
  if (param_2 == (int *)0x0) {
    iVar3 = 6;
  }
  else {
    *param_2 = 0;
    if (in_EDX == 0) {
      iVar3 = 0x27;
    }
    else {
      piVar2 = *(int **)(in_EDX + 100);
      if (piVar2 != (int *)0x0) {
        do {
          cVar1 = FUN_004120e6(piVar2,param_1);
          if (cVar1 != '\0') {
            local_8 = piVar2;
            if (piVar2 != extraout_ECX) {
              FUN_00411cc2();
            }
            goto LAB_0041214f;
          }
          piVar2 = (int *)*piVar2;
        } while (piVar2 != extraout_ECX);
      }
      iVar3 = FUN_00411d43(param_1,&local_8);
      if (iVar3 == 0) {
LAB_0041214f:
        *param_2 = local_8[3];
      }
    }
  }
  return iVar3;
}

