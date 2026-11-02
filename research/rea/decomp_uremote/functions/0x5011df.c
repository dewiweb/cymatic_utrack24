// rea decompile_all
// name: FUN_005011df
// address: 0x5011df
// body: available
// range: 0x5011df-0x501240 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005011df(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(in_EAX + 8);
  iVar3 = *(int *)(in_EAX + 0x10) * 0x10 + iVar4;
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0x10) {
    uVar1 = *(undefined4 *)(iVar4 + 8);
    iVar2 = *(int *)(iVar4 + 4);
    iVar5 = *(int *)(iVar4 + 0xc) + iVar2;
    for (; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      FUN_004fb67f(uVar1,param_2);
    }
  }
  return;
}

