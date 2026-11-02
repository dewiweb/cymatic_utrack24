// rea decompile_all
// name: FUN_00090ae8
// address: 0x90ae8
// body: available
// range: 0x90ae8-0x90e5f inclusive
// range: 0x90eac-0x911bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x90f38 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00090db4) */
/* WARNING: Removing unreachable block (ram,0x00090ec8) */
/* WARNING: Removing unreachable block (ram,0x00090f3c) */
/* WARNING: Removing unreachable block (ram,0x00090ed0) */
/* WARNING: Removing unreachable block (ram,0x00090ee4) */
/* WARNING: Removing unreachable block (ram,0x00090e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090ae8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int extraout_r1;
  int extraout_r1_00;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined4 *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int local_d4;
  char *local_d0;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int *local_7c;
  char *local_78;
  undefined4 local_74;
  undefined4 local_6c;
  int *local_64;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined1 auStack_48 [8];
  int *local_40;
  
  FUN_001d6158(&local_b0,0,0x400);
  iVar13 = _DAT_00090e60;
  local_b4 = 0;
  local_a4 = *(undefined4 *)(_DAT_00090e60 + 0xc);
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  FUN_001d41f8(&local_b0,s___ArchwaveAES67_00090e62 + 2,&local_c0,local_a0);
  puVar1 = (undefined4 *)FUN_001d436c(&local_b0,s___ArchwaveAES67_00090e62 + 2);
  puVar1[3] = *(undefined4 *)(iVar13 + 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = FUN_001d436c(&local_b0,s___ArchwaveAES67_00090e62 + 2);
  local_c0 = 1;
  uStack_bc = 0;
  local_b4 = DAT_00090e74 + 0x2800;
  FUN_001d41f8(uVar2,s_version_00090e78,&local_c0,local_a0);
  FUN_001d41f8(uVar2,s_streams_00090e80,&local_c0,local_a0);
  puVar1 = (undefined4 *)FUN_001d436c(uVar2,s_streams_00090e80);
  puVar1[3] = *(undefined4 *)(iVar13 + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  local_64 = (int *)FUN_001d436c(uVar2,s_streams_00090e80);
  local_e8 = (undefined4 *)0x0;
  local_e4 = (int *)0x0;
  local_e0 = (int *)0x0;
  local_dc = (int *)0x0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  puVar1 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar2 = FUN_0010f82c(0x10,0);
  puVar1[2] = uVar2;
  *puVar1 = local_e8;
  puVar1[1] = 1;
  local_d8 = (int *)puVar1[2];
  local_e0 = local_d8 + 4;
  *local_d8 = (int)local_d8;
  local_d8[1] = (int)local_d8;
  local_e8 = puVar1;
  local_dc = local_e0;
  FUN_00155c08(*(undefined4 *)(param_1 + 300),&local_e8);
  uVar2 = FUN_0005508c();
  FUN_001536b0(uVar2,&local_e8);
  piVar12 = (int *)*local_d8;
  if (piVar12 != local_d8) {
    do {
      if ((short)piVar12[3] != 0) {
        iVar13 = *(int *)(_DAT_00090e60 + 0xc);
        local_d0 = (char *)local_a0;
        piVar3 = (int *)piVar12[2];
        if (piVar3[-3] + 1 == 0) {
          uVar9 = piVar3[-1];
          if (0xfffffff1 < uVar9) {
            FUN_0010f7cc(8,_DAT_00090e8c,_DAT_00090e8c,uVar9,0xfffffff1);
          }
          piVar3 = DAT_00090e88;
          if (uVar9 != 0) {
            piVar3 = (int *)FUN_0010f82c(uVar9 + 0xe,0);
            if (piVar3 != (int *)0x0) {
              *piVar3 = 0;
              piVar3[1] = 0;
              piVar3[2] = 0;
            }
            piVar3[2] = uVar9;
            *piVar3 = 0;
            piVar3[1] = uVar9;
            puVar8 = (undefined1 *)((int)piVar3 + uVar9 + 0xc);
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0;
            }
          }
          local_7c = piVar3 + 3;
          FUN_00003628(local_7c,piVar12[2],uVar9);
        }
        else {
          local_7c = piVar3;
          if (piVar3 + -3 != DAT_00090e88) {
            piVar3[-3] = piVar3[-3] + 1;
          }
        }
        FUN_001d42f8(&local_c0,local_7c,local_d0);
        FUN_001da44c(&local_7c);
        pcVar4 = s__name_00090e8f + 1;
        do {
          local_78 = pcVar4;
          pcVar4 = local_78 + 1;
        } while (*pcVar4 != '\0');
        local_78 = local_78 + -0x90e8f;
        local_d0 = s__name_00090e8f + 1;
        local_74 = DAT_00090e98;
        if (iVar13 != 3) {
LAB_00090f38:
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        puVar1 = (undefined4 *)FUN_001d631c(local_a0,0x200);
        piVar3 = local_64;
        *puVar1 = local_d0;
        puVar1[1] = local_78;
        puVar1[2] = param_1;
        puVar1[3] = local_74;
        puVar1[4] = local_c0;
        puVar1[5] = uStack_bc;
        puVar1[6] = uStack_b8;
        puVar1[7] = local_b4;
        uVar2 = DAT_00090e98;
        local_c0 = (uint)*(ushort *)(piVar12 + 3);
        iVar13 = DAT_00090e74 + 0x2800;
        pcVar4 = s_channelCount_00090e9c;
        do {
          pcVar5 = pcVar4;
          pcVar4 = pcVar5 + 1;
        } while (*pcVar4 != '\0');
        local_6c = DAT_00090e98;
        local_78 = s_channelCount_00090e9c;
        uStack_bc = 0;
        puVar1[8] = s_channelCount_00090e9c;
        puVar1[0xb] = uVar2;
        puVar1[9] = pcVar5 + -0x90e9b;
        puVar1[10] = param_1;
        puVar1[0xc] = local_c0;
        puVar1[0xd] = 0;
        puVar1[0xe] = uStack_b8;
        puVar1[0xf] = iVar13;
        local_b4 = 0;
        if (local_64[3] != 4) goto LAB_00090f38;
        uVar9 = local_64[2];
        if (uVar9 <= (uint)local_64[1]) {
          if (uVar9 == 0) {
            uVar6 = 0x10;
          }
          else {
            uVar6 = uVar9 << 1;
          }
          if (uVar9 < uVar6) {
            iVar13 = FUN_001d6390(local_a0,*local_64,uVar9 << 4,uVar6 << 4);
            *piVar3 = iVar13;
            piVar3[2] = uVar6;
          }
        }
        puVar7 = (undefined4 *)(*piVar3 + piVar3[1] * 0x10);
        piVar3[1] = piVar3[1] + 1;
        puVar7[3] = 3;
        *puVar7 = puVar1;
        puVar7[1] = 2;
        puVar7[2] = 0x10;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != local_d8);
  }
  FUN_001d62a8(auStack_60,0,0x100);
  FUN_001d6abc(auStack_48,auStack_60,0,0x20);
  FUN_001d86a0(&local_b0,auStack_48);
  iVar10 = (local_54 - local_58) + 0xd3;
  FUN_0007136c(param_1 + 0x1cc,0xffffffff);
  FUN_0019f30c(*(undefined4 *)(param_1 + 0x218));
  iVar13 = FUN_001a0808(iVar10,1);
  *(int *)(param_1 + 0x218) = iVar13;
  if (iVar13 == 0) {
    FUN_000028a4(DAT_000911c4,iVar10);
    uVar2 = FUN_001a0808(1);
    iVar13 = 0;
    *(undefined4 *)(param_1 + 0x218) = uVar2;
  }
  else {
    iVar13 = FUN_000028d8(iVar13,DAT_000911c0,local_54 - local_58);
    uVar2 = FUN_001d8d38(auStack_60);
    FUN_00003418(*(int *)(param_1 + 0x218) + iVar13,uVar2);
    iVar13 = (local_54 - local_58) + iVar13;
  }
  *(int *)(param_1 + 0x21c) = iVar13;
  FUN_0007143c(param_1 + 0x1cc);
  iVar13 = extraout_r1;
  if (local_40 != (int *)0x0) {
    while( true ) {
      iVar10 = *local_40;
      if (iVar10 != 0) {
        iVar13 = local_40[2];
      }
      if (iVar10 == 0 || iVar10 == iVar13) break;
      iVar13 = *(int *)(iVar10 + 8);
      FUN_0018a280();
      *local_40 = iVar13;
      iVar13 = extraout_r1_00;
    }
    FUN_0019f30c(local_40[4]);
    FUN_0019f30c(local_40);
  }
  FUN_0018a280(local_58);
  FUN_0019f30c(local_5c);
  piVar12 = local_d8;
  if (local_d8 != (int *)0x0) {
    piVar3 = (int *)*local_d8;
    while (piVar11 = piVar3, piVar11 != piVar12) {
      piVar3 = local_d8;
      if (piVar11 != local_d8) {
        piVar3 = (int *)*piVar11;
        *(int **)piVar11[1] = piVar3;
        *(int *)(*piVar11 + 4) = piVar11[1];
        local_d4 = local_d4 + -1;
        FUN_001da44c(piVar11 + 2);
        *piVar11 = (int)local_e4;
        local_e4 = piVar11;
      }
    }
    *local_d8 = (int)local_e4;
    local_e4 = local_d8;
    piVar12 = local_e8;
    while (piVar12 != (int *)0x0) {
      local_e8 = (undefined4 *)*piVar12;
      FUN_0010fa20(piVar12[2],piVar12[1],0);
      FUN_0010fa20(piVar12,1,0);
      piVar12 = local_e8;
    }
    local_e4 = (int *)0x0;
    local_e0 = (int *)0x0;
    local_dc = (int *)0x0;
    local_e8 = (undefined4 *)0x0;
  }
  FUN_0015242c(&local_b0);
  return;
}

