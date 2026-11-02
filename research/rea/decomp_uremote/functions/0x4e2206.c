// rea decompile_all
// name: FUN_004e2206
// address: 0x4e2206
// body: available
// range: 0x4e2206-0x4e225b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e2206(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 2;
  uStack_24 = *(undefined4 *)(param_1 + 0x18);
  uStack_28 = 0x4e2224;
  FUN_004f7ae7();
  puVar4 = (undefined4 *)auStack_20;
  local_8._0_1_ = 1;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x1d;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uStack_24 = 1;
      puVar4 = &uStack_28;
      uStack_28 = 0x4e223b;
      (**(code **)*puVar2)();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)((int)puVar4 + -4) = 1;
    pcVar3 = (code *)*puVar2;
    puVar5 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar5 = 0x4e224c;
    (*pcVar3)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4e2254;
  FUN_004652d6();
  *(undefined4 *)((int)puVar4 + -4) = 0x4e2259;
  return;
}

