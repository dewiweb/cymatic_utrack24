// rea decompile_all
// name: FUN_00598300
// address: 0x598300
// body: available
// range: 0x598300-0x5983d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00598300(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d677b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  iVar3 = in_ECX + 0x98;
  iVar7 = in_ECX + 0x88;
  uVar4 = (uint)*(ushort *)(in_ECX + 0x82);
  uVar10 = (uint)*(ushort *)(in_ECX + 0x80);
  uVar8 = (uint)*(ushort *)(in_ECX + 0x7e);
  uVar5 = (uint)*(ushort *)(in_ECX + 0x7c);
  uVar11 = *(undefined4 *)(in_ECX + 0x78);
  iVar6 = in_ECX + 0x60;
  iVar9 = in_ECX + 0x6c;
  uVar2 = FUN_00544700(iVar9,iVar6,uVar11,uVar5,uVar8,uVar10,uVar4,iVar7,iVar3);
  FUN_00535770(uVar2,iVar9,iVar6,uVar11,uVar5,uVar8,uVar10,uVar4,iVar7,iVar3);
  cVar1 = FUN_00544740(local_68,0);
  if (cVar1 == '\0') {
    FUN_00544280(1);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

