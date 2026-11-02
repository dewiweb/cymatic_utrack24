// rea decompile_all
// name: FUN_000de448
// address: 0xde448
// body: available
// range: 0xde448-0xde547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000de448(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)
           FUN_0006fc90(param_1,DAT_000de54c,0,0x14,DAT_000de548,DAT_000de548,DAT_000de548,
                        DAT_000de548,DAT_000de548,DAT_000de548);
  *puVar2 = DAT_000de550;
  *(undefined1 *)(puVar2 + 0x45) = 0;
  *(undefined1 *)((int)puVar2 + 0x115) = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4c] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0xc,0);
  piVar3[2] = iVar4;
  *piVar3 = puVar2[0x47];
  piVar3[1] = 1;
  puVar2[0x47] = piVar3;
  iVar4 = piVar3[2];
  puVar2[0x49] = iVar4;
  puVar2[0x4a] = iVar4 + 0xc;
  puVar2[0x4b] = iVar4;
  puVar2[0x49] = iVar4 + 0xc;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar2[0x4b] + 4) = puVar2[0x4b];
  puVar1 = DAT_000de554;
  puVar2[0x46] = 0;
  *puVar1 = puVar2;
  uVar5 = FUN_0018ab18(0);
  FUN_0018dc6c(uVar5,DAT_000de558);
  FUN_0018dc40(uVar5,DAT_000de55c);
  FUN_0006e024(puVar2);
  return puVar2;
}

