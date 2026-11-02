// rea decompile_all
// name: FUN_0002b184
// address: 0x2b184
// body: available
// range: 0x2b184-0x2b259 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002b184(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_0002b25c;
  iVar4 = *param_1;
  iVar3 = FUN_000366e0(DAT_0002b25c);
  if (iVar3 != 0) {
    FUN_0002f9bc(uVar1);
    FUN_0002f9fc(6,DAT_0002b260);
  }
  *(ushort *)(iVar4 + 0x28) = (ushort)*(byte *)(param_2 + 0x3d) << 8 | *(byte *)(param_2 + 0x3e) + 1
  ;
  FUN_001c6cec(iVar4 + 0x60,param_2 + 0x14);
  FUN_001c6cec(iVar4 + 0x7c,param_2 + 0x35);
  *(undefined1 *)(iVar4 + 0x68) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(iVar4 + 0x69) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(iVar4 + 0x78) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)(iVar4 + 0x79) = *(undefined1 *)(param_2 + 0x31);
  uVar2 = FUN_0003b6a2(*(undefined2 *)(param_2 + 0x32));
  *(undefined2 *)(iVar4 + 0x7a) = uVar2;
  *(undefined1 *)(iVar4 + 0x74) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)(iVar4 + 0x75) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)(iVar4 + 0x76) = *(undefined1 *)(param_2 + 0x21);
  uVar2 = FUN_0003b6a2((int)((uint)*(byte *)(param_2 + 0x2d) << 0x18) >> 0x10 |
                       (uint)*(byte *)(param_2 + 0x2c));
  *(undefined2 *)(iVar4 + 0x56) = uVar2;
  *(char *)(iVar4 + 0x5a) = (char)((*(byte *)(param_2 + 7) & 7) >> 2);
  *(char *)(iVar4 + 0x59) = (char)((*(byte *)(param_2 + 7) & 3) >> 1);
  *(byte *)(iVar4 + 0x58) = *(byte *)(param_2 + 7) & 1;
  *(char *)(iVar4 + 0x5c) = (char)((*(byte *)(param_2 + 7) & 0x1f) >> 4);
  *(char *)(iVar4 + 0x5d) = (char)((*(byte *)(param_2 + 7) & 0x3f) >> 5);
  *(char *)(iVar4 + 0x5b) = (char)((*(byte *)(param_2 + 7) & 0xf) >> 3);
  *(undefined1 *)(iVar4 + 0x5e) = *(undefined1 *)(param_2 + 0x3f);
  FUN_0002bbe4();
  FUN_0002bdd8(*(undefined1 *)(iVar4 + 0x5a));
  return;
}

