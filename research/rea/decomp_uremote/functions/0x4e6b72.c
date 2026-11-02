// rea decompile_all
// name: FUN_004e6b72
// address: 0x4e6b72
// body: available
// range: 0x4e6b72-0x4e6c11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6b72(char param_1)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int unaff_EBX;
  undefined4 local_8;
  
  *(undefined1 *)(unaff_EBX + 0x32c) = 0;
  if (*(int *)(unaff_EBX + 0x78) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)(unaff_EBX + 0x78) + 8);
  }
  iVar2 = *(int *)(local_8 + 0x14);
  iVar3 = *(int *)(unaff_EBX + 0x310);
  FUN_004d2276();
  FUN_00439b5a(*(undefined4 *)(iVar3 + 0x90));
  iVar1 = FUN_004d227d();
  iVar3 = extraout_ECX;
  if (extraout_ECX + iVar2 < iVar1) {
    iVar1 = FUN_004d227d();
    iVar3 = extraout_ECX_00;
    if (iVar1 < extraout_ECX_00) {
      iVar2 = FUN_004d227d();
      iVar2 = iVar2 - extraout_ECX_01;
      iVar3 = extraout_ECX_01;
    }
  }
  FUN_004c09cc(*(undefined4 *)(local_8 + 0x10),iVar2,iVar3);
  if ((param_1 != '\0') && (*(char *)(unaff_EBX + 0x32c) == '\0')) {
    FUN_004e6c12();
  }
  return;
}

