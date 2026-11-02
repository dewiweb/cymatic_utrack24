// rea decompile_all
// name: FUN_000625c8
// address: 0x625c8
// body: available
// range: 0x625c8-0x62687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000625c8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_r1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  
  local_20 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = (undefined4 *)FUN_00173860(4000,0);
  *param_1 = (int)puVar2;
  iVar3 = 200;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = local_20;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 5;
  } while (iVar3 != 0);
  param_1[1] = *param_1 + 4000;
  param_1[2] = *param_1 + 4000;
  iVar3 = param_1[1];
  if (*param_1 != iVar3) {
    FUN_001c6e90(iVar3 - *param_1);
    param_1[1] = iVar3 + extraout_r1 * -0x14;
  }
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_0023e74c(param_1,&local_3c);
  if (((*(uint *)(DAT_00062688 + 4) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_0006268c), uVar1 = DAT_0006269c, puVar2 = DAT_00062690, iVar3 != 0))
  {
    DAT_00062690[1] = DAT_00062694;
    *puVar2 = DAT_00062698;
    FUN_001c70ac(puVar2,DAT_000626a0,uVar1);
  }
  *(undefined4 **)(param_1[1] + -0x14) = DAT_00062690;
  return param_1;
}

