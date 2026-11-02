// rea decompile_all
// name: FUN_000243c4
// address: 0x243c4
// body: available
// range: 0x243c4-0x24615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000243c4(byte *param_1,byte *param_2,byte *param_3,char *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  byte *local_20;
  byte *local_1c;
  
  pbVar2 = param_1;
  if (param_2 == (byte *)0x0) {
    local_1c = param_3;
    if (param_3 != (byte *)0x0) {
      uVar10 = (uint)*param_3;
      local_1c = param_3;
      if ((uVar10 != 0) && (local_1c = param_3, uVar10 < 0x40)) {
        pbVar4 = param_3 + uVar10 + 1;
        uVar8 = (uint)*pbVar4;
        local_1c = param_3;
        if ((uVar8 != 0) && (local_1c = param_3, uVar8 < 0x40)) {
          uVar3 = (uint)pbVar4[uVar8 + 1];
          local_1c = param_3;
          if (((uVar3 != 0) && (local_1c = param_3, uVar3 < 0x40)) &&
             (local_1c = param_3, (pbVar4 + uVar8 + 1)[uVar3 + 1] == 0)) {
            pbVar5 = param_1;
            if (uVar10 + 1 != 0) {
              pbVar2 = param_1 + -1;
              pbVar5 = param_3 + -1;
              if ((uVar10 & 1) != 1) {
                *param_1 = *param_3;
                pbVar2 = param_1;
                pbVar5 = param_3;
              }
              for (iVar7 = (int)(uVar10 + 1) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
                pbVar6 = pbVar5 + 1;
                pbVar5 = pbVar5 + 2;
                pbVar2[1] = *pbVar6;
                pbVar2 = pbVar2 + 2;
                *pbVar2 = *pbVar5;
              }
              pbVar5 = param_1 + uVar10 + 1;
            }
            *pbVar5 = 4;
            pbVar5[1] = 0x5f;
            pbVar5[2] = 0x73;
            pbVar5[3] = 0x75;
            pbVar5[4] = 0x62;
            iVar7 = FUN_000400ea(param_3,&DAT_00024638);
            pbVar2 = pbVar5 + 5;
            local_1c = pbVar4;
            if (iVar7 != 0) {
              pbVar2 = pbVar5;
            }
          }
        }
      }
    }
LAB_00024474:
    local_20 = &DAT_00024650;
  }
  else {
    uVar10 = (uint)*param_2;
    local_1c = param_3;
    if (uVar10 == 0) goto LAB_00024474;
    local_20 = param_2;
    local_1c = param_3;
    if (0x3f < uVar10) {
      pcVar9 = s_Service_instance_name_too_long_00024618;
      goto LAB_000245fe;
    }
    if (uVar10 + 1 != 0) {
      pbVar2 = param_2 + -1;
      pbVar4 = param_1 + -1;
      if ((uVar10 & 1) != 1) {
        *param_1 = *param_2;
        pbVar2 = param_2;
        pbVar4 = param_1;
      }
      for (iVar7 = (int)(uVar10 + 1) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        pbVar5 = pbVar2 + 1;
        pbVar2 = pbVar2 + 2;
        pbVar4[1] = *pbVar5;
        pbVar4 = pbVar4 + 2;
        *pbVar4 = *pbVar2;
      }
      pbVar2 = param_1 + uVar10 + 1;
    }
  }
  uVar10 = (uint)*local_1c;
  if (0xe < uVar10 - 2) {
    FUN_0002a1c6(0,DAT_00024654,local_20,local_1c,param_4);
  }
  if ((0x3d < uVar10 - 2) ||
     ((0x10 < uVar10 && (iVar7 = FUN_000400ea(param_4,&DAT_00024658), iVar7 == 0)))) {
    return 0;
  }
  if (local_1c[1] == 0x5f) {
    iVar7 = 2;
    uVar8 = uVar10 + 1;
    if (2 < uVar8) {
      do {
        uVar3 = (uint)local_1c[iVar7];
        if (((0x19 < uVar3 - 0x41) && (0x19 < uVar3 - 0x61)) &&
           ((9 < uVar3 - 0x30 &&
            ((((pcVar9 = _DAT_00024698, uVar3 != 0x2d && (uVar3 != 0x5f)) || (iVar7 < 3)) ||
             ((int)uVar10 <= iVar7)))))) goto LAB_000245fe;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar8);
    }
    pbVar4 = local_1c;
    if (uVar8 != 0) {
      pbVar4 = local_1c + -1;
      pbVar5 = pbVar2 + -1;
      if ((uVar10 & 1) != 1) {
        *pbVar2 = *local_1c;
        pbVar4 = local_1c;
        pbVar5 = pbVar2;
      }
      for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        pbVar6 = pbVar4 + 1;
        pbVar4 = pbVar4 + 2;
        pbVar5[1] = *pbVar6;
        pbVar5 = pbVar5 + 2;
        *pbVar5 = *pbVar4;
      }
      pbVar4 = local_1c + uVar10 + 1;
      pbVar2 = pbVar2 + uVar10 + 1;
    }
    if ((((*pbVar4 == 4) && (pbVar4[1] == 0x5f)) &&
        ((((pbVar4[2] | 0x20) == 0x75 && ((pbVar4[3] | 0x20) == 100)) ||
         (((pbVar4[2] | 0x20) == 0x74 && ((pbVar4[3] | 0x20) == 99)))))) &&
       ((pbVar4[4] | 0x20) == 0x70)) {
      *pbVar2 = *pbVar4;
      iVar7 = 2;
      pbVar5 = pbVar4;
      pbVar6 = pbVar2;
      do {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 2;
        pbVar6[1] = *pbVar1;
        pbVar6 = pbVar6 + 2;
        iVar7 = iVar7 + -1;
        *pbVar6 = *pbVar5;
      } while (iVar7 != 0);
      if (pbVar4[5] == 0) {
        pbVar2[5] = 0;
        if (*param_4 == '\0') {
          pcVar9 = s_Service_domain_must_be_non_empty_0002473c;
        }
        else {
          iVar7 = FUN_000400ea(param_4,&DAT_000246f4);
          if (iVar7 == 0) {
            iVar7 = FUN_0001d794(param_1,param_4);
            if (iVar7 != 0) {
              return iVar7;
            }
            pcVar9 = s_Service_domain_too_long_00024760;
          }
          else {
            pcVar9 = s_Illegal_domain__local_arpa___Use_00024700;
          }
        }
      }
      else {
        pcVar9 = s_Service_type_must_have_only_two_l_000246cc;
      }
    }
    else {
      pcVar9 = s_t__Transport_protocol_name_must_b_00024699 + 3;
    }
  }
  else {
    pcVar9 = s_Application_protocol_name_must_b_00024660;
  }
LAB_000245fe:
  FUN_0002a1c6(0,s_ConstructServiceName___s____s____00024778,pcVar9,local_20,local_1c,param_4);
  return 0;
}

