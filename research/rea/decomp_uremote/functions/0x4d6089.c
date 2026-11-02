// rea decompile_all
// name: FUN_004d6089
// address: 0x4d6089
// body: available
// range: 0x4d6089-0x4d60cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_004d6089(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4d6095;
  uStack_24 = param_3;
  uStack_28 = param_2;
  iStack_2c = param_1;
  puStack_30 = &param_2;
  puVar3 = &uStack_34;
  uStack_34 = 0x4d60a8;
  (**(code **)(*in_ECX + 0x2c))();
  local_8 = 0;
  puVar3[-1] = param_3;
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar3[-2] = 0x4d60b7;
  iVar2 = FUN_0049fa60();
  puVar4 = puVar3 + -1;
  puVar3[-1] = 0x4d60c3;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar4 + -4) = 0x4d60ca;
  return iVar2 + iVar1;
}

