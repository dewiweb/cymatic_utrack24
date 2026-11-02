// rea decompile_all
// name: FUN_004efa44
// address: 0x4efa44
// body: available
// range: 0x4efa44-0x4efad9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004efa44(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar4 = (undefined4 *)auStack_20;
  *param_1 = juce::TopLevelWindow::vftable;
  local_8 = 1;
  puVar1 = (undefined4 *)param_1[0x1d];
  if ((puVar1 != (undefined4 *)0x0) && (param_1[0x1d] = 0, puVar1 != (undefined4 *)0x0)) {
    uStack_24 = 1;
    puVar4 = &uStack_28;
    uStack_28 = 0x4efa73;
    (**(code **)*puVar1)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4efa78;
  iVar3 = FUN_004ef786();
  *(undefined4 *)((int)puVar4 + -4) = 10;
  *(undefined4 *)((int)puVar4 + -4) = 0x4efa82;
  FUN_0047479c();
  if (*(undefined4 **)(iVar3 + 0x24) == param_1) {
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  *(undefined4 **)((int)puVar4 + -4) = param_1;
  *(undefined4 *)((int)puVar4 + -8) = 0x4efa94;
  FUN_004f6eee();
  puVar1 = DAT_0095d6a4;
  if (((*(int *)(iVar3 + 0x20) == 0) && (DAT_0095d6a4 != (undefined4 *)0x0)) &&
     (DAT_0095d6a4 = (undefined4 *)0x0, puVar1 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)((int)puVar4 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar5 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar5 = 0x4efab6;
    (*pcVar2)();
  }
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x1d];
    *(undefined4 *)((int)puVar4 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar6 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar6 = 0x4efac7;
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)((int)puVar4 + -4) = 0x4efad2;
  FUN_004bfe57();
  *(undefined4 *)((int)puVar4 + -4) = 0x4efad7;
  return;
}

