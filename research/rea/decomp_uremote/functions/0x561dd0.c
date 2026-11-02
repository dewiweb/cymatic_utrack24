// rea decompile_all
// name: FUN_00561dd0
// address: 0x561dd0
// body: available
// range: 0x561dd0-0x5620af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561dd0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4195;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x58) == 2) {
    cVar1 = FUN_0052bf70(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      FUN_00512300();
      local_8 = 0;
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xbc)
              )(local_70,1);
      local_8._0_1_ = 1;
      uVar12 = *(undefined4 *)(in_ECX + 0x78);
      uVar11 = *(undefined4 *)(in_ECX + 0x80);
      uVar10 = *(undefined4 *)(in_ECX + 0x70);
      uVar9 = *(undefined4 *)(in_ECX + 0x74);
      uVar8 = *(undefined4 *)(in_ECX + 0x7c);
      uVar7 = *(undefined4 *)(in_ECX + 0x6c);
      uVar6 = *(undefined4 *)(in_ECX + 0x84);
      puVar5 = local_98;
      local_8c = uVar6;
      local_88 = uVar7;
      local_84 = uVar8;
      local_80 = uVar9;
      local_7c = uVar10;
      local_78 = uVar11;
      local_74 = uVar12;
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xa4)
              )(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                *(undefined4 *)(**(int **)(in_ECX + 0x88) + 0xd8),uVar2);
      puVar4 = local_a4;
      uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x98)
              )(puVar4,uVar2);
      FUN_005336e0(uVar3,puVar4,uVar2,puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00501900();
      FUN_00529f40(local_68,0);
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
  }
  ExceptionList = local_10;
  return;
}

