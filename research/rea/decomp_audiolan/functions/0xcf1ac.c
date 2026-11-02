// rea decompile_all
// name: FUN_000cf1ac
// address: 0xcf1ac
// body: available
// range: 0xcf1ac-0xcf633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000cf1ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 **ppuVar12;
  uint uVar13;
  short *psVar14;
  ushort *puVar15;
  int *piVar16;
  undefined1 *local_c8 [2];
  undefined4 *local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int local_ac;
  undefined4 local_a8 [4];
  undefined1 local_96;
  short local_86 [13];
  short *local_6c;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  undefined1 local_48 [16];
  uint local_38 [2];
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_c0 = (undefined4 *)0x0;
  local_bc = (int *)0x0;
  local_b8 = (int *)0x0;
  local_b4 = (int *)0x0;
  local_b0 = (int *)0x0;
  local_ac = 0;
  iStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  puVar4 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar5 = FUN_0010f82c(0xc,0);
  puVar4[2] = uVar5;
  *puVar4 = local_c0;
  puVar4[1] = 1;
  local_b0 = (int *)puVar4[2];
  local_b8 = local_b0 + 3;
  *local_b0 = (int)local_b0;
  local_b0[1] = (int)local_b0;
  local_c0 = puVar4;
  local_b4 = local_b8;
  puVar4 = (undefined4 *)FUN_0009b63c();
  local_60 = (**(code **)*puVar4)();
  local_c8[0] = local_48;
  iVar6 = FUN_000ce99c(param_1,local_60,param_2,&local_64);
  uVar5 = _DAT_000cf638;
  iVar9 = DAT_000cf634;
  if (iVar6 != 0) {
    bVar3 = false;
    while( true ) {
      FUN_000c4d50(local_a8,param_1 + 0x14c,local_60,local_64);
      piVar7 = (int *)FUN_0009b63c();
      iVar6 = (**(code **)(*piVar7 + 8))(piVar7,local_a8,0xffffffff);
      if (iVar6 != 0) break;
      psVar14 = local_6c;
      if (*local_6c == 0) {
        psVar14 = local_86;
      }
      if (*psVar14 == 0) {
        local_a8[0] = uVar5;
        bVar3 = true;
        FUN_0019f30c(local_6c);
        goto LAB_000cf384;
      }
      psVar14 = local_6c;
      if (*local_6c == 0) {
        psVar14 = local_86;
      }
      uVar8 = FUN_00003544(psVar14);
      iVar6 = iVar9;
      if (uVar8 != 0) {
        local_c8[0] = (undefined1 *)0x80;
        ppuVar12 = local_c8;
        if (0x80 < uVar8) {
          ppuVar12 = (undefined1 **)local_38;
        }
        local_38[0] = uVar8;
        iVar6 = FUN_001d9a60(&local_5c,*ppuVar12,uVar8);
        iVar6 = iVar6 + 0xc;
      }
      local_5c = iVar6;
      FUN_00003628(iVar6,psVar14,uVar8 << 1);
      piVar7 = local_b0;
      uVar8 = *(uint *)(local_5c + -4);
      if ((((5 < uVar8) && (*(short *)(local_5c + (uVar8 - 4) * 2) == 0x2e)) &&
          ((*(short *)(local_5c + (uVar8 - 3) * 2) == 0x77 ||
           (*(short *)(local_5c + (uVar8 - 1) * 2) == 0x57)))) &&
         (((*(short *)(local_5c + (uVar8 - 2) * 2) == 0x61 ||
           (*(short *)(local_5c + (uVar8 - 1) * 2) == 0x41)) &&
          (sVar2 = *(short *)(local_5c + (uVar8 - 1) * 2), sVar2 == 0x76 || sVar2 == 0x56)))) {
        local_58 = &local_5c;
        if (local_bc == (int *)0x0) {
          if (local_b8 == local_b4) {
            uVar8 = 1;
            if (local_c0 != (undefined4 *)0x0) {
              uVar10 = local_c0[1];
              uVar13 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
              uVar8 = uVar10 + 1;
              if (uVar10 + 1 <= uVar13) {
                uVar8 = uVar13;
              }
            }
            puVar4 = (undefined4 *)FUN_0010f82c(0xc,0);
            uVar11 = FUN_0010f82c(uVar8 * 0xc,0);
            puVar4[2] = uVar11;
            *puVar4 = local_c0;
            puVar4[1] = uVar8;
            local_b8 = (int *)puVar4[2];
            local_b4 = local_b8 + uVar8 * 3;
            local_c0 = puVar4;
          }
          piVar16 = local_b8;
          local_b8 = local_b8 + 3;
        }
        else {
          piVar16 = local_bc;
          local_bc = (int *)*local_bc;
        }
        if (piVar16 + 2 != (int *)0x0) {
          FUN_001d9c54(piVar16 + 2,local_58);
        }
        *piVar16 = (int)piVar7;
        piVar16[1] = piVar7[1];
        *(int **)piVar7[1] = piVar16;
        piVar7[1] = (int)piVar16;
        local_ac = local_ac + 1;
      }
      FUN_001d9b00(&local_5c);
      local_a8[0] = uVar5;
      FUN_0019f30c(local_6c);
    }
    local_a8[0] = uVar5;
    local_48[0] = local_96;
    FUN_0019f30c(local_6c);
LAB_000cf384:
    FUN_000d7e18(local_a8,param_1 + 0x14c,local_60,local_64);
    piVar7 = (int *)FUN_0009b63c();
    iVar9 = (**(code **)(*piVar7 + 8))(piVar7,local_a8,0xffffffff);
    if (iVar9 != 0) {
      thunk_FUN_000028a4(s_A__<___ERROR:_ARCApplicationInte_000cf639._3_4_);
    }
    if (bVar3) {
      if (local_ac != 0) {
        puVar15 = *(ushort **)(*local_b0 + 8);
        uVar1 = *puVar15;
        piVar7 = (int *)FUN_00002428();
        iVar9 = *piVar7;
        if ((*(char *)(iVar9 + (uint)uVar1) == ' ') && (*(char *)(iVar9 + (uint)puVar15[1]) == ' '))
        {
          uVar5 = FUN_000d28d0(param_1,&local_c0,local_28);
          FUN_001dccb0(&local_c0);
          return uVar5;
        }
        if ((*(char *)(iVar9 + (uint)puVar15[*(int *)(puVar15 + -2) + -5]) == ' ') &&
           (*(char *)(iVar9 + (uint)puVar15[*(int *)(puVar15 + -2) + -6]) == ' ')) {
          uVar5 = FUN_000d37a8(param_1,&local_c0,local_28);
          FUN_001dccb0(&local_c0);
          return uVar5;
        }
        uVar5 = FUN_000d468c(param_1,&local_c0,local_28);
        FUN_001dccb0(&local_c0);
        return uVar5;
      }
      FUN_000028a4(s_A__<___ERROR:_ARCApplicationInte_000cf639 + 7);
    }
  }
  FUN_001dccb0(&local_c0);
  return 7;
}

