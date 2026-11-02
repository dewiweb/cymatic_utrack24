// rea decompile_all
// name: FUN_00118e14
// address: 0x118e14
// body: available
// range: 0x118e14-0x118f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00118e14(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x2c) == 0x7f)) {
    uVar4 = *(uint *)(param_2 + 0x20);
    iVar5 = *param_1;
    uVar3 = *(uint *)(param_2 + 0x24);
    local_20 = param_4;
    iVar1 = FUN_001f01c4(0x800,1);
    if (iVar1 != 0) {
      iVar5 = (iVar5 + (uVar4 & 0xfffffff)) - *param_1;
      local_20 = 0xffffffff;
      do {
        if (uVar3 == 0) {
LAB_00118f4c:
          FUN_001eecc8(iVar1);
          return ~local_20;
        }
        uVar4 = uVar3;
        if (0x7ff < uVar3) {
          uVar4 = 0x800;
        }
        iVar2 = FUN_001dabd8(0,iVar5,iVar1,uVar4);
        if (iVar2 != 0) {
          local_20 = 0xffffffff;
          goto LAB_00118f4c;
        }
        FUN_00176c74(iVar1,uVar4,&local_20);
        uVar3 = uVar3 - uVar4;
        iVar5 = iVar5 + uVar4;
      } while( true );
    }
  }
  return 0;
}

