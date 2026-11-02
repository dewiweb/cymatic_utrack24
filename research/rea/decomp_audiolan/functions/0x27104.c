// rea decompile_all
// name: FUN_00027104
// address: 0x27104
// body: available
// range: 0x27104-0x27209 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00027104(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_1e;
  undefined1 local_15;
  undefined1 local_14;
  
  FUN_00036ae0();
  FUN_00030a88(param_1);
  FUN_000358a2(param_1 + 0x1c,0x30,10);
  FUN_00026040();
  FUN_00036f54();
  FUN_00033e90();
  FUN_00026038();
  FUN_00026278(param_1 + 0x28);
  iVar1 = param_1 + 0x40;
  FUN_00026656();
  FUN_00033b3a(param_1 + 0x60,iVar1);
  FUN_000361ee(param_1 + 0x56);
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  if (*(short *)(param_1 + 0x84) == 0) {
    FUN_0003589a(auStack_28,iVar1,0x16);
    FUN_00025b24(auStack_28);
    *(undefined1 *)(param_1 + 0x44) = local_24;
    *(undefined1 *)(param_1 + 0x4a) = local_1e;
    FUN_00026860(iVar1,local_15);
    *(undefined1 *)(param_1 + 0x54) = local_14;
  }
  if (*(undefined1 **)(param_1 + 0xa4) != (undefined1 *)0x0) {
    uVar3 = 0;
    if (*(short *)(param_1 + 0x84) == 0) {
      uVar3 = **(undefined1 **)(param_1 + 0xa4);
    }
    FUN_00035152();
    if (*(short *)(param_1 + 0x84) == 0) {
      FUN_0003508c(*(undefined4 *)(param_1 + 0xa4),uVar3);
    }
  }
  uVar2 = FUN_001907c4((int)*(char *)(*(int *)(param_1 + 0xa4) + 0x268));
  FUN_00036ae8(param_1 + 0x88,uVar2,0);
  FUN_00036b54(param_1 + 0x88);
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00033dcc(auStack_28,0xd);
    FUN_00035122(*(undefined4 *)(param_1 + 0xa4),auStack_28);
  }
  uVar2 = DAT_0002720c;
  iVar1 = FUN_00030b90(DAT_0002720c);
  if (iVar1 != 0) {
    FUN_00029e6c(uVar2);
    FUN_00029eac(6,DAT_00027210);
  }
  return;
}

