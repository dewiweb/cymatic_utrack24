// rea decompile_all
// name: FUN_004d669c
// address: 0x4d669c
// body: available
// range: 0x4d669c-0x4d66f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004d669c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0;
  local_8 = 0x4d66a8;
  iStack_24 = *(int *)(param_1 + 0x1c) + -2;
  puStack_28 = (undefined4 *)0x1;
  uStack_2c = 1;
  FUN_004c09cc();
  iStack_24 = iVar1;
  puStack_28 = &param_1;
  puVar3 = &uStack_2c;
  uStack_2c = 0x4d66d4;
  uVar2 = (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  puVar3[-1] = uVar2;
  puVar3[-2] = 0x4d66e1;
  FUN_004e5c31();
  puVar4 = puVar3 + -1;
  puVar3[-1] = 0x4d66e9;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar4 + -4) = 0x4d66ee;
  return;
}

