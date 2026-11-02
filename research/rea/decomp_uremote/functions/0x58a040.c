// rea decompile_all
// name: FUN_0058a040
// address: 0x58a040
// body: available
// range: 0x58a040-0x58a116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0058a040(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  if ((uint)(param_2 - *param_1) < 0x12) {
    uVar3 = (uint)param_1 & 0xffffff00;
  }
  else {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x14) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *param_1 = *param_1 + 2;
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    cVar2 = FUN_00596500(in_ECX + 0x18,param_1,param_2);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      *(undefined1 *)(in_ECX + 0x28) = *(undefined1 *)*param_1;
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      uVar3 = CONCAT31((int3)((uint)(iVar1 + 1) >> 8),1);
    }
  }
  return uVar3;
}

