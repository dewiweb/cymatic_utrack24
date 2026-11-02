// rea decompile_all
// name: FUN_00190d80
// address: 0x190d80
// body: available
// range: 0x190d80-0x190e1f inclusive
// range: 0x190e28-0x190e75 inclusive
// range: 0x190e78-0x190eb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00190d80(uint param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  char local_1c;
  
  iVar4 = 0;
  if (0x1f < param_1) {
    return 0xffffffff;
  }
  piVar5 = (int *)(param_1 * 0x18 + DAT_00190eb8);
  pbVar1 = (byte *)*piVar5;
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((param_4 == 0) || (param_5 == (uint *)0x0)) {
    piVar5[4] = 0xe;
    return 0xffffffff;
  }
  if (param_2 != 0) {
    if (param_2 == 6) {
      if (*param_5 < 4) goto LAB_00190e5a;
      if (*pbVar1 != 0x10) {
        return 0;
      }
      if ((param_3 == 1) || (param_3 == 2)) goto LAB_00190e86;
    }
    else if (param_2 + DAT_00190ebc == 0) {
      if (param_3 == 0x200) {
LAB_00190df2:
        uVar2 = *param_5;
        goto joined_r0x00190df6;
      }
      if (param_3 < 0x201) {
        if (((param_3 == 2) || ((param_3 == 4 || (param_3 == 8)))) || (param_3 == 0x20))
        goto LAB_00190df2;
      }
      else {
        iVar3 = param_3 + -0x200 + DAT_00190ec0;
        if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) goto LAB_00190df2;
        if (iVar3 == 4) {
          if (*param_5 < 4) {
            iVar4 = 0x16;
          }
          if ((*pbVar1 == 0x20) &&
             (-1 < (int)((uint)*(byte *)(*(int *)(pbVar1 + 4) + 0x10) << 0x1e))) goto LAB_00190e78;
          goto LAB_00190e50;
        }
      }
    }
switchD_00190e1e_caseD_0:
    iVar4 = 0x5c;
    goto LAB_00190e7c;
  }
  switch(param_3) {
  default:
    goto switchD_00190e1e_caseD_0;
  case 1:
  case 2:
    uVar2 = *param_5;
    break;
  case 5:
    if (*param_5 != 0) goto LAB_00190e86;
    goto LAB_00190e5a;
  case 6:
    uVar2 = *param_5;
    break;
  case 7:
    if (*param_5 == 0) {
      iVar4 = 0x16;
    }
    if (*pbVar1 >> 4 == 2) {
LAB_00190e78:
      if (iVar4 == 0) goto LAB_00190e86;
      goto LAB_00190e7c;
    }
LAB_00190e50:
    iVar4 = 0x61;
    goto LAB_00190e7c;
  }
joined_r0x00190df6:
  if (3 < uVar2) {
LAB_00190e86:
    local_20 = param_5;
    local_1c = '\0';
    local_30 = piVar5;
    local_2c = param_2;
    local_28 = param_3;
    local_24 = param_4;
    FUN_001b6dd4(DAT_00190ec4,&local_30,1);
    FUN_001b0c00(*piVar5 + 0xc,0);
    piVar5[4] = (int)local_1c;
    if (local_1c != 0) {
      return 0xffffffff;
    }
    return 0;
  }
LAB_00190e5a:
  iVar4 = 0x16;
LAB_00190e7c:
  piVar5[4] = iVar4;
  return 0xffffffff;
}

