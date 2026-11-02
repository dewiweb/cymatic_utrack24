// rea decompile_all
// name: FUN_005477e0
// address: 0x5477e0
// body: available
// range: 0x5477e0-0x5478af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005477e0(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_70 [92];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d27f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  uVar4 = (uint)*(ushort *)(in_ECX + 0x84);
  iVar3 = in_ECX + 0x68;
  uVar2 = FUN_00544700(iVar3,uVar4);
  local_14 = FUN_005370d0(uVar2,iVar3,uVar4);
  FUN_005063a0(in_ECX + 0x74);
  *(undefined2 *)(local_14 + 0x3c) = *(undefined2 *)(in_ECX + 0x86);
  cVar1 = FUN_00544740(local_70,0);
  if (cVar1 == '\0') {
    FUN_00544280(1);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

