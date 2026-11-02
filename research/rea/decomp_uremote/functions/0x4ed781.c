// rea decompile_all
// name: FUN_004ed781
// address: 0x4ed781
// body: available
// range: 0x4ed781-0x4ed8e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

char FUN_004ed781(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char local_11;
  
  FUN_004f4b4e();
  FUN_004c751d();
  FUN_004c751a();
  FUN_004c71a0();
  piVar4 = (int *)FUN_004ed754();
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return '\0';
    }
    FUN_004f5fb6();
    piVar1 = (int *)piVar4[0x12];
    if (piVar1 != (int *)0x0) {
      iVar5 = piVar1[2];
      while (-1 < iVar5 + -1) {
        local_11 = (**(code **)(**(int **)(*piVar1 + (iVar5 + -1) * 4) + 4))();
        if ((local_11 != '\0') || (cVar2 = FUN_004f5fce(), cVar2 != '\0')) goto LAB_004ed8d2;
        iVar5 = FUN_00440367();
      }
    }
    local_11 = (**(code **)(*piVar4 + 0x6c))();
    if ((local_11 != '\0') || (cVar2 = FUN_004f5fce(), cVar2 != '\0')) break;
    iVar5 = FUN_004c3124();
    if (iVar5 != 0) {
      cVar2 = FUN_004c7203();
      FUN_004c751a();
      FUN_004c71a0();
      cVar3 = FUN_004c721b();
      if ((cVar2 != '\0') || (cVar3 != '\0')) {
        FUN_004c3028();
        iVar6 = FUN_004c3124();
        local_11 = iVar5 != iVar6;
        if (((bool)local_11) || (cVar2 = FUN_004f5fce(), cVar2 != '\0')) break;
      }
    }
    FUN_00474d0f();
    piVar4 = (int *)piVar4[3];
  }
LAB_004ed8d2:
  FUN_00474d0f();
  return local_11;
}

