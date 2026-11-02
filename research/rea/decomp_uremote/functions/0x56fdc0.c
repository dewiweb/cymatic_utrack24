// rea decompile_all
// name: FUN_0056fdc0
// address: 0x56fdc0
// body: available
// range: 0x56fdc0-0x56fea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056fdc0(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  undefined2 uVar6;
  
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar5 = *(ushort *)*param_2;
  *param_2 = *param_2 + 2;
  *param_2 = *param_2 + 2;
  uVar6 = *(undefined2 *)*param_2;
  *param_2 = *param_2 + 2;
  *param_2 = *param_2 + 2;
  lVar2 = __allshl();
  lVar3 = __allshl();
  lVar4 = __allshl();
  *param_1 = lVar2 + lVar3 + lVar4 + (ulonglong)uVar5;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)*param_2;
  *param_2 = *param_2 + 2;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,param_2,uVar5,uVar6);
  return;
}

