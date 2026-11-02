// rea decompile_all
// name: FUN_001df0f4
// address: 0x1df0f4
// body: available
// range: 0x1df0f4-0x1df1a7 inclusive
// range: 0x1df1ae-0x1df225 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1df222 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001df0f4(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_20 [3];
  uint uStack_14;
  
  puVar7 = local_20;
  bVar1 = *param_1;
  do {
    uVar3 = (uint)bVar1;
    if (9 < uVar3 - 0x30) {
switchD_001df1a6_caseD_ffffffff:
      return 0;
    }
    uVar4 = 0;
    iVar5 = 10;
    pbVar2 = param_1;
    if (uVar3 == 0x30) {
      pbVar2 = param_1 + 1;
      uVar3 = (uint)*pbVar2;
      if ((uVar3 == 0x78) || (uVar3 == 0x58)) {
        iVar5 = 0x10;
        pbVar2 = param_1 + 2;
        uVar3 = (uint)*pbVar2;
      }
      else {
        iVar5 = 8;
      }
    }
    while( true ) {
      while (uVar3 - 0x30 < 10) {
        uVar4 = iVar5 * uVar4 + (uVar3 - 0x30);
        pbVar2 = pbVar2 + 1;
        uVar3 = (uint)*pbVar2;
      }
      if ((iVar5 != 0x10) || ((5 < uVar3 - 0x61 && (5 < uVar3 - 0x41)))) break;
      if (uVar3 - 0x61 < 0x1a) {
        iVar6 = 0x61;
      }
      else {
        iVar6 = 0x41;
      }
      uVar4 = uVar4 << 4 | (uVar3 - iVar6) + 10;
      pbVar2 = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
    }
    if (uVar3 != 0x2e) {
      if ((((uVar3 != 0) && (uVar3 != 0x20)) && (uVar3 != 0xc)) &&
         (((uVar3 != 10 && (uVar3 != 0xd)) && ((uVar3 != 9 && (uVar3 != 0xb)))))) {
        return 0;
      }
      switch((int)puVar7 - (int)local_20 >> 2) {
      case 0:
        break;
      case 1:
        if (DAT_001df228 < uVar4) {
          return 0;
        }
        uVar4 = uVar4 | local_20[0] << 0x18;
        break;
      case 2:
        if (DAT_001df22c < uVar4) {
          return 0;
        }
        uVar4 = uVar4 | local_20[0] << 0x18 | local_20[1] << 0x10;
        break;
      case 3:
        if (0xff < uVar4) {
          return 0;
        }
        uVar4 = uVar4 | local_20[0] << 0x18 | local_20[1] << 0x10 | local_20[2] << 8;
        break;
      case -1:
        goto switchD_001df1a6_caseD_ffffffff;
      default:
        FUN_00013290(s_Assertion___s__failed_at_line__d_001df240,s_j__unhandled_001df230 + 4,0xf3,
                     s_j__unhandled_001df230._0_4_);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      return 1;
    }
    if (&uStack_14 <= puVar7) {
      return 0;
    }
    *puVar7 = uVar4;
    puVar7 = puVar7 + 1;
    param_1 = pbVar2 + 1;
    bVar1 = *param_1;
  } while( true );
}

