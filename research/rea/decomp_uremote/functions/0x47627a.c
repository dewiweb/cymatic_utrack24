// rea decompile_all
// name: FUN_0047627a
// address: 0x47627a
// body: available
// range: 0x47627a-0x476313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047627a(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  uVar3 = (uint)*(byte *)(unaff_ESI + 3);
  if (uVar3 == 0) {
    FUN_004d076d();
  }
  else {
    iVar1 = 0xff - (param_2 >> 0x18);
    iVar2 = 0xff - ((int)((0xff - uVar3) * iVar1) >> 8);
    if (iVar2 < 1) {
      FUN_004d076d();
    }
    else {
      iVar1 = (int)(iVar1 * uVar3) / iVar2;
      FUN_0047608d((char)(((uint)*(byte *)(unaff_ESI + 2) - (uint)param_2._2_1_) * iVar1 >> 8) +
                   param_2._2_1_,
                   (char)(((uint)*(byte *)(unaff_ESI + 1) - (param_2 >> 8 & 0xff)) * iVar1 >> 8) +
                   (char)(param_2 >> 8),iVar2);
    }
  }
  return;
}

