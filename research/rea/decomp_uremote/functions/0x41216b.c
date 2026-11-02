// rea decompile_all
// name: FUN_0041216b
// address: 0x41216b
// body: available
// range: 0x41216b-0x4121b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041216b(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 4);
    if (param_2 != 0) {
      do {
        iVar2 = *(int *)(iVar3 + 4);
        if (*(short *)(iVar3 + 0x12) < 1) {
          FUN_0041232a();
          uVar4 = uVar4 + 1;
        }
      } while ((iVar3 != iVar1) && (iVar3 = iVar2, uVar4 < param_2));
    }
  }
  return uVar4;
}

