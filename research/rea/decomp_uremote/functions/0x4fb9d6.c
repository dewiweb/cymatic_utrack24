// rea decompile_all
// name: FUN_004fb9d6
// address: 0x4fb9d6
// body: available
// range: 0x4fb9d6-0x4fba63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fb9d6(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_004fba64();
  (**(code **)(*param_1 + 0x34))(0x8d40,param_1[0xb23]);
  puVar3 = (undefined4 *)param_1[0xb22];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_004fb5b6();
  puVar3 = (undefined4 *)param_1[0x18];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_004fe923();
  FUN_004fe923();
  return;
}

