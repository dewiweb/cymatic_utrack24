// rea decompile_all
// name: FUN_00457ae9
// address: 0x457ae9
// body: available
// range: 0x457ae9-0x457cbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00457ae9(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  cVar1 = FUN_004c32c9();
  if (cVar1 != '\0') {
    FUN_00474839();
  }
  if (unaff_EDI[3] != 0) {
    iVar2 = FUN_0044bfc5();
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_004c0902(param_1);
    iVar3 = unaff_EDI[6];
    param_1 = FUN_005b3fb0();
    FUN_005b3fb0();
    unaff_EDI[0x26] = iVar3 / 2;
    if ((float)param_1 < (float)iVar2 * 0.5) {
      param_1 = FUN_005b3fb0();
      iVar2 = FUN_005b3fb0();
      unaff_EDI[0x26] = iVar2;
    }
    iVar2 = FUN_005b3fb0();
    if (iVar2 < param_1 + iVar3) {
      iVar2 = FUN_005b3fb0();
      unaff_EDI[0x26] = iVar2;
    }
    FUN_004c0bf7();
  }
  if (*param_3 != '\0') {
    FUN_004c751a();
    iVar2 = FUN_00465dbc();
    FUN_004c751a();
    iVar3 = FUN_00465dbc();
    if ((-1 < iVar2) && (-1 < iVar3)) {
      FUN_0046642b(&param_3);
      FUN_00465317();
      FUN_004652d6();
      FUN_0046642b(&param_3);
      FUN_00465317();
      FUN_004652d6();
      FUN_004664c4();
      FUN_00465317();
      FUN_004652d6();
    }
  }
  (**(code **)(*unaff_EDI + 0x84))();
  FUN_004c1613();
  FUN_004652d6();
  return;
}

