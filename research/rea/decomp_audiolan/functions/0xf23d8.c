// rea decompile_all
// name: FUN_000f23d8
// address: 0xf23d8
// body: available
// range: 0xf23d8-0xf24f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000f23d8(int param_1,ushort param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uStack_20;
  
  if (*(char *)(param_1 + 0xbe5) == '\0') {
    return false;
  }
  if (param_4 <= DAT_000f24f8) {
    uStack_20 = param_4;
    FUN_001a0700(param_1 + 0x14);
    puVar3 = *(undefined1 **)(param_1 + 0xbcc);
    *puVar3 = 0xef;
    puVar3[1] = 0x51;
    uVar5 = (param_4 + 7 & 0xfffffffc) + 4;
    puVar4 = (undefined4 *)(puVar3 + 4);
    *(ushort *)(puVar3 + 2) = param_2 & 0xf000 | (ushort)param_4 & 0xfff;
    if (param_4 != 0) {
      if (param_3 != 0) {
        FUN_00003628(puVar4,param_3,param_4);
      }
      puVar4 = (undefined4 *)((uint)((int)puVar4 + param_4 + 3) & 0xfffffffc);
    }
    uVar1 = FUN_000fb134(DAT_000f24fc,*(undefined4 *)(param_1 + 0xbcc),param_4 + 7 & 0xfffc);
    *puVar4 = uVar1;
    if (*(char *)(param_1 + 0xbe6) == '\0') {
      iVar2 = (*(code *)**(undefined4 **)(param_1 + 0xbd4))
                        (*(undefined4 *)(param_1 + 0xbcc),uVar5 & 0xfffcffff,&uStack_20,
                         (*(undefined4 **)(param_1 + 0xbd4))[3]);
    }
    else {
      iVar2 = (**(code **)(*(int *)(param_1 + 0xbd0) + 0x2c))
                        (*(undefined4 *)(param_1 + 0xbd8),*(undefined4 *)(param_1 + 0xbcc),uVar5);
    }
    FUN_001a0d18(param_1 + 0x14);
    return iVar2 != 0;
  }
  return false;
}

