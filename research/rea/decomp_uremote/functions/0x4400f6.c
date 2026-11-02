// rea decompile_all
// name: FUN_004400f6
// address: 0x4400f6
// body: available
// range: 0x4400f6-0x44016a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004400f6(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00467e7a();
  uVar1 = *(uint *)(in_ECX + 0x20);
  if (uVar1 != 0) {
    uVar2 = (uint)uVar4 - *(uint *)(in_ECX + 0xa0);
    iVar3 = ((int)((ulonglong)uVar4 >> 0x20) - *(int *)(in_ECX + 0xa4)) -
            (uint)((uint)uVar4 < *(uint *)(in_ECX + 0xa0));
    if ((iVar3 <= (int)uVar1 >> 0x1f) && ((iVar3 < (int)uVar1 >> 0x1f || (uVar2 < uVar1)))) {
      if (*(int *)(in_ECX + 0x104) == 0) {
        return;
      }
      FUN_0043f565((float)CONCAT44(iVar3,uVar2) / (float)(int)uVar1);
      return;
    }
  }
  FUN_0044016b(1);
  return;
}

