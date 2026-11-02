// rea decompile_all
// name: FUN_004e9d4f
// address: 0x4e9d4f
// body: available
// range: 0x4e9d4f-0x4e9e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9d4f(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dead4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_1 != param_2) {
    local_64 = 0;
    fVar3 = (float10)FUN_0049fa3d(DAT_00955fd4 ^ (uint)&stack0xffffff90);
    local_60 = (float)fVar3;
    fVar3 = (float10)FUN_004e9f43();
    local_5c = (float)fVar3;
    if (0.0 < local_5c) {
      FUN_004e8518(local_58,in_ECX + 0xfc,local_5c,*(undefined4 *)(in_ECX + 0x110));
      local_c = 0;
      FUN_004e8f77(param_1,&local_64,&local_60);
      iVar1 = FUN_005b3fb0();
      iVar2 = FUN_004ec153();
      if (param_2 < iVar2) {
        FUN_004e8f77(param_2,&local_64,&local_60);
        iVar2 = FUN_005b3fb0();
      }
      else {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x80) + 0x1c);
      }
      FUN_004c1636(*(int *)(in_ECX + 0x80),iVar1,*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x18),
                   iVar2 - iVar1);
      FUN_004652d6();
    }
  }
  ExceptionList = local_14;
  return;
}

