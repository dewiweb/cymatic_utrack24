// rea decompile_all
// name: FUN_000ba950
// address: 0xba950
// body: available
// range: 0xba950-0xbac7b inclusive
// range: 0xbace4-0xbad8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ba950(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 ****ppppuVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  undefined4 ***local_60;
  undefined4 ***local_5c;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  char *local_40;
  undefined1 local_3c;
  char *local_34;
  char *local_30;
  char *local_2c [2];
  
  uVar9 = 1;
  iVar3 = FUN_00047cf4(*(undefined4 *)(param_1 + 0x114),s_OutputGroups_000bac7c,local_50);
  if (iVar3 != 0) {
    FUN_000bad90(param_1);
    iVar3 = FUN_00042a00(local_50[0],s_User_SIPIdentity_000bac8c,param_1 + 0x1bc);
    if (iVar3 == 0) {
      FUN_000028a4(DAT_000baca0,s_User_SIPIdentity_000bac8c);
    }
    FUN_00041e54(local_50[0]);
    local_58[0] = DAT_000baca4;
    iVar3 = FUN_00046580(local_50[0],local_58);
    while (iVar3 != 0) {
      iVar3 = FUN_00041c14(local_58[0],local_48);
      if (iVar3 != 0) {
        iVar3 = FUN_001a0808(0x4c,1);
        uVar1 = _DAT_000baca8;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
          uVar2 = FUN_001a07ac(iVar3,uVar1);
          *(undefined4 *)(iVar3 + 0x24) = 0;
          *(undefined4 *)(iVar3 + 0x28) = 0;
          *(undefined4 *)(iVar3 + 0x38) = 0;
          *(undefined4 *)(iVar3 + 0x3c) = 0;
          *(undefined1 *)(iVar3 + 0x40) = 0;
          *(undefined1 *)(iVar3 + 0x41) = uVar2;
          *(undefined4 *)(iVar3 + 0x34) = 0;
          *(undefined4 *)(iVar3 + 0x30) = 0;
          *(undefined4 *)(iVar3 + 0x2c) = 0;
          iVar4 = FUN_001ce910(iVar3 + 0x28);
          *(int *)(iVar3 + 0x38) = iVar4;
          *(undefined4 *)(iVar4 + 4) = 0;
          *(int *)(*(int *)(iVar3 + 0x38) + 8) = *(int *)(iVar3 + 0x38);
          *(int *)(*(int *)(iVar3 + 0x38) + 0xc) = *(int *)(iVar3 + 0x38);
        }
        iVar4 = FUN_0006170c(iVar3,param_1,local_48[0]);
        if (iVar4 == 0) {
joined_r0x000bad7c:
          if (iVar3 != 0) {
            FUN_00061d2c(iVar3);
            FUN_0019f30c();
          }
          uVar9 = 0;
        }
        else {
          ppppuVar10 = &local_60;
          local_60 = *(undefined4 *****)(param_1 + 0x1d0);
          ppppuVar5 = (undefined4 ****)(*(undefined4 *****)(param_1 + 0x1d0))[1];
          while (ppppuVar5 != (undefined4 ****)0x0) {
            if (ppppuVar5[4] < *(undefined4 ****)(iVar3 + 0x44)) {
              ppppuVar5 = (undefined4 ****)ppppuVar5[3];
            }
            else {
              local_60 = ppppuVar5;
              ppppuVar5 = (undefined4 ****)ppppuVar5[2];
            }
          }
          local_5c = *(undefined4 *****)(param_1 + 0x1d0);
          ppppuVar5 = (undefined4 ****)(*(undefined4 *****)(param_1 + 0x1d0))[1];
          while (ppppuVar5 != (undefined4 ****)0x0) {
            if (*(undefined4 ****)(iVar3 + 0x44) < ppppuVar5[4]) {
              local_5c = ppppuVar5;
              ppppuVar5 = (undefined4 ****)ppppuVar5[2];
            }
            else {
              ppppuVar5 = (undefined4 ****)ppppuVar5[3];
            }
          }
          iVar4 = 0;
          ppppuVar5 = (undefined4 ****)local_60;
          while (ppppuVar5 != (undefined4 ****)local_5c) {
            iVar4 = iVar4 + 1;
            ppppuVar6 = (undefined4 ****)ppppuVar5[3];
            if ((undefined4 ****)ppppuVar5[3] == (undefined4 ****)0x0) {
              for (ppppuVar6 = (undefined4 ****)ppppuVar5[1];
                  ppppuVar5 == (undefined4 ****)ppppuVar6[3];
                  ppppuVar6 = (undefined4 ****)ppppuVar6[1]) {
                ppppuVar5 = ppppuVar6;
              }
              ppppuVar10 = (undefined4 ****)ppppuVar5[3];
              if (ppppuVar10 != ppppuVar6) {
                ppppuVar5 = ppppuVar6;
              }
            }
            else {
              do {
                ppppuVar5 = ppppuVar6;
                ppppuVar6 = (undefined4 ****)ppppuVar5[2];
              } while ((undefined4 ****)ppppuVar5[2] != (undefined4 ****)0x0);
            }
          }
          if (iVar4 != 0) {
            FUN_000028a4(s__ERROR__RavennaConfiguration__Re_000bacab + 1);
            goto joined_r0x000bad7c;
          }
          pcVar8 = *(char **)(param_1 + 0x1d0);
          bVar13 = *(char **)(pcVar8 + 4) != (char *)0x0;
          if (bVar13) {
            ppppuVar10 = *(undefined4 *****)(iVar3 + 0x44);
          }
          bVar14 = true;
          pcVar11 = pcVar8;
          pcVar12 = *(char **)(pcVar8 + 4);
          while (bVar13) {
            bVar14 = ppppuVar10 < *(undefined4 *****)(pcVar12 + 0x10);
            if (bVar14) {
              pcVar7 = *(char **)(pcVar12 + 8);
            }
            else {
              pcVar7 = *(char **)(pcVar12 + 0xc);
            }
            bVar13 = pcVar7 != (char *)0x0;
            pcVar11 = pcVar12;
            pcVar12 = pcVar7;
          }
          if (*(char *)(param_1 + 0x1d8) == '\0') {
            if (bVar14) {
              if (pcVar11 == *(char **)(pcVar8 + 8)) {
                FUN_001ce548(&local_30);
                local_40 = local_30;
                local_3c = 1;
                goto LAB_000bad30;
              }
              if ((*pcVar11 == '\0') && (*(char **)(*(int *)(pcVar11 + 4) + 4) == pcVar11)) {
                pcVar11 = *(char **)(pcVar11 + 0xc);
              }
              else {
                pcVar8 = *(char **)(pcVar11 + 8);
                if (*(char **)(pcVar11 + 8) == (char *)0x0) {
                  pcVar8 = *(char **)(pcVar11 + 4);
                  pcVar12 = pcVar11;
                  while (pcVar11 = pcVar8, pcVar12 == *(char **)(pcVar11 + 8)) {
                    pcVar12 = pcVar11;
                    pcVar8 = *(char **)(pcVar11 + 4);
                  }
                }
                else {
                  do {
                    pcVar11 = pcVar8;
                    pcVar8 = *(char **)(pcVar11 + 0xc);
                  } while (*(char **)(pcVar11 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(undefined4 *****)(pcVar11 + 0x10) < *(undefined4 *****)(iVar3 + 0x44)) {
              FUN_001ce548(local_2c);
              local_40 = local_2c[0];
              local_3c = 1;
            }
            else {
              local_3c = 0;
              local_40 = pcVar11;
            }
          }
          else {
            FUN_001ce548(&local_34);
            local_40 = local_34;
            local_3c = 1;
          }
LAB_000bad30:
          *(int *)(local_40 + 0x14) = iVar3;
        }
        FUN_00041dd4(local_48[0]);
      }
      iVar3 = FUN_00046580(local_50[0],local_58);
    }
    FUN_00041dd4(local_50[0]);
    FUN_001da314(local_58);
  }
  return uVar9;
}

