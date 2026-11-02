// rea decompile_all
// name: FUN_004d2c0f
// address: 0x4d2c0f
// body: available
// range: 0x4d2c0f-0x4d2c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d2c0f(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_004d2b7d();
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = (uint)uVar4;
  if (((*(byte *)(in_ECX + 0x178) & 2) == 0) || ((char)uVar4 == '\0')) {
    if ((*(byte *)(in_ECX + 0x278) & 2) == 0) {
LAB_004d2c56:
      return uVar1 & 0xffffff00;
    }
    if ((char)uVar4 == '\0') {
      uVar4 = FUN_004d2be4(uVar3);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar1 = (uint)uVar4;
      if ((char)uVar4 == '\0') goto LAB_004d2c56;
    }
    piVar2 = (int *)(in_ECX + 0x210);
  }
  else {
    piVar2 = (int *)(in_ECX + 0x110);
  }
  uVar1 = (**(code **)(*piVar2 + 0x6c))(uVar3);
  return uVar1;
}

