// rea decompile_all
// name: FUN_005a8620
// address: 0x5a8620
// body: available
// range: 0x5a8620-0x5a879b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8620(void)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_88 [12];
  int local_7c;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7b5b;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(uint *)(in_ECX + 0x70) & 0x8000) != 0) {
    sVar2 = FUN_00558f30(1);
    if (sVar2 != 0) {
      FUN_00512300(uVar3);
      local_8 = 0;
      local_7c = FUN_005686d0();
      puVar5 = local_88;
      uVar4 = (**(code **)(*(int *)(local_7c + 0x28 + *(int *)(*(int *)(local_7c + 0x28) + 0xc)) +
                          0x98))(puVar5,*(undefined2 *)(in_ECX + 0xfa),in_ECX + 0x48,
                                 *(undefined4 *)(in_ECX + 0x2c),*(undefined2 *)(in_ECX + 0x120),
                                 *(undefined1 *)(in_ECX + 0x128));
      uVar4 = FUN_00503c30(uVar4,puVar5);
      cVar1 = FUN_0056b370(local_68,uVar4);
      if (cVar1 != '\0') {
        FUN_00529f40(local_68,0);
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
  }
  ExceptionList = local_10;
  return;
}

