// rea decompile_all
// name: FUN_00507db0
// address: 0x507db0
// body: available
// range: 0x507db0-0x507e38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00507db0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  if (param_2 - *param_1 < 8) {
    uVar3 = FUN_005063e0();
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    bVar1 = *(byte *)*param_1;
    *param_1 = *param_1 + 1;
    *(uint *)(in_ECX + 4) = (uint)bVar1;
    *(undefined1 *)(in_ECX + 8) = *(undefined1 *)*param_1;
    *param_1 = *param_1 + 1;
    _memcpy((void *)(in_ECX + 9),(void *)*param_1,6);
    iVar2 = *param_1;
    *param_1 = iVar2 + 6;
    uVar3 = CONCAT31((int3)((uint)(iVar2 + 6) >> 8),1);
  }
  return uVar3;
}

