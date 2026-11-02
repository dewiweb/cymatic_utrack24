// rea decompile_all
// name: FUN_005620b0
// address: 0x5620b0
// body: available
// range: 0x5620b0-0x56221d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005620b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined1 local_74 [12];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d41bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_0052bf70(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x114) == 0)) {
    FUN_00562eb0(1,3);
    FUN_00512300();
    local_8 = 0;
    iVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xc4))
                      ();
    puVar4 = local_74;
    uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x98))
                      (puVar4,iVar2 == 0);
    FUN_005333f0(uVar3,puVar4);
    FUN_00529f40(local_68,0);
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

