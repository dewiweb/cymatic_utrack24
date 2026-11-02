// rea decompile_all
// name: FUN_0007a318
// address: 0x7a318
// body: available
// range: 0x7a318-0x7a6af inclusive
// range: 0x7a7a0-0x7a857 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007a318(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int local_12c;
  undefined4 *local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int local_114;
  undefined4 local_110 [5];
  undefined1 auStack_fc [14];
  short local_ee [13];
  short *local_d4;
  undefined1 auStack_cc [84];
  undefined4 *local_78;
  undefined4 local_74 [5];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined1 auStack_58 [24];
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  FUN_00002898(s_TRACE__doClearFiles_0007a6b0);
  piVar1 = (int *)FUN_000cbaf0();
  if (piVar1 == (int *)0x0) {
    FUN_00002898(s_ERROR__Could_not_get_file_access_0007a6fc);
    return;
  }
  uVar2 = FUN_001ad814(auStack_cc);
  FUN_001ad784(uVar2,1,1,1,s_Queue_0007a6c8);
  uVar3 = (**(code **)*piVar1)(piVar1);
  uVar2 = FUN_00231ef4(auStack_3c,&DAT_0007a6d0,auStack_38);
  FUN_001156a4(local_74,auStack_cc,uVar3,uVar2);
  FUN_00232190(auStack_3c);
  iVar4 = (**(code **)(*piVar1 + 8))(piVar1,local_74,0xffffffff);
  uVar2 = _DAT_0007a6d4;
  if (iVar4 != 0) {
    FUN_00002898(s___ERROR__Failed_opening_director_0007a6d6 + 2);
    local_74[0] = uVar2;
    FUN_00232190(auStack_60);
    FUN_001ad838(auStack_cc);
    return;
  }
  local_128 = (undefined4 *)0x0;
  local_124 = (int *)0x0;
  local_120 = (int *)0x0;
  local_11c = (int *)0x0;
  local_118 = (int *)0x0;
  local_114 = 0;
  puVar5 = (undefined4 *)FUN_00173860(0xc,0);
  uVar6 = FUN_00173860(0xc,0);
  puVar5[2] = uVar6;
  *puVar5 = local_128;
  puVar5[1] = 1;
  uVar6 = _DAT_0007a728;
  local_118 = (int *)puVar5[2];
  local_120 = local_118 + 3;
  *local_118 = (int)local_118;
  local_118[1] = (int)local_118;
  local_128 = puVar5;
  local_11c = local_120;
  while( true ) {
    FUN_00115750(local_110,auStack_cc,uVar3,local_5c);
    iVar4 = (**(code **)(*piVar1 + 8))(piVar1,local_110,0xffffffff);
    if (iVar4 != 0) break;
    psVar9 = local_d4;
    if (*local_d4 == 0) {
      psVar9 = local_ee;
    }
    if (*psVar9 == 0) goto LAB_0007a52c;
    psVar9 = local_d4;
    if (*local_d4 == 0) {
      psVar9 = local_ee;
    }
    FUN_00231ef4(&local_12c,psVar9,auStack_30);
    FUN_00002898(s_TRACE__Directory_entry___ls__0007a750,local_12c);
    iVar4 = FUN_00003892(local_12c,u_test__0007a770);
    if ((iVar4 != 0) && (iVar4 - local_12c >> 1 == 0)) {
      psVar9 = local_d4;
      if (*local_d4 == 0) {
        psVar9 = local_ee;
      }
      local_40 = FUN_00231ef4(auStack_34,psVar9,auStack_2c);
      piVar10 = local_118;
      if (local_124 == (int *)0x0) {
        if (local_120 == local_11c) {
          uVar11 = 1;
          if (local_128 != (undefined4 *)0x0) {
            uVar7 = local_128[1];
            uVar11 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar11 < uVar7 + 1) {
              uVar11 = uVar7 + 1;
            }
          }
          local_78 = (undefined4 *)FUN_00173860(0xc,0);
          uVar8 = FUN_00173860(uVar11 * 0xc,0);
          local_78[2] = uVar8;
          *local_78 = local_128;
          local_78[1] = uVar11;
          local_128 = local_78;
          local_120 = (int *)local_78[2];
          local_11c = local_120 + uVar11 * 3;
        }
        piVar12 = local_120;
        local_120 = local_120 + 3;
      }
      else {
        piVar12 = local_124;
        local_124 = (int *)*local_124;
      }
      if (piVar12 + 2 != (int *)0x0) {
        thunk_FUN_00232084(piVar12 + 2,local_40);
      }
      *piVar12 = (int)piVar10;
      piVar12[1] = piVar10[1];
      *(int **)piVar10[1] = piVar12;
      piVar10[1] = (int)piVar12;
      local_114 = local_114 + 1;
      FUN_00232190(auStack_34);
    }
    FUN_00232190(&local_12c);
    local_110[0] = uVar6;
    FUN_001eecc8(local_d4);
  }
  FUN_00002898(s___ERROR__Failed_reading_director_0007a72a + 2);
LAB_0007a52c:
  local_110[0] = uVar6;
  FUN_001eecc8(local_d4);
  FUN_0012c504(auStack_58,auStack_cc,uVar3,local_5c);
  iVar4 = (**(code **)(*piVar1 + 8))(piVar1,auStack_58,0xffffffff);
  uVar6 = _DAT_0007a858;
  if (iVar4 == 0) {
    piVar10 = (int *)*local_118;
    if (piVar10 != local_118) {
      do {
        FUN_00002898(s___Removing_file___ls__0007a85a + 2,piVar10[2]);
        FUN_000f95fc(local_110,auStack_cc,uVar3,piVar10 + 2);
        iVar4 = (**(code **)(*piVar1 + 8))(piVar1,auStack_58,0xffffffff);
        if (iVar4 != 0) {
          FUN_00002898(s_ERROR__Failed_removing_file_0007a874);
          local_110[0] = uVar6;
          FUN_00232190(auStack_fc);
          break;
        }
        local_110[0] = uVar6;
        FUN_00232190(auStack_fc);
        piVar10 = (int *)*piVar10;
      } while (piVar10 != local_118);
    }
  }
  else {
    FUN_00002898(s_ERROR__Failed_closing_directory_0007a77c);
  }
  FUN_002381b0(&local_128);
  local_74[0] = uVar2;
  FUN_00232190(auStack_60);
  FUN_001ad838(auStack_cc);
  return;
}

