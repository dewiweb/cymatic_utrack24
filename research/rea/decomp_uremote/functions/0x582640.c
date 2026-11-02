// rea decompile_all
// name: FUN_00582640
// address: 0x582640
// body: available
// range: 0x582640-0x582818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00582640(uint *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((int)(param_2 - *param_1) < 0x3c) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x14) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    FUN_00507d00(in_ECX + 0x18,param_1);
    FUN_00507d00(in_ECX + 0x24,param_1);
    *param_1 = *param_1 + 3 & 0xfffffffc;
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    cVar1 = FUN_00596500(in_ECX + 0x50,param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *param_1 = *param_1 + 1 & 0xfffffffe;
      cVar1 = FUN_00596500(in_ECX + 0x58,param_1,param_2);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        *param_1 = *param_1 + 1 & 0xfffffffe;
        FUN_00507db0(param_1,param_2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

