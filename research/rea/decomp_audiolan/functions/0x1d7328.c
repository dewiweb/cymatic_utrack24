// rea decompile_all
// name: FUN_001d7328
// address: 0x1d7328
// body: available
// range: 0x1d7328-0x1d747f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001d7328(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined1 *param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 local_28;
  
  puVar8 = (undefined4 *)FUN_001a0808(0x40,1);
  uVar9 = DAT_001d7480;
  bVar15 = puVar8 == (undefined4 *)0x0;
  if (bVar15) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *param_6;
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[8];
    uVar5 = param_6[0x10];
    uVar6 = param_6[0x18];
    uVar7 = param_6[0x24];
    local_28 = DAT_001d7480;
    uVar10 = *(undefined4 *)(param_6 + 4);
    uVar11 = *(undefined4 *)(param_6 + 0xc);
    uVar12 = *(undefined4 *)(param_6 + 0x14);
    uVar13 = *(undefined4 *)(param_6 + 0x1c);
    uVar14 = *(undefined4 *)(param_6 + 0x20);
    *puVar8 = DAT_001d7484;
    puVar8[1] = param_2;
    puVar8[2] = param_3;
    puVar8[3] = param_4;
    *(undefined1 *)(puVar8 + 4) = param_5;
    *(undefined1 *)(puVar8 + 5) = uVar1;
    *(undefined1 *)((int)puVar8 + 0x15) = uVar2;
    *(undefined1 *)((int)puVar8 + 0x16) = uVar3;
    *(undefined1 *)(puVar8 + 7) = uVar4;
    *(undefined1 *)(puVar8 + 9) = uVar5;
    *(undefined1 *)(puVar8 + 0xb) = uVar6;
    *(undefined1 *)(puVar8 + 0xe) = uVar7;
    puVar8[0xf] = uVar9;
    puVar8[6] = uVar10;
    puVar8[8] = uVar11;
    puVar8[10] = uVar12;
    puVar8[0xc] = uVar13;
    puVar8[0xd] = uVar14;
  }
  uVar9 = (**(code **)(*param_1 + 0x2c))(param_1,puVar8,param_7);
  if (!bVar15) {
    FUN_001da44c(&local_28);
  }
  return uVar9;
}

