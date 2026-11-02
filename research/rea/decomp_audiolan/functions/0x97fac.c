// rea decompile_all
// name: FUN_00097fac
// address: 0x97fac
// body: available
// range: 0x97fac-0x981eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00097fac(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_40;
  int iStack_3c;
  uint local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  
  FUN_000028a4(s_Endpoint_FIFO_configuration_000981ec);
  FUN_000028a4(s_______________________________0009820c);
  FUN_000028a4(DAT_0009822c);
  FUN_000028a4(DAT_00098230);
  local_40 = 0;
  iStack_3c = 0x3f;
  local_38 = 0x40;
  FUN_000028a4(DAT_00098234,0,0,0x40);
  local_30 = (int *)(param_1 + 0x4c8);
  iVar7 = 1;
  do {
    FUN_001b714c(&local_34);
    iVar6 = *(int *)(param_1 + 0x4c8);
    uVar2 = *(ushort *)(iVar6 + 0x14);
    uVar3 = *(ushort *)(iVar6 + 0x66);
    local_2c = (uint)*(byte *)(iVar6 + 99);
    FUN_001b7160(local_34);
    FUN_001b714c(&local_40);
    iVar6 = *local_30;
    uVar5 = *(ushort *)(iVar6 + 0x10);
    uVar4 = *(ushort *)(iVar6 + 100);
    uVar8 = (uint)*(byte *)(iVar6 + 0x62);
    FUN_001b7160(local_40);
    iVar6 = 1 << (uVar8 & 0xf) + 3;
    if (iVar6 == 8) {
      iVar6 = 0;
    }
    else {
      iVar6 = (1 - ((int)(uVar8 << 0x1b) >> 0x1f)) * iVar6;
    }
    iVar1 = (uVar4 & 0x1fff) * 8;
    FUN_000028a4(DAT_00098230);
    iStack_3c = iVar1 + iVar6 + -1;
    local_38 = uVar5 & 0x7ff;
    if (iStack_3c < 0) {
      iStack_3c = 0;
    }
    local_40 = (uVar8 & 0x1f) >> 4;
    FUN_000028a4(DAT_00098238,iVar7,iVar1,iVar6);
    iStack_3c = 1 << (local_2c & 0xf) + 3;
    if (iStack_3c == 8) {
      iStack_3c = 0;
    }
    else {
      iStack_3c = (1 - ((int)(local_2c << 0x1b) >> 0x1f)) * iStack_3c;
    }
    iStack_3c = (uVar3 & 0x1fff) * 8 + iStack_3c;
    local_38 = uVar2 & 0x7ff;
    if (iStack_3c + -1 < 0) {
      iStack_3c = 0;
    }
    else {
      iStack_3c = iStack_3c + -1;
    }
    local_40 = (local_2c & 0x1f) >> 4;
    FUN_000028a4(DAT_0009823c,iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}

