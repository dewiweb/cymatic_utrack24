// rea decompile_all
// name: FUN_000143ac
// address: 0x143ac
// body: available
// range: 0x143ac-0x145fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000143ac(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  local_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_001a2920(&uStack_28,param_1 + 7,param_3,param_4,param_1);
  uVar2 = FUN_000507b8(param_2);
  if (*DAT_00014670 == 0) {
    FUN_001a2938(&uStack_28);
    uVar2 = 3;
  }
  else {
    *DAT_00014648 = 0xffffffff;
    (**(code **)(*param_1 + 0x30))(param_1,uVar2,&local_2c);
    puVar1 = DAT_00014650;
    DAT_00014650[0x60] = 0;
    *puVar1 = 0x1100001;
    puVar1[1] = 0x10000;
    puVar1[0x80] = 0xff;
    iVar3 = 0x2000;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *DAT_00014654 = 0xff;
    do {
      puVar1 = DAT_00014650;
      DAT_00014650[0x81] = 0x70;
      puVar1[0x94] = 1;
      do {
      } while (*DAT_00014658 == 0);
      iVar3 = FUN_0004d3d8(*DAT_0001465c);
    } while (iVar3 == 0);
    iVar3 = *DAT_00014674;
LAB_000145e4:
    puVar1 = DAT_00014650;
    if (param_3 != 0) {
      iVar4 = 0x2000;
      do {
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar5 = local_2c * *DAT_0001466c;
      DAT_00014650[0x80] = 0x60;
      puVar1[0x86] = uVar5 & 0xff;
      puVar1[0x87] = (uVar5 & 0xffff) >> 8;
      puVar1[0x88] = (uVar5 & 0xffffff) >> 0x10;
      puVar1[0x80] = 0xd0;
      iVar4 = 0x2000;
      do {
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *DAT_00014654 = 0xff;
      do {
        puVar1 = DAT_00014650;
        DAT_00014650[0x81] = 0x70;
        puVar1[0x94] = 1;
        do {
        } while (*DAT_00014658 == 0);
        iVar4 = FUN_0004d3d8(*DAT_0001465c);
      } while (iVar4 == 0);
      if ((uint)(iVar3 * 0x400) < param_3) {
        param_3 = param_3 + iVar3 * -0x400;
      }
      else {
        param_3 = 0;
      }
      do {
        if (param_3 == 0) break;
        local_2c = local_2c + 1;
        iVar4 = FUN_00046734(local_2c);
      } while (iVar4 != 0);
      goto LAB_000145e4;
    }
    FUN_001a2938(&uStack_28);
    uVar2 = 0;
  }
  return uVar2;
}

