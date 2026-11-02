// rea decompile_all
// name: FUN_0001fca4
// address: 0x1fca4
// body: available
// range: 0x1fca4-0x1ff47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001fca4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                char *param_5,char *param_6,char *param_7,undefined2 param_8,uint param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 in_stack_fffffb60;
  undefined2 uVar12;
  undefined1 auStack_468 [256];
  undefined1 auStack_368 [256];
  undefined1 auStack_268 [256];
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [260];
  undefined4 *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char *local_18;
  
  uVar12 = (undefined2)((uint)in_stack_fffffb60 >> 0x10);
  iVar10 = 0;
  local_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  pcVar2 = (char *)FUN_001952a0(0x100);
  if (pcVar2 == (char *)0x0) {
LAB_0001fd92:
    pcVar4 = s_AllocateSubTypes_failed_0001ff68;
    iVar3 = DAT_0001ff64;
  }
  else {
    if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
      FUN_000038f4(pcVar2,param_5,0x100);
      pcVar2[0xff] = '\0';
      iVar3 = FUN_0001dbec(pcVar2);
      if (iVar3 < 0) {
        pcVar4 = s_ChopSubTypes_failed_0001ff48;
        iVar3 = DAT_00020008;
        goto LAB_0001ff02;
      }
      if (iVar3 != 0) {
        iVar6 = iVar3;
        iVar10 = FUN_001952a0(iVar3 * 0x364);
        if ((iVar10 != 0) && (iVar9 = 0, pcVar4 = pcVar2, 0 < iVar6)) {
          do {
            uVar12 = 0;
            iVar5 = iVar9 * 0x364 + iVar10;
            FUN_001995b4(iVar5,0,*DAT_0001ff60,0xff,DAT_0001ff5c,0,0,0,0);
            cVar1 = *pcVar4;
            while (cVar1 != '\0') {
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar4;
            }
            pcVar4 = pcVar4 + 1;
            iVar5 = FUN_0002495a(iVar5 + 0x158,pcVar4);
            if (iVar5 == 0) {
              FUN_00195340(iVar10);
              iVar10 = 0;
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar6);
        }
        if ((iVar3 != 0) && (iVar10 == 0)) goto LAB_0001fd92;
      }
      if (local_18 == (char *)0x0) {
        local_18 = &DAT_0001ff80;
      }
      if (*local_18 == '\0') {
        FUN_000037d0(auStack_168,_DAT_0001ff84,0x40);
      }
      else {
        iVar6 = FUN_00024928(auStack_168,local_18);
        if (iVar6 == 0) {
          pcVar4 = s___Bad_Instance_Name_0001ff86 + 2;
          iVar3 = DAT_00020008;
          goto LAB_0001ff02;
        }
      }
      iVar6 = FUN_0002495a(auStack_468,pcVar2);
      if (iVar6 != 0) {
        if ((param_6 == (char *)0x0) || (pcVar4 = param_6, *param_6 == '\0')) {
          pcVar4 = s_local__0001ffb0;
        }
        iVar6 = FUN_0002495a(auStack_368,pcVar4);
        if (iVar6 == 0) {
          pcVar4 = s_Bad_Domain_0001ffb8;
          iVar3 = DAT_00020008;
        }
        else {
          if ((param_7 == (char *)0x0) || (*param_7 == '\0')) {
            param_7 = &DAT_0001ff80;
          }
          iVar6 = FUN_0002495a(auStack_268,param_7);
          if (iVar6 == 0) {
            pcVar4 = s_Bad_Target_Host_0001ffec;
            iVar3 = DAT_00020008;
          }
          else {
            iVar6 = FUN_0001e5b8(auStack_128,auStack_168,auStack_468,auStack_368);
            if (iVar6 == 0) {
              pcVar4 = (char *)0x1fffc;
              iVar3 = DAT_00020008;
            }
            else {
              uVar7 = 0x108;
              if (0x108 < param_9) {
                uVar7 = param_9;
              }
              puVar8 = (undefined4 *)FUN_001952a0(uVar7 + DAT_0001ffc4);
              if (puVar8 == (undefined4 *)0x0) {
                pcVar4 = s_No_memory_0002003c;
                iVar3 = DAT_0001ff64;
              }
              else {
                *puVar8 = DAT_0001ffc8;
                puVar8[1] = param_11;
                puVar8[2] = param_12;
                cVar1 = *local_18;
                puVar8[4] = 0;
                puVar8[3] = (uint)(cVar1 == '\0');
                FUN_000037d0(puVar8 + 5,auStack_168,0x40);
                puVar11 = puVar8 + 0x15;
                FUN_000037d0(puVar11,auStack_268,0x100);
                iVar3 = FUN_00198448(_DAT_0001ffd0,puVar8 + 0x55,puVar8 + 5,auStack_468,auStack_368,
                                     puVar11,CONCAT22(uVar12,param_8),param_10,param_9,iVar10,iVar3,
                                     *DAT_0001ff60,DAT_0001ffcc,puVar8,0);
                if (iVar3 == 0) {
                  *local_24 = puVar8;
                  FUN_00195340(pcVar2);
                  return 0;
                }
                FUN_00195340(puVar8);
                FUN_00195340(iVar10);
                pcVar4 = s___mDNS_RegisterService_0001ffd2 + 2;
              }
            }
          }
        }
        goto LAB_0001ff02;
      }
    }
    pcVar4 = s_Bad_Service_Type_0001ff9c;
    iVar3 = DAT_00020008;
  }
LAB_0001ff02:
  FUN_00024642(0,s_DNSServiceRegister___s_____s___f_0002000c,param_5,param_6,pcVar4,iVar3);
  FUN_00195340(pcVar2);
  return iVar3;
}

