// rea decompile_all
// name: FUN_00595340
// address: 0x595340
// body: available
// range: 0x595340-0x59547e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00595340(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d653b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  param_1 = param_1 + 1;
  uVar10 = (uint)*(ushort *)(in_ECX + 0xa2);
  uVar6 = (uint)*(ushort *)(in_ECX + 0xa0);
  uVar23 = 0xffffffff;
  uVar22 = 0xffffffff;
  uVar3 = (uint)*(ushort *)(in_ECX + 0x9e);
  uVar11 = (uint)*(ushort *)(in_ECX + 0x9c);
  uVar21 = *(undefined4 *)(in_ECX + 0x98);
  uVar20 = *(undefined4 *)(in_ECX + 0x94);
  uVar19 = *(undefined4 *)(in_ECX + 0x90);
  uVar18 = *(undefined4 *)(in_ECX + 0x8c);
  uVar17 = *(undefined4 *)(in_ECX + 0x88);
  uVar16 = *(undefined4 *)(in_ECX + 0x84);
  uVar15 = *(undefined4 *)(in_ECX + 0x80);
  iVar12 = in_ECX + 0x74;
  uVar14 = 1;
  uVar7 = (uint)*(byte *)(in_ECX + 0x70);
  uVar4 = (uint)*(byte *)(in_ECX + 0x6f);
  uVar13 = (uint)*(byte *)(in_ECX + 0x6e);
  uVar8 = (uint)*(byte *)(in_ECX + 0x6d);
  uVar5 = (uint)*(byte *)(in_ECX + 0x6c);
  iVar9 = in_ECX + 0x60;
  uVar2 = FUN_00544700(iVar9,uVar5,uVar8,uVar13,uVar4,uVar7,1,iVar12,uVar15,uVar16,uVar17,uVar18,
                       uVar19,uVar20,uVar21,uVar11,uVar3,0xffffffff,0xffffffff,uVar6,uVar10,param_1)
  ;
  FUN_005359b0(uVar2,iVar9,uVar5,uVar8,uVar13,uVar4,uVar7,uVar14,iVar12,uVar15,uVar16,uVar17,uVar18,
               uVar19,uVar20,uVar21,uVar11,uVar3,uVar22,uVar23,uVar6,uVar10,param_1);
  cVar1 = FUN_00544740(local_68,0);
  if (cVar1 == '\0') {
    FUN_00544280(1);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

