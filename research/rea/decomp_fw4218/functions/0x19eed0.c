// rea decompile_all
// name: FUN_0019eed0
// address: 0x19eed0
// body: available
// range: 0x19eed0-0x19efbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_0019eed0(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar1 = param_2 - param_1 & 0xffff;
  puVar4 = (undefined2 *)FUN_001c6b14(0x10,DAT_0019efc0);
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = (undefined2 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    iVar5 = FUN_001c6a94(0x40,DAT_0019efc0);
    *(int *)(puVar4 + 2) = iVar5;
    uVar3 = DAT_0019efc0;
    if (iVar5 != 0) {
      puVar4[1] = 0x40;
    }
    iVar5 = FUN_001c6a94(uVar1,uVar3);
    *(int *)(puVar4 + 2) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(puVar4 + 4) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[6] = 0;
      uVar3 = DAT_0019efc0;
      puVar4[7] = 0;
      iVar5 = FUN_001c6a94(0x40,uVar3);
      *(int *)(puVar4 + 2) = iVar5;
      if (iVar5 != 0) {
        puVar4[1] = 0x40;
      }
      FUN_001c6a78(puVar4);
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_000039e0(iVar5,param_1,uVar1);
      uVar2 = (undefined2)((uint)((param_2 - param_1) * 0x10000) >> 0x10);
      puVar4[1] = uVar2;
      *puVar4 = uVar2;
      *(uint *)(puVar4 + 4) = *(int *)(puVar4 + 2) + uVar1;
    }
  }
  return puVar4;
}

