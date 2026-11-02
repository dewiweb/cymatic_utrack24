// rea decompile_all
// name: FUN_00153ff4
// address: 0x153ff4
// body: available
// range: 0x153ff4-0x1541af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00153ff4(int *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  bool bVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int local_8c;
  byte *local_88;
  uint local_84;
  uint local_80;
  int *local_78;
  undefined4 local_74 [22];
  int *local_1c;
  char *pcStack_18;
  
  if (param_2 == (char *)0x0) {
    return 6;
  }
  uVar9 = 0;
  if (*param_2 != '\0') {
    local_1c = param_1;
    pcStack_18 = param_2;
    iVar2 = FUN_000034d0(param_2);
    local_88 = (byte *)FUN_001a0808(iVar2 + 2,1);
    if (local_88 != (byte *)0x0) {
      FUN_00003418(local_88,param_2);
      pbVar8 = local_88;
      bVar1 = local_88[iVar2 + -1];
      local_84 = (uint)bVar1;
      local_78 = (int *)FUN_00002428();
      if (-1 < (int)((uint)*(byte *)(*local_78 + (uint)bVar1) << 0x19)) {
        local_84 = 0xd;
      }
      pbVar8[iVar2] = 0;
      pbVar8[iVar2 + 1] = 0;
      uVar9 = 0;
      pbVar8 = local_88;
      while (piVar4 = local_1c, *pbVar8 != 0) {
        uVar6 = 0;
        bVar7 = false;
LAB_0015406e:
        while (uVar5 = (uint)*pbVar8, (*(byte *)(*local_78 + uVar5) & 1) != 0) {
          *pbVar8 = 0;
          pbVar8 = pbVar8 + 1;
        }
        if ((uVar6 == 0) && (uVar5 == 0x23)) break;
        if (uVar5 == 0) goto LAB_001540e8;
        if ((uVar5 == 0x22) || (uVar5 == 0x27)) {
          pbVar8 = pbVar8 + 1;
          local_74[uVar6] = pbVar8;
          while ((uVar3 = (uint)*pbVar8, uVar3 != 0 && (uVar3 != uVar5))) {
            if ((uVar3 != 0x5c) || (pbVar8 = pbVar8 + 1, *pbVar8 == uVar5)) {
              pbVar8 = pbVar8 + 1;
            }
          }
LAB_001540da:
          uVar6 = uVar6 + 1;
          *pbVar8 = 0;
          pbVar8 = pbVar8 + 1;
          if (bVar7) goto LAB_001540e8;
          if (0x13 < uVar6) {
            FUN_0019f30c(local_88);
            return 6;
          }
          goto LAB_0015406e;
        }
        if (uVar5 != 0x3b) {
          local_74[uVar6] = pbVar8;
          for (; uVar5 = (uint)*pbVar8, uVar5 != 0; pbVar8 = pbVar8 + 1) {
            if ((*(byte *)(*local_78 + uVar5) & 1) != 0) {
              if (uVar5 == 0x3b) {
LAB_0015417c:
                bVar7 = true;
              }
              break;
            }
            if (uVar5 == 0x3b) goto LAB_0015417c;
            if ((uVar5 == 0x27) || (uVar5 == 0x22)) break;
          }
          goto LAB_001540da;
        }
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
LAB_001540e8:
        if (uVar6 == 0) break;
        local_74[uVar6] = 0;
        local_8c = 0;
        local_80 = local_84;
        uVar5 = FUN_00154624(local_1c,local_74,uVar6,&local_8c);
        FUN_0016db0c(piVar4[1] - *piVar4);
        if (uVar5 < extraout_r1) {
          if (local_8c == 0 && uVar5 == 0) {
            FUN_000028c0(DAT_001541bc,DAT_001541b8);
            uVar9 = 3;
LAB_00154192:
            uVar9 = FUN_001541c0(piVar4,local_74,uVar6,uVar9);
          }
          else {
            iVar2 = FUN_00003960(local_74[0],DAT_001541b0);
            if (iVar2 == 0) {
              uVar9 = 1;
              goto LAB_00154192;
            }
            iVar2 = FUN_00003960(local_74[0],DAT_001541b4);
            if (iVar2 == 0) {
              uVar9 = 2;
              goto LAB_00154192;
            }
            iVar2 = *piVar4;
            FUN_0016db0c(piVar4[1] - iVar2);
            if (extraout_r1_00 <= uVar5) goto LAB_0015419e;
            piVar4 = *(int **)(iVar2 + uVar5 * 0x14);
            uVar9 = (**(code **)(*piVar4 + 8))(piVar4,local_74 + local_8c,uVar6 - local_8c,local_80)
            ;
          }
        }
        else {
LAB_0015419e:
          uVar9 = 3;
        }
      }
      FUN_0019f30c(local_88);
      return uVar9;
    }
    uVar9 = 4;
  }
  return uVar9;
}

