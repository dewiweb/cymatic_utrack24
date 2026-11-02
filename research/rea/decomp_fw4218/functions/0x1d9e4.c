// rea decompile_all
// name: FUN_0001d9e4
// address: 0x1d9e4
// body: available
// range: 0x1d9e4-0x1dc69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001d9e4(int param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_54 [5];
  int local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_1c;
  int local_18;
  
  local_54[0] = 0;
  local_30 = 1;
  local_54[1] = 0;
  local_2c = param_1 + 0xc0;
  local_54[2] = 0;
  local_28 = param_1 + 0x100;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xdc);
  psVar1 = DAT_0001dc70;
  piVar5 = DAT_0001dc6c;
  local_24 = param_1 + 0x1f80;
  local_18 = param_1;
  if (*(char *)(param_1 + 0x117) == '\0') {
    if (*_DAT_0001dc74 == 0) goto LAB_0001dbda;
    FUN_0002a1c6(2,s____BeginSleepProcessing__m_>Syst_0001dc75 + 3);
  }
  else {
    for (piVar7 = *(int **)(&DAT_00001fb8 + param_1); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7)
    {
      if (((*(short *)((int)piVar7 + 6) == 0x21) &&
          (((piVar7[7] != *piVar5 || (*(char *)((int)piVar7 + 0x46) != '\0')) ||
           (iVar6 = FUN_00029974(piVar7[8]), iVar6 != 0)))) &&
         (*(short *)(piVar7[9] + 8) != *psVar1)) {
        puVar2 = (undefined4 *)thunk_FUN_0002790c(*(undefined4 *)(&DAT_00001fcc + local_18));
        if (puVar2 != (undefined4 *)0x0) {
          local_54[3] = local_18 + 0x37;
          do {
            iVar6 = local_18;
            if (*(char *)(puVar2 + 0x51d) == '\0') {
              if (*_DAT_0001dc74 != 0) {
                FUN_0002a1c6(2,s_BeginSleepProcessing____6s_not_c_0001dd3c,
                             (int)puVar2 + DAT_0001dcb8);
              }
            }
            else {
              puVar8 = puVar2 + 2;
              local_54[0] = FUN_00026f64(local_18,puVar8,0);
              iVar3 = 0;
              if (local_54[0] != 0) {
                iVar3 = FUN_00026f64(iVar6,puVar8,local_54[0],0);
              }
              local_54[1] = iVar3;
              uVar4 = 0;
              if (iVar3 != 0) {
                uVar4 = FUN_00026f64(iVar6,puVar8,local_54[0],iVar3);
              }
              local_54[2] = uVar4;
              if (local_54[0] == 0) {
                if (*_DAT_0001dc74 != 0) {
                  FUN_0002a1c6(2,DAT_0001dd80,(int)puVar2 + DAT_0001dcb8,(int)puVar2 + DAT_0001dd7c,
                               (puVar2[5] + puVar2[6]) - *(int *)(local_2c + 0x1c),puVar2[6]);
                }
              }
              else {
                local_30 = 0;
                puVar2[0x273] = 0;
                iVar6 = 0;
                local_40 = (int)puVar2 + DAT_0001dcb8;
                puVar2[0x274] = *(int *)(local_2c + 0x1c) + *DAT_0001dcb4;
                local_1c = puVar2 + 0x500;
                do {
                  puVar2[iVar6 * 5 + 0x262] = 0;
                  if (-1 < (int)puVar2[iVar6 * 0x98 + 0x9e]) {
                    puVar8 = puVar2 + iVar6 * 0x98 + 0x9a;
                    iVar3 = local_18;
                    FUN_001e8170(local_18,DAT_0001dcbc);
                    FUN_001ea6d8(iVar3,puVar8);
                    FUN_001eac48(iVar3,DAT_0001dcbc);
                  }
                  puVar2[iVar6 * 0x98 + 0x9e] = 0xffffffff;
                  iVar3 = local_54[iVar6];
                  if (iVar3 != 0) {
                    if (*_DAT_0001dc74 != 0) {
                      uVar4 = FUN_00028288(iVar3 + 4,*(int *)(iVar3 + 0x24) + 4,local_54[3]);
                      FUN_0002a1c6(2,DAT_0001dcc0,local_40,iVar6,
                                   *(undefined4 *)(local_54[iVar6] + 0xc),uVar4);
                    }
                    FUN_001e99e8(puVar2 + iVar6 * 0x98 + 0x9a,*local_1c,
                                 *(int *)(local_54[iVar6] + 0x24) + 4,0x21,_DAT_0001dcc4,puVar2);
                    puVar2[iVar6 * 0x98 + 0x12a] = 1;
                    FUN_001e9e00(local_18,puVar2 + iVar6 * 0x98 + 0x9a);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < 3);
              }
            }
            puVar2 = (undefined4 *)thunk_FUN_0002790c(*puVar2);
          } while (puVar2 != (undefined4 *)0x0);
          if (local_30 == 0) {
            return;
          }
        }
        goto LAB_0001dbca;
      }
    }
    if (*_DAT_0001dc74 == 0) goto LAB_0001dbda;
    FUN_0002a1c6(2,s_r__BeginSleepProcessing__No_adve_0001dd09 + 3);
  }
LAB_0001dbca:
  if (*_DAT_0001dc74 != 0) {
    FUN_0002a1c6(2,s__BeginSleepProcessing__Not_regis_0001dcc7 + 1);
  }
LAB_0001dbda:
  *(undefined1 *)(local_28 + 0x15) = 2;
  piVar5 = *(int **)(local_24 + 0x38);
  if (piVar5 != (int *)0x0) {
    iVar6 = *_DAT_0001dd08;
    do {
      if (((char)piVar5[1] == '\b') && ((char)piVar5[0x1f] != '\0')) {
        piVar5[0x21] = iVar6;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  FUN_00041fb8(local_18);
  return;
}

