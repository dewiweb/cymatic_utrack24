// rea decompile_all
// name: FUN_00472ccc
// address: 0x472ccc
// body: available
// range: 0x472ccc-0x472d14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472ccc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  uint uVar4;
  
  uVar4 = param_1[2];
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      if (unaff_EBX == *(uint *)(*param_1 + uVar3 * 4)) goto LAB_00472d00;
      uVar1 = (int)(uVar4 + uVar3) / 2;
      if (uVar1 == uVar3) break;
      uVar2 = uVar1;
      if (unaff_EBX < *(uint *)(*param_1 + uVar1 * 4)) {
        uVar2 = uVar3;
        uVar4 = uVar1;
      }
      uVar3 = uVar2;
    } while ((int)uVar2 < (int)uVar4);
  }
  uVar3 = 0xffffffff;
LAB_00472d00:
  if (uVar3 < (uint)param_1[2]) {
    FUN_004f7828();
  }
  return;
}

