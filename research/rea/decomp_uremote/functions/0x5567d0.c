// rea decompile_all
// name: FUN_005567d0
// address: 0x5567d0
// body: available
// range: 0x5567d0-0x5568a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005567d0(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d38b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x94) + 0xd8);
  uVar5 = (uint)*(ushort *)(in_ECX + 0x8c);
  uVar9 = *(undefined4 *)(in_ECX + 0x88);
  uVar8 = *(undefined4 *)(in_ECX + 0x84);
  uVar6 = (uint)*(byte *)(in_ECX + 0x80);
  iVar7 = in_ECX + 0x68;
  iVar4 = in_ECX + 0x74;
  uVar3 = FUN_00544700(iVar4,iVar7,uVar6,uVar8,uVar9,uVar5);
  FUN_00536870(uVar1,uVar3,iVar4,iVar7,uVar6,uVar8,uVar9,uVar5);
  cVar2 = FUN_00544740(local_68,0);
  if (cVar2 == '\0') {
    FUN_00544280(1);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

