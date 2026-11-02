// rea decompile_all
// name: FUN_001e9c84
// address: 0x1e9c84
// body: available
// range: 0x1e9c84-0x1e9dad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001e9c84(int param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*DAT_001e9db0 != 0) {
    FUN_0002a1c6(3,DAT_001e9db4,param_2,*(undefined1 *)(param_2 + 10),
                 *(ushort *)((int)param_2 + 0x2a) << 8 | *(ushort *)((int)param_2 + 0x2a) >> 8,
                 (param_2[0xb] & 0xff) << 8 | (param_2[0xb] & 0xffff) >> 8,param_2[0xc]);
  }
  puVar7 = (undefined4 *)(param_1 + DAT_001e9db8);
  puVar4 = (undefined4 *)*puVar7;
  piVar3 = DAT_001e9dcc;
  while( true ) {
    DAT_001e9dcc = piVar3;
    if (puVar4 == (undefined4 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      iVar6 = (int)(((uint)(*piVar3 >> 0x1f) >> 0x1e) + *piVar3) >> 2;
      param_2[2] = iVar6;
      param_2[3] = *(undefined4 *)(param_1 + 0xdc);
      puVar4 = DAT_001e9dd0;
      param_2[4] = 0;
      param_2[6] = *puVar4;
      *(undefined2 *)(param_2 + 7) = *DAT_001e9dd4;
      param_2[8] = 0;
      param_2[9] = 0;
      if (param_2[0xc] == 0) {
        param_2[0xc] = &DAT_00001c20;
      }
      if (*(int *)(param_1 + 0x27a8) == 0) {
        *(undefined4 *)(param_1 + 0x27b4) = *(undefined4 *)(param_1 + 0xdc);
        *(int *)(FUN_000027b0 + param_1) = iVar6;
      }
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xdc);
      *puVar7 = param_2;
      return 0;
    }
    if (puVar4 == param_2) break;
    cVar1 = *(char *)(param_2 + 10);
    if ((cVar1 != '\0') && (cVar1 == *(char *)(puVar4 + 10))) {
      uVar5 = (uint)*(ushort *)((int)param_2 + 0x2a);
      uVar2 = *(ushort *)((int)puVar4 + 0x2a);
      if ((uVar5 == uVar2) && (uVar5 != *DAT_001e9dc4)) {
        FUN_0002a1c6(0,DAT_001e9dc8,param_2,cVar1,
                     (uVar5 & 0xff) << 8 | (uint)(*(ushort *)((int)param_2 + 0x2a) >> 8),
                     param_2[0xc],puVar4,*(char *)(puVar4 + 10),
                     (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8),puVar4[0xc]);
      }
    }
    puVar7 = (undefined4 *)*puVar7;
    puVar4 = (undefined4 *)*puVar7;
    piVar3 = DAT_001e9dcc;
  }
  FUN_0002a1c6(0,DAT_001e9dbc,param_2,*(undefined1 *)(param_2 + 10),
               *(ushort *)((int)param_2 + 0x2a) << 8 | *(ushort *)((int)param_2 + 0x2a) >> 8,
               param_2[0xc]);
  return DAT_001e9dc0;
}

