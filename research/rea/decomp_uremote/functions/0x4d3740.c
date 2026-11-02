// rea decompile_all
// name: FUN_004d3740
// address: 0x4d3740
// body: available
// range: 0x4d3740-0x4d3782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_004d3740(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0;
  local_8 = 0x4d374c;
  iStack_24 = param_2;
  iStack_28 = param_1;
  puStack_2c = &param_1;
  puVar2 = &uStack_30;
  uStack_30 = 0x4d375c;
  (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  puVar2[-1] = iVar1 + 0x88;
  puVar2[-2] = 0x4d376c;
  iVar1 = FUN_0049fa60();
  iVar1 = iVar1 + param_2;
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x4d3779;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar3 + -4) = 0x4d3780;
  return iVar1;
}

