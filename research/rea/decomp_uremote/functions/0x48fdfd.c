// rea decompile_all
// name: FUN_0048fdfd
// address: 0x48fdfd
// body: available
// range: 0x48fdfd-0x48feee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fdfd(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_de [110];
  undefined1 local_70 [80];
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_70;
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  FUN_0049113b();
  FUN_0049113b();
  iVar1 = FUN_0049113b();
  iVar2 = FUN_0048fdb7();
  if (iVar2 == 0) {
    FUN_00491166(local_20,3);
    FUN_0049113b();
    FUN_0049113b();
  }
  else {
    FUN_0048fd54();
    auStack_de[iVar1] = 0x3a;
    auStack_de[iVar1 + 1] = 0x20;
  }
  FUN_0049113b();
  FUN_004914c8((param_2 != 0) + '\x01');
  __security_check_cookie(local_8 ^ (uint)local_70);
  return;
}

