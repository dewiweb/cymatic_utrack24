// rea decompile_all
// name: FUN_00562220
// address: 0x562220
// body: available
// range: 0x562220-0x5627e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562220(undefined1 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *local_184;
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [8];
  undefined1 local_74 [12];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d41f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_0052bf70(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (cVar1 != '\0') {
    FUN_0050f2a0(0);
    FUN_00512300();
    local_8 = 0;
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x98))
              (local_74);
    cVar1 = FUN_005039a0();
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xbc)
              )(local_b8,1);
      local_8._0_1_ = 2;
      uVar14 = *(undefined4 *)(**(int **)(in_ECX + 0x88) + 0xd8);
      uVar13 = *(undefined4 *)(in_ECX + 0x78);
      uVar12 = *(undefined4 *)(in_ECX + 0x80);
      uVar11 = *(undefined4 *)(in_ECX + 0x70);
      uVar10 = *(undefined4 *)(in_ECX + 0x74);
      uVar9 = *(undefined4 *)(in_ECX + 0x7c);
      uVar8 = *(undefined4 *)(in_ECX + 0x6c);
      uVar7 = *(undefined4 *)(in_ECX + 0x84);
      if (*(int *)(in_ECX + 0x118) == 0) {
        local_184 = &DAT_0095c848;
      }
      else {
        local_184 = (undefined *)(*(int *)(in_ECX + 0x118) + 0x48);
      }
      local_d4 = uVar7;
      local_d0 = uVar8;
      local_cc = uVar9;
      local_c8 = uVar10;
      local_c4 = uVar11;
      local_c0 = uVar12;
      local_bc = uVar13;
      FUN_005033e0(local_184);
      puVar6 = local_e0;
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xa4)
              )(puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar2,param_1);
      puVar5 = local_ec;
      puVar4 = local_f8;
      uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x98)
              )(puVar4,puVar5,uVar2);
      FUN_00533bb0(uVar3,puVar4,puVar5,uVar2,puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                   uVar14);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00501900();
    }
    else {
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xbc)
              )(local_7c,1);
      local_8._0_1_ = 1;
      uVar14 = *(undefined4 *)(**(int **)(in_ECX + 0x88) + 0xd8);
      uVar13 = *(undefined4 *)(in_ECX + 0x78);
      uVar12 = *(undefined4 *)(in_ECX + 0x80);
      uVar11 = *(undefined4 *)(in_ECX + 0x70);
      uVar10 = *(undefined4 *)(in_ECX + 0x74);
      uVar9 = *(undefined4 *)(in_ECX + 0x7c);
      uVar8 = *(undefined4 *)(in_ECX + 0x6c);
      uVar7 = *(undefined4 *)(in_ECX + 0x84);
      puVar6 = local_a4;
      local_98 = uVar7;
      local_94 = uVar8;
      local_90 = uVar9;
      local_8c = uVar10;
      local_88 = uVar11;
      local_84 = uVar12;
      local_80 = uVar13;
      uVar2 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xa4)
              )(puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar2,param_1);
      puVar5 = local_b0;
      uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x98)
              )(puVar5,uVar2);
      FUN_005335d0(uVar3,puVar5,uVar2,puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00501900();
    }
    FUN_00529f40(local_68,0);
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

