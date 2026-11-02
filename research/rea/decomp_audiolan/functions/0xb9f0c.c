// rea decompile_all
// name: FUN_000b9f0c
// address: 0xb9f0c
// body: available
// range: 0xb9f0c-0xba20b inclusive
// range: 0xba25c-0xba2c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b9f0c(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint extraout_r2;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_174 [4];
  uint local_170;
  undefined1 auStack_16c [84];
  uint local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined1 auStack_10c [72];
  char *local_c4;
  char *local_c0;
  int local_bc;
  uint local_b8;
  undefined1 auStack_b4 [84];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined1 auStack_50 [16];
  char *local_40;
  undefined1 local_3c;
  undefined1 auStack_30 [4];
  char *local_2c [2];
  
  uVar3 = _DAT_000ba20c;
  local_60 = 1;
  iVar12 = 0;
  do {
    FUN_001da358(&local_bc,s_I_AudioModes_000ba20e + 2,auStack_30);
    FUN_000028d8(auStack_50,s__Mode_u_000ba21c,iVar12);
    uVar13 = *(undefined4 *)(local_bc + -4);
    uVar4 = FUN_000034d0(auStack_50);
    FUN_001da110(&local_bc,uVar13,0,auStack_50,uVar4,0,uVar4);
    iVar5 = FUN_00047cf4(*(undefined4 *)(param_1 + 0x114),local_bc,local_58);
    if (iVar5 == 0) {
      FUN_001da314(&local_bc);
      return local_60;
    }
    local_118 = 1;
    uStack_114 = uVar3;
    local_110 = uVar3;
    iVar5 = FUN_001dcf54(auStack_10c,auStack_174);
    iVar5 = FUN_001dcf54(iVar5 + 0x18,&local_170);
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x1c) = 0;
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined4 *)(iVar5 + 0x28) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    piVar6 = (int *)FUN_0010f82c(0xc,0);
    iVar7 = FUN_0010f82c(0xc,0);
    piVar6[2] = iVar7;
    *piVar6 = *(int *)(iVar5 + 0x18);
    piVar6[1] = 1;
    *(int *)(iVar5 + 0x18) = (int)piVar6;
    iVar7 = piVar6[2];
    *(int *)(iVar5 + 0x20) = iVar7;
    *(int *)(iVar5 + 0x24) = iVar7 + 0xc;
    *(int *)(iVar5 + 0x28) = iVar7;
    *(int *)(iVar5 + 0x20) = iVar7 + 0xc;
    *(int *)iVar7 = iVar7;
    *(int *)(*(int *)(iVar5 + 0x28) + 4) = *(int *)(iVar5 + 0x28);
    iVar5 = FUN_0014ee64(&local_118,local_58[0]);
    if (iVar5 == 0) {
      local_60 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x208);
      iVar5 = iVar9;
      iVar7 = *(int *)(iVar9 + 4);
      while (iVar7 != 0) {
        if (*(uint *)(iVar7 + 0x10) < local_118) {
          iVar7 = *(int *)(iVar7 + 0xc);
        }
        else {
          iVar5 = iVar7;
          iVar7 = *(int *)(iVar7 + 8);
        }
      }
      if ((iVar5 == iVar9) || (local_118 < *(uint *)(iVar5 + 0x10))) {
        iVar5 = iVar9;
      }
      if (iVar5 == iVar9) {
        iVar7 = param_1 + 0x1f8;
        local_b8 = local_118;
        FUN_0014f198(auStack_b4,&local_118);
        local_170 = local_b8;
        iVar5 = FUN_0014f198(auStack_16c,auStack_b4);
        pcVar11 = *(char **)(param_1 + 0x208);
        puVar14 = (uint *)(iVar5 + -4);
        bVar15 = *(char **)(pcVar11 + 4) != (char *)0x0;
        uVar10 = extraout_r2;
        if (bVar15) {
          uVar10 = *puVar14;
        }
        bVar16 = true;
        pcVar1 = pcVar11;
        pcVar2 = *(char **)(pcVar11 + 4);
        while (bVar15) {
          bVar16 = uVar10 < *(uint *)(pcVar2 + 0x10);
          if (bVar16) {
            pcVar8 = *(char **)(pcVar2 + 8);
          }
          else {
            pcVar8 = *(char **)(pcVar2 + 0xc);
          }
          bVar15 = pcVar8 != (char *)0x0;
          pcVar1 = pcVar2;
          pcVar2 = pcVar8;
        }
        if (*(char *)(param_1 + 0x210) == '\0') {
          pcVar8 = pcVar1;
          if (bVar16) {
            if (pcVar1 == *(char **)(pcVar11 + 8)) {
              FUN_001cce90(&local_c0,iVar7,pcVar2,pcVar1,puVar14);
              local_40 = local_c0;
              local_3c = 1;
              goto LAB_000ba298;
            }
            if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
              pcVar8 = *(char **)(pcVar1 + 0xc);
            }
            else {
              pcVar11 = *(char **)(pcVar1 + 8);
              if (*(char **)(pcVar1 + 8) == (char *)0x0) {
                pcVar11 = pcVar1;
                for (pcVar8 = *(char **)(pcVar1 + 4); pcVar11 == *(char **)(pcVar8 + 8);
                    pcVar8 = *(char **)(pcVar8 + 4)) {
                  pcVar11 = pcVar8;
                }
              }
              else {
                do {
                  pcVar8 = pcVar11;
                  pcVar11 = *(char **)(pcVar8 + 0xc);
                } while (*(char **)(pcVar8 + 0xc) != (char *)0x0);
              }
            }
          }
          if (*(uint *)(pcVar8 + 0x10) < *puVar14) {
            FUN_001cce90(local_2c,iVar7,pcVar2,pcVar1,puVar14);
            local_40 = local_2c[0];
            local_3c = 1;
          }
          else {
            local_3c = 0;
            local_40 = pcVar8;
          }
        }
        else {
          FUN_001cce90(&local_c4,iVar7,pcVar2,pcVar1,puVar14);
          local_40 = local_c4;
          local_3c = 1;
        }
LAB_000ba298:
        FUN_0014f34c(auStack_16c);
        FUN_0014f34c(auStack_b4);
      }
      else {
        FUN_000028a4(s_ERROR__RavennaConfiguration__Rep_000ba224);
        local_60 = 0;
      }
    }
    FUN_00041dd4(local_58[0]);
    FUN_0014f34c(&local_118);
    FUN_001da314(&local_bc);
    iVar12 = iVar12 + 1;
  } while( true );
}

