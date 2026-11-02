// rea decompile_all
// name: FUN_00187990
// address: 0x187990
// body: available
// range: 0x187990-0x1879b1 inclusive
// range: 0x1879c2-0x187d31 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00187990(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_5c;
  undefined1 uStack_58;
  char local_57;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [52];
  
  iVar4 = DAT_00187d34;
  if (param_2 == 0x10) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)param_3;
    return 0;
  }
  if (0x10 < param_2) {
    if (param_2 == 500) {
      FUN_00187f7e(param_1,*(undefined4 *)param_3);
      return 0;
    }
    if (param_2 < 0x1f5) {
      if (param_2 == 0x11) {
        if (*(int *)(param_1 + 0x84) != 0) {
          if ((code *)*DAT_00187d50 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_00187d50)();
          }
        }
        if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
          uVar3 = FUN_001a6f50(param_3);
          *(undefined4 *)(param_1 + 0x84) = uVar3;
          return 0;
        }
        uVar3 = FUN_001a6f50(s_eXosip_4_1_0_00187d54);
        *(undefined4 *)(param_1 + 0x84) = uVar3;
        return 0;
      }
      if (param_2 == 0x12) {
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)param_3;
        return 0;
      }
      if (param_2 != 0x13) {
        if (param_2 != 0x14) {
          return 0xfffffffe;
        }
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)param_3;
        return 0;
      }
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)param_3;
      return 0;
    }
    if (param_2 == 0x1f5) {
      FUN_00187d64(param_1);
      return 0;
    }
    if (param_2 == 0x1f6) {
      FUN_00187f72(param_1);
      return 0;
    }
    if (param_2 == 0x1f7) {
      FUN_00187f78(param_1);
      return 0;
    }
    if (param_2 != 0x3e9) {
      return 0xfffffffe;
    }
    return 0;
  }
  switch(param_2) {
  default:
    return 0xfffffffe;
  case 1:
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)param_3;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)param_3;
    break;
  case 7:
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)param_3;
    break;
  case 8:
    param_1 = param_1 + 0xe4;
    FUN_000038a0(param_1,0x100);
    if (param_3 == (char *)0x0) {
      return 0;
    }
    cVar1 = *param_3;
    goto joined_r0x00187c9e;
  case 9:
    if (param_3 == (char *)0x0) {
      return 0xfffffffe;
    }
    if (*param_3 == '\0') {
      return 0xfffffffe;
    }
    iVar4 = 0;
    do {
      iVar6 = iVar4 * 0x500 + param_1;
      if ((*(char *)(iVar6 + 0x2e4) != '\0') &&
         (iVar6 = FUN_001a6f04(iVar6 + 0x2e4,param_3), iVar6 == 0)) {
        param_3 = param_3 + 0x400;
        if (*param_3 == '\0') {
          pcVar5 = (char *)(DAT_00187d48 * iVar4 + param_1 + DAT_00187d4c);
          pcVar7 = param_3;
        }
        else {
          pcVar7 = (char *)(DAT_00187d48 * iVar4 + param_1 + DAT_00187d4c);
          pcVar5 = param_3;
        }
        FUN_000027f4(pcVar7,0x100,&DAT_00187d44,pcVar5);
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    pcVar7 = param_3 + 0x400;
    if (*pcVar7 == '\0') {
      iVar4 = FUN_001753ec(param_1,&local_5c,param_3,0,0x11);
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
      FUN_00003628(&uStack_58,*(undefined4 *)(local_5c + 0x14),*(undefined4 *)(local_5c + 0x10));
      FUN_00174846(local_5c);
      if (local_57 != '\x02') {
        return 0xfffffffe;
      }
      FUN_00179b28(2,auStack_54,auStack_48,0x2e);
      iVar4 = FUN_001a6f04(auStack_48,param_3);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_000027f4(pcVar7,0x100,&DAT_00187d44,auStack_48);
    }
    iVar4 = 0;
    do {
      if (*(char *)(iVar4 * 0x500 + param_1 + 0x2e4) == '\0') {
        param_1 = iVar4 * 0x500 + param_1;
        FUN_000027f4(param_1 + 0x2e4,0x400,&DAT_00187d44,param_3);
        FUN_000027f4(param_1 + DAT_00187d4c,0x100,&DAT_00187d44,pcVar7);
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    return 0xffffffff;
  case 10:
    if (param_3 == (char *)0x0) {
      return 0xfffffffe;
    }
    if (*param_3 == '\0') {
      return 0xfffffffe;
    }
    iVar4 = 0;
    while ((iVar6 = iVar4 * 0x500 + param_1, *(char *)(iVar6 + 0x2e4) == '\0' ||
           (iVar6 = FUN_001a6f04(iVar6 + 0x2e4,param_3), iVar6 != 0))) {
      iVar4 = iVar4 + 1;
      if (9 < iVar4) {
        return 0xffffffff;
      }
    }
    iVar4 = iVar4 * 0x500 + param_1 + 0x2e0;
    goto LAB_00187c4e;
  case 0xc:
    param_1 = param_1 + 0x1e4;
    FUN_000038a0(param_1,0x100);
    if (param_3 == (char *)0x0) {
      return 0;
    }
    cVar1 = *param_3;
joined_r0x00187c9e:
    if (cVar1 != '\0') {
      FUN_001a702a(param_1,param_3,0xff);
    }
    break;
  case 0xd:
    if (param_3 == (char *)0x0) {
      return 0xfffffffe;
    }
    if (*param_3 == '\0') {
      return 0xfffffffe;
    }
    iVar6 = 0;
    while ((iVar8 = iVar6 * DAT_00187d38 + param_1, *(char *)(iVar8 + iVar4 + 4) == '\0' ||
           (iVar2 = FUN_001a6f04(iVar8 + DAT_00187d3c,param_3), iVar2 != 0))) {
      iVar6 = iVar6 + 1;
      if (9 < iVar6) {
        pcVar7 = param_3 + 0x400;
        if (*pcVar7 == '\0') {
          return 0xfffffffe;
        }
        iVar6 = 0;
        do {
          if (*(char *)(iVar6 * DAT_00187d38 + param_1 + iVar4 + 4) == '\0') {
            param_1 = DAT_00187d38 * iVar6 + param_1;
            FUN_000027f4(param_1 + DAT_00187d3c,0x400,&DAT_00187d44,param_3);
            FUN_000027f4(param_1 + DAT_00187d40,0x100,&DAT_00187d44,pcVar7);
            *(undefined4 *)(param_1 + 0x39e4) = *(undefined4 *)(param_3 + 0x500);
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 10);
        return 0xffffffff;
      }
    }
    if (param_3[0x400] != '\0') {
      FUN_000027f4(DAT_00187d38 * iVar6 + param_1 + DAT_00187d40,0x100,&DAT_00187d44);
      *(undefined4 *)(iVar8 + 0x39e4) = *(undefined4 *)(param_3 + 0x500);
      return 0;
    }
    iVar4 = DAT_00187d38 * iVar6 + param_1 + iVar4;
LAB_00187c4e:
    *(undefined1 *)(iVar4 + 4) = 0;
    return 0;
  case 0xe:
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)param_3;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)param_3;
  }
  return 0;
}

