// rea decompile_all
// name: FUN_001eac48
// address: 0x1eac48
// body: available
// range: 0x1eac48-0x1ead5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001eac48(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar4;
  iVar6 = param_1;
  if (iVar4 != *(int *)(param_1 + 0x30)) {
    FUN_0002a1c6(0,_DAT_001ead60,param_2,iVar4,*(int *)(param_1 + 0x30),param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) goto LAB_001ead56;
  iVar1 = param_1 + 0xc0;
  iVar5 = *(int *)(param_1 + 0xdc);
  iVar4 = iVar5 + 0x78000000;
  iVar3 = iVar4;
  if ((*(int *)(param_1 + 0x14) == 0) &&
     (((iVar3 = iVar5, *(int *)(param_1 + 0x134) == 0 ||
       (iVar4 = *(int *)(*(int *)(param_1 + 0x134) + 8), iVar4 != 0)) &&
      (*(int *)(param_1 + 0x140) == 0)))) {
    for (piVar2 = *(int **)(param_1 + 0x1fc0); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (*(char *)(piVar2 + 1) != '\x02') {
        if (piVar2 != (int *)0x0) goto LAB_001ead3e;
        break;
      }
    }
    if (((*(int *)(&DAT_00001fc8 + param_1) == 0) && (*(int *)(param_1 + 0x2884) == 0)) &&
       (*(char *)(param_1 + 0x114) == '\0')) {
      if (0 < iVar4 - *(int *)(param_1 + 0xf0)) {
        iVar4 = *(int *)(param_1 + 0xf0);
      }
      if (0 < iVar4 - *(int *)(param_1 + 0x104)) {
        iVar4 = *(int *)(param_1 + 0x104);
      }
      iVar3 = *(int *)(param_1 + 0x120);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar3 = *(int *)(param_1 + 0x128);
          goto joined_r0x001ead02;
        }
      }
      else {
joined_r0x001ead02:
        if (0 < iVar4 - iVar3) {
          iVar4 = iVar3;
        }
      }
      iVar3 = *(int *)(param_1 + 0xec);
      if (iVar3 == 0) {
        if (0 < iVar4 - *(int *)(param_1 + 0xf4)) {
          iVar4 = *(int *)(param_1 + 0xf4);
        }
        if (0 < iVar4 - *(int *)(param_1 + 0xf8)) {
          iVar4 = *(int *)(param_1 + 0xf8);
        }
        if (0 < iVar4 - *(int *)(param_1 + 0xfc)) {
          iVar4 = *(int *)(param_1 + 0xfc);
        }
      }
      else if (0 < iVar4 - iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
      if (0 < iVar4 - *(int *)(param_1 + 300)) {
        iVar3 = *(int *)(param_1 + 300);
      }
    }
  }
LAB_001ead3e:
  *(int *)(param_1 + 0xe4) = iVar3;
  if (iVar5 == 0) {
    FUN_0002a1c6(0,s_y___s__mDNS_Unlock__ERROR__m_>ti_001ead61 + 3,param_2,0,iVar1,iVar6);
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
LAB_001ead56:
  FUN_001e5a98(param_1);
  return;
}

