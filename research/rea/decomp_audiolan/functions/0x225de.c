// rea decompile_all
// name: FUN_000225de
// address: 0x225de
// body: available
// range: 0x225de-0x22609 inclusive
// range: 0x2261e-0x22729 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000225de(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  
  iVar5 = *(int *)(param_1 + 0x20);
  pbVar6 = (byte *)(iVar5 + 4);
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
  }
  if ((*(short *)(param_1 + 4) == 0xff) || (uVar1 = *(ushort *)(param_1 + 2), uVar1 == 0x14))
  goto switchD_00022608_caseD_0;
  if (uVar1 < 0x15) {
    switch(uVar1) {
    default:
      goto switchD_00022608_caseD_0;
    case 1:
      return 4;
    case 2:
    case 5:
    case 0xc:
switchD_00022608_caseD_2:
      uVar3 = FUN_0001e450(pbVar6,uVar7);
      return uVar3;
    case 6:
      iVar2 = FUN_0001e450(pbVar6,uVar7);
      iVar5 = FUN_0001e450(iVar5 + 0x104,uVar7);
      uVar3 = iVar2 + iVar5 + 0x14;
      break;
    case 0xd:
      return (uint)*pbVar6 + (uint)*(byte *)((uint)*pbVar6 + iVar5 + 5) + 2;
    case 0xf:
    case 0x12:
switchD_00022608_caseD_f:
      iVar2 = FUN_0001e450(iVar5 + 6,uVar7);
      goto LAB_000226be;
    case 0x11:
      iVar2 = FUN_0001e450(pbVar6,uVar7);
      iVar5 = FUN_0001e450(iVar5 + 0x104,uVar7);
      uVar3 = iVar2 + iVar5;
    }
  }
  else {
    if (uVar1 == 0x24) goto switchD_00022608_caseD_f;
    if (0x24 < uVar1) {
      if (uVar1 == 0x2f) {
        iVar5 = 0x20;
        do {
          if (pbVar6[iVar5 + -1] != 0) break;
          if (pbVar6[iVar5 + -2] != 0) {
            iVar5 = iVar5 + -1;
            break;
          }
          iVar5 = iVar5 + -2;
        } while (0 < iVar5);
        if (param_2 == 0) {
          pbVar4 = *(byte **)(param_1 + 0x1c);
          for (pbVar6 = pbVar4; (pbVar6 < pbVar4 + 0x100 && (uVar3 = (uint)*pbVar6, uVar3 < 0x40));
              pbVar6 = pbVar6 + uVar3 + 1) {
            if (uVar3 == 0) {
              uVar3 = (uint)(pbVar6 + (1 - (int)pbVar4)) & 0xffff;
              goto LAB_00022716;
            }
          }
          uVar3 = 0x101;
        }
        else {
          uVar3 = 2;
        }
LAB_00022716:
        if (iVar5 != 0) {
          iVar5 = iVar5 + 2;
        }
        uVar3 = uVar3 + iVar5;
        goto LAB_0002268a;
      }
      if ((uVar1 < 0x30) && (uVar1 == 0x27)) goto switchD_00022608_caseD_2;
switchD_00022608_caseD_0:
      return (uint)*(ushort *)(param_1 + 0xc);
    }
    if (uVar1 == 0x1c) {
      return 0x10;
    }
    if (0x1c < uVar1) {
      if ((uVar1 != 0x1d) && (uVar1 == 0x21)) {
        iVar5 = FUN_0001e450(iVar5 + 10,uVar7);
        uVar3 = iVar5 + 6;
        goto LAB_0002268a;
      }
      goto switchD_00022608_caseD_0;
    }
    if (uVar1 == 0x15) goto switchD_00022608_caseD_f;
    if (uVar1 != 0x1a) goto switchD_00022608_caseD_0;
    iVar2 = FUN_0001e450(iVar5 + 6,uVar7);
    iVar5 = FUN_0001e450(iVar5 + 0x106,uVar7);
    iVar2 = iVar2 + iVar5;
LAB_000226be:
    uVar3 = iVar2 + 2;
  }
LAB_0002268a:
  return uVar3 & 0xffff;
}

