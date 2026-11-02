// rea decompile_all
// name: FUN_001b1f0c
// address: 0x1b1f0c
// body: available
// range: 0x1b1f0c-0x1b1fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_001b1f0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = 0;
  if ((param_5 & 1) != 0) {
    iVar2 = 4;
  }
  if ((int)(param_5 << 0x1e) < 0) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = 0;
  }
  puVar3 = (undefined4 *)FUN_0019cbdc(4);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_001aa008(param_2);
  }
  else {
    *(char *)((int)puVar3 + 10) = (char)param_5;
    *puVar3 = 0;
    puVar3[1] = param_2;
    *(short *)(puVar3 + 2) = *(short *)(param_2 + 8) - (short)(iVar2 + iVar5);
    iVar4 = FUN_001aa160(param_2,0x14);
    if (iVar4 == 0) {
      puVar6 = *(undefined1 **)(puVar3[1] + 4);
      puVar3[3] = puVar6;
      uVar1 = *(undefined2 *)(param_1 + 0x1a);
      *puVar6 = (char)((ushort)uVar1 >> 8);
      puVar6[1] = (char)uVar1;
      uVar1 = *(undefined2 *)(param_1 + 0x1c);
      iVar4 = puVar3[3];
      *(char *)(iVar4 + 2) = (char)((ushort)uVar1 >> 8);
      *(char *)(iVar4 + 3) = (char)uVar1;
      iVar4 = puVar3[3];
      *(char *)(iVar4 + 4) = (char)((uint)param_4 >> 0x18);
      *(char *)(iVar4 + 5) = (char)((uint)param_4 >> 0x10);
      *(char *)(iVar4 + 6) = (char)((uint)param_4 >> 8);
      *(char *)(iVar4 + 7) = (char)param_4;
      iVar4 = puVar3[3];
      *(byte *)(iVar4 + 0xc) =
           (byte)(((uint)(iVar2 + iVar5) >> 2) * 0x1000 + 0x5000 >> 8) | (byte)((uint)param_3 >> 8);
      *(char *)(iVar4 + 0xd) = (char)param_3;
      iVar2 = puVar3[3];
      *(undefined1 *)(iVar2 + 0x12) = 0;
      *(undefined1 *)(iVar2 + 0x13) = 0;
      return puVar3;
    }
    FUN_001b4c2e(puVar3);
  }
  return (undefined4 *)0x0;
}

