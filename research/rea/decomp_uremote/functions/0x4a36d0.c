// rea decompile_all
// name: FUN_004a36d0
// address: 0x4a36d0
// body: available
// range: 0x4a36d0-0x4a3752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_004a36d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  ushort local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  float local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0x1c;
  local_8 = 0;
  iVar2 = *param_1;
  param_1 = (int *)0x0;
  (**(code **)(iVar2 + 0x34))(piVar1,&param_1);
  if (param_1 == (int *)0x0) {
    fVar4 = (float10)1;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,&local_2c);
    iVar2 = FUN_005af9e1(local_28);
    iVar3 = FUN_005af9e1(local_2a);
    local_14 = (uint)local_2c;
    local_8 = 0xffffffff;
    local_18 = (float)local_14 / (float)(iVar2 + iVar3);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    fVar4 = (float10)local_18;
  }
  return fVar4;
}

