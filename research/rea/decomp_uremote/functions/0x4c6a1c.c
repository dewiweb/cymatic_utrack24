// rea decompile_all
// name: FUN_004c6a1c
// address: 0x4c6a1c
// body: available
// range: 0x4c6a1c-0x4c6a96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004c6a1c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  FUN_00467a53();
  piVar1 = (int *)(&DAT_0095db88 + param_1 * 4);
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)FUN_005af82d(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar3 = FUN_004f5450();
      *puVar2 = uVar3;
      puVar2[1] = 1;
      puVar2[2] = param_1;
      *(undefined1 *)(puVar2 + 3) = 1;
    }
    *piVar1 = (int)puVar2;
  }
  else {
    piVar4 = (int *)(*piVar1 + 4);
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  DAT_0095da6c = 0;
  UNLOCK();
  return *piVar1;
}

