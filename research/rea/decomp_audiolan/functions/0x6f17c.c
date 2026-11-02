// rea decompile_all
// name: FUN_0006f17c
// address: 0x6f17c
// body: available
// range: 0x6f17c-0x6f253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006f17c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  iVar1 = FUN_000dde00();
  FUN_001da408(&local_24,iVar1 + 0x2c);
  uVar2 = FUN_000151a4(local_24,0);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  FUN_001da44c(&local_24);
  if (*(int *)(param_1 + 0xd0) != -1) {
    local_28 = 1;
    local_38 = 0x14;
    uStack_34 = DAT_0006f254;
    uStack_30 = 8;
    uStack_2c = 0;
    FUN_0001545c(*(undefined4 *)(param_1 + 0xd0),3,&local_38);
    local_1c = 0xffffffff;
    local_20 = 8;
    FUN_0001545c(*(undefined4 *)(param_1 + 0xd0),8,&local_20);
    local_18 = 8;
    local_14 = 0;
    FUN_0001545c(*(undefined4 *)(param_1 + 0xd0),0xf,&local_18);
    return;
  }
  FUN_001da408(&local_38,iVar1 + 0x2c);
  FUN_000028a4(s_ERROR__CopperLanMIDI__Could_NOT_o_0006f258,local_38);
  FUN_001da44c(&local_38);
  return;
}

