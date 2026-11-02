// rea decompile_all
// name: FUN_00118ff8
// address: 0x118ff8
// body: available
// range: 0x118ff8-0x11920f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00118ff8(undefined4 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  char local_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  FUN_001dab20(0,local_28);
  if (local_28[0] != '\x01') {
    iVar1 = FUN_001dab58(0,&local_34);
    if ((iVar1 == 0) && (uVar2 = 1, 1 < local_34)) {
      do {
        FUN_001daa88(0,uVar2,&local_30,auStack_24);
        iVar1 = FUN_001dabd8(0,local_30,param_3,0x38);
        if ((iVar1 == 0) &&
           (((*(uint *)(param_3 + 0x18) == param_2 && (*(int *)(param_3 + 0x2c) == 0x7f)) &&
            (iVar1 = FUN_00003928(param_3 + 0x30,s____MetaInfo_00119215 + 3,8), iVar1 == 0)))) {
          *param_4 = local_30;
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_34);
    }
    return 0;
  }
  if (((param_2 < 9) && (iVar1 = FUN_001dab58(0,&local_2c), iVar1 == 0)) &&
     (uVar2 = 1, 1 < local_2c)) {
    do {
      FUN_001daa88(0,uVar2,&local_38,auStack_20);
      iVar1 = FUN_001dabd8(0,local_38,param_3,0x38);
      if (iVar1 == 0) {
        if (((*(uint *)(param_3 + 0x18) == param_2) && (*(int *)(param_3 + 0x2c) == 0x7f)) &&
           (iVar1 = FUN_00003928(param_3 + 0x30,_DAT_00119214,8), iVar1 == 0)) {
          *param_4 = local_38;
          return 1;
        }
      }
      else {
        FUN_00002898(DAT_00119210,local_38);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_2c);
  }
  return 0;
}

