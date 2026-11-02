// rea decompile_all
// name: FUN_0046136a
// address: 0x46136a
// body: available
// range: 0x46136a-0x4613f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046136a(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_14 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x1c))(param_2 + 8);
  if ((iVar1 != 0) && (iVar3 = 0, 0 < *(int *)(iVar1 + 8))) {
    do {
      uVar2 = FUN_004618a6(local_30);
      local_8._0_1_ = 1;
      FUN_0046e594(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004615f7();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_00461654(&local_20);
  FUN_0046e56c();
  return param_1;
}

