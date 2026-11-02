// rea decompile_all
// name: FUN_004bf909
// address: 0x4bf909
// body: available
// range: 0x4bf909-0x4bf9d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004bf909(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  puVar4 = &LAB_005d838b;
  piVar1 = *(int **)(in_ECX + 0x44);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined1 *)(piVar1[2] + -1);
    while (-1 < (int)puVar2) {
      (**(code **)(**(int **)(*piVar1 + (int)puVar2 * 4) + 0x20))(param_2,param_3);
      puVar4 = (undefined1 *)FUN_004c3462();
      if ((char)puVar4 != '\0') {
        return puVar4;
      }
      iVar5 = FUN_00440367(puVar2);
      puVar4 = (undefined1 *)(iVar5 + -1);
      puVar2 = puVar4;
    }
  }
  iVar5 = *(int *)(in_ECX + 0xc);
  do {
    if (iVar5 == 0) {
      return puVar4;
    }
    piVar1 = *(int **)(iVar5 + 0x44);
    if ((piVar1 != (int *)0x0) && (0 < piVar1[3])) {
      FUN_004f5fb6();
      for (iVar6 = piVar1[3]; iVar6 = iVar6 + -1, -1 < iVar6; iVar6 = FUN_00440367(iVar6)) {
        (**(code **)(**(int **)(*piVar1 + iVar6 * 4) + 0x20))(param_2,param_3);
        cVar3 = FUN_004c3462();
        if ((cVar3 != '\0') || (cVar3 = FUN_004f5fce(0), cVar3 != '\0')) {
          puVar4 = (undefined1 *)FUN_00474d0f();
          return puVar4;
        }
      }
      puVar4 = (undefined1 *)FUN_00474d0f();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
  } while( true );
}

