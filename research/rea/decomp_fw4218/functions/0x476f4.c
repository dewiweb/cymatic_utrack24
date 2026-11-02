// rea decompile_all
// name: FUN_000476f4
// address: 0x476f4
// body: available
// range: 0x476f4-0x47843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000476f4(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  undefined1 local_30 [40];
  
  psVar3 = (short *)param_1[9];
  uVar2 = 0;
  if (*psVar3 == 0) {
    psVar3 = (short *)((int)param_1 + 10);
  }
  do {
    uVar1 = psVar3[uVar2];
    if (uVar1 == 0) break;
    if (uVar1 < 0x7f) {
      local_30[uVar2] = (char)uVar1;
    }
    else {
      local_30[uVar2] = 0x3f;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  local_30[uVar2] = 0;
  if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
    FUN_00002898(DAT_00047848,local_30,*param_1);
  }
  else {
    FUN_00002898(DAT_00047844,local_30);
  }
  uVar1 = *(ushort *)(param_1 + 1);
  FUN_00002898(DAT_00047850,DAT_0004784c + (uint)(uVar1 >> 9),(uVar1 & 0x1ff) >> 5,uVar1 & 0x1f);
  uVar1 = *(ushort *)((int)param_1 + 6);
  FUN_00002898(DAT_00047854,uVar1 >> 0xb,(uVar1 & 0x7ff) >> 5,(uVar1 & 0x1f) << 1);
  FUN_00002898(DAT_00047858,*(undefined1 *)(param_1 + 2));
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    thunk_FUN_00002898(DAT_0004785c);
  }
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    thunk_FUN_00002898(DAT_00047860);
  }
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    thunk_FUN_00002898(DAT_00047864);
  }
  if ((*(byte *)(param_1 + 2) & 8) != 0) {
    thunk_FUN_00002898(DAT_00047868);
  }
  if ((*(byte *)(param_1 + 2) & 0xf) != 0) {
    thunk_FUN_00002898(DAT_0004786c);
  }
  if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
    thunk_FUN_00002898(DAT_00047870);
  }
  if ((*(byte *)(param_1 + 2) & 0x20) != 0) {
    thunk_FUN_00002898(DAT_00047874);
  }
  FUN_00002898(DAT_00047878);
  return;
}

