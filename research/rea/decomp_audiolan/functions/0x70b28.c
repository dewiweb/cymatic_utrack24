// rea decompile_all
// name: FUN_00070b28
// address: 0x70b28
// body: available
// range: 0x70b28-0x70c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00070b28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = (undefined4 *)
           FUN_00052038(param_1,param_2,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14,param_16,param_17,param_18,
                        param_19,param_20,param_21,param_22);
  uVar1 = *(ushort *)(puVar2 + 0x31);
  uVar7 = uVar1 + 1 & 0xfffeffff;
  *puVar2 = DAT_00070c4c;
  puVar2[0x46] = 0;
  puVar3 = (undefined1 *)FUN_001a0808(uVar7 * 0xc,1);
  puVar2[0x46] = puVar3;
  if (uVar7 != 0) {
    uVar6 = uVar1 + 1 & 1;
    uVar5 = (uint)(uVar6 == 1);
    if (uVar6 == 1) {
      *puVar3 = 0;
    }
    if (uVar6 < uVar7) {
      do {
        *(undefined1 *)(puVar2[0x46] + uVar5 * 0xc) = 0;
        iVar4 = uVar5 + 1;
        uVar6 = uVar6 + 2;
        uVar5 = uVar5 + 2;
        *(undefined1 *)(puVar2[0x46] + iVar4 * 0xc) = 0;
      } while ((int)uVar6 < (int)uVar7);
    }
  }
  FUN_000709e8(puVar2,param_15);
  return puVar2;
}

