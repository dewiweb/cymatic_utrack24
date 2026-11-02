// rea decompile_all
// name: FUN_00191b64
// address: 0x191b64
// body: available
// range: 0x191b64-0x191bf5 inclusive
// range: 0x191bfe-0x191cad inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00191b64(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (0x1f < param_1) {
    return 0xffffffff;
  }
  piVar4 = (int *)(param_1 * 0x18 + DAT_00191cb0);
  pbVar5 = (byte *)*piVar4;
  if (pbVar5 == (byte *)0x0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  if (piVar4 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    piVar4[4] = 0xe;
    return 0xffffffff;
  }
  if (param_2 == 0) {
    switch(param_3) {
    default:
      goto switchD_00191bf4_caseD_0;
    case 1:
    case 2:
      goto joined_r0x00191c00;
    case 3:
    case 4:
      if (param_5 < 8) {
        iVar2 = 0x16;
      }
      bVar1 = *pbVar5;
      break;
    case 5:
      if (param_5 == 0) {
        iVar2 = 0x16;
      }
      bVar1 = *pbVar5;
      break;
    case 6:
      if (param_5 < 4) {
        iVar2 = 0x16;
      }
      bVar1 = *pbVar5;
      break;
    case 7:
      if (param_5 == 0) {
        iVar2 = 0x16;
      }
      bVar1 = *pbVar5;
    }
    if (bVar1 >> 4 != 2) {
LAB_00191c42:
      iVar2 = 0x61;
      goto LAB_00191c6c;
    }
LAB_00191c68:
    if (iVar2 == 0) {
LAB_00191c76:
      local_30 = piVar4;
      local_2c = param_2;
      local_28 = param_3;
      local_24 = param_4;
      FUN_001b6dd4(DAT_00191cbc,&local_30,1);
      FUN_001b0c00(*piVar4 + 0xc,0);
      piVar4[4] = 0;
      return 0;
    }
    goto LAB_00191c6c;
  }
  if (param_2 == 6) {
    if (param_5 < 4) goto LAB_00191c4a;
    if (*pbVar5 != 0x10) {
      return 0;
    }
    if ((param_3 == 1) || (param_3 == 2)) goto LAB_00191c76;
  }
  else if (param_2 + DAT_00191cb4 == 0) {
    if (param_3 != 0x200) {
      if (param_3 < 0x201) {
        if (((param_3 != 4) && (param_3 != 8)) && (param_3 != 0x20)) goto switchD_00191bf4_caseD_0;
      }
      else {
        iVar3 = param_3 + -0x200 + DAT_00191cb8;
        if (iVar3 != 0) {
          if (iVar3 != 4) goto switchD_00191bf4_caseD_0;
          if (param_5 < 4) {
            iVar2 = 0x16;
          }
          if ((*pbVar5 != 0x20) || ((int)((uint)*(byte *)(*(int *)(pbVar5 + 4) + 0x10) << 0x1e) < 0)
             ) goto LAB_00191c42;
          goto LAB_00191c68;
        }
      }
    }
joined_r0x00191c00:
    if (3 < param_5) goto LAB_00191c76;
LAB_00191c4a:
    iVar2 = 0x16;
    goto LAB_00191c6c;
  }
switchD_00191bf4_caseD_0:
  iVar2 = 0x5c;
LAB_00191c6c:
  piVar4[4] = iVar2;
  return 0xffffffff;
}

