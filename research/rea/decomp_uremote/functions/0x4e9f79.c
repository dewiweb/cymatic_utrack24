// rea decompile_all
// name: FUN_004e9f79
// address: 0x4e9f79
// body: available
// range: 0x4e9f79-0x4ea08e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9f79(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  float10 fVar3;
  float local_60;
  float local_5c;
  undefined1 local_58 [4];
  float local_54;
  float local_50;
  undefined4 local_44;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005deab1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  fVar3 = (float10)FUN_004e9f43(DAT_00955fd4 ^ (uint)&local_60);
  local_5c = (float)fVar3;
  if (0.0 < local_5c) {
    local_60 = 0.0;
    FUN_004e8518(local_58,unaff_ESI + 0xfc,local_5c,*(undefined4 *)(unaff_ESI + 0x110));
    local_c = 0;
    while (cVar1 = FUN_004e85f8(), cVar1 != '\0') {
      fVar3 = (float10)FUN_0043bcfe(local_60,local_44);
      local_60 = (float)fVar3;
    }
    fVar3 = (float10)FUN_0049fa3d();
    local_5c = local_50 + local_54;
    fVar3 = (float10)FUN_0043bcfe(local_5c,(float)fVar3);
    iVar2 = FUN_004a8e4a((float)fVar3);
    iVar2 = iVar2 + 1 + *(int *)(unaff_ESI + 0xe8);
    FUN_004a8e4a(local_60,iVar2);
    FUN_004c0be5(iVar2);
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return;
}

