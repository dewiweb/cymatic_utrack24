// rea decompile_all
// name: FUN_00595640
// address: 0x595640
// body: available
// range: 0x595640-0x595714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00595640(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d65a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (*(char *)(in_ECX + 0x70) == '\0') {
    param_1 = param_1 + 1;
    iVar3 = in_ECX + 0x74;
    iVar4 = in_ECX + 100;
    uVar2 = FUN_00544700(iVar4,iVar3,param_1);
    FUN_00535d80(uVar2,iVar4,iVar3,param_1);
  }
  else {
    param_1 = param_1 + 1;
    iVar3 = in_ECX + 0x74;
    iVar4 = in_ECX + 100;
    uVar2 = FUN_00544700(iVar4,iVar3,param_1);
    FUN_00535c70(uVar2,iVar4,iVar3,param_1);
  }
  cVar1 = FUN_00544740(local_68,0);
  if (cVar1 == '\0') {
    FUN_00544280(1);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

