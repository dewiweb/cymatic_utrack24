// rea decompile_all
// name: FUN_004ff090
// address: 0x4ff090
// body: available
// range: 0x4ff090-0x4ff0e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004ff090(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  undefined1 local_28 [36];
  
  piVar1 = *(int **)(in_ECX + 4);
  if ((int *)*piVar1 == (int *)0x0) {
    uVar4 = (uint)piVar1 & 0xffffff00;
  }
  else if ((char)piVar1[9] == '\0') {
    FUN_004a7554();
    uVar4 = FUN_004a6c8c();
  }
  else {
    iVar2 = *(int *)*piVar1;
    uVar3 = FUN_0047513c(local_28,param_1);
    uVar4 = (**(code **)(iVar2 + 0x28))(uVar3);
  }
  return uVar4;
}

