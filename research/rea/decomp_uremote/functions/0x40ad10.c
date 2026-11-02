// rea decompile_all
// name: FUN_0040ad10
// address: 0x40ad10
// body: available
// range: 0x40ad10-0x40ad77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ad10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *unaff_EBX;
  
  iVar1 = *(int *)(param_1 + 0x2b4);
  _memset(unaff_EBX,0,0x3a0);
  FUN_0040ac5f(param_2);
  *(int *)((int)unaff_EBX + 0x4c) = iVar1;
  *(undefined4 *)((int)unaff_EBX + 0x37c) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 *)((int)unaff_EBX + 0x38c) = *(undefined4 *)(iVar1 + 0x51c);
  uVar2 = FUN_0040ace3(*(undefined4 *)(iVar1 + 0x558),*(undefined4 *)((int)unaff_EBX + 0x37c));
  *(undefined4 *)((int)unaff_EBX + 900) = uVar2;
  *(undefined4 *)((int)unaff_EBX + 0x398) = param_3;
  return;
}

