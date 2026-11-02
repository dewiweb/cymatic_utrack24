// rea decompile_all
// name: FUN_00132f98
// address: 0x132f98
// body: available
// range: 0x132f98-0x133061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00132f98(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  *param_1 = DAT_00133064;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  iVar1 = FUN_0021d164();
  param_1[7] = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(param_1[7] + 8) = param_1[7];
  *(undefined4 *)(param_1[7] + 0xc) = param_1[7];
  iVar1 = param_1[2];
  if ((iVar1 != 0) && (local_20 = (uint)*(byte *)(param_1 + 1), local_20 != 0)) {
    local_28 = &local_20;
    local_24 = iVar1 + 0x19;
    uVar3 = *(uint *)(*(uint *)(iVar1 + 0x10) + 4);
    uVar5 = *(uint *)(iVar1 + 0x10);
    while (uVar4 = uVar3, uVar4 != 0) {
      iVar2 = FUN_0022dd14(local_24,uVar4 + 0x10,local_28);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(uVar4 + 8);
        uVar5 = uVar4;
      }
      else {
        uVar3 = *(uint *)(uVar4 + 0xc);
      }
    }
    local_18 = *(undefined4 *)(iVar1 + 0x10);
    local_1c = uVar5;
    iVar2 = FUN_002247e4(&local_1c,&local_18);
    if ((iVar2 != 0) ||
       (iVar2 = FUN_0022dd14(local_24,local_28,local_1c + 0x10), uVar3 = local_1c, iVar2 != 0)) {
      uVar3 = *(uint *)(iVar1 + 0x10);
    }
    if (uVar3 == *(uint *)(param_1[2] + 0x10)) {
      local_20 = (uint)*(byte *)(param_1 + 1);
      local_18 = 0;
      local_1c = local_20;
      FUN_0021d586(&local_28,param_1[2],&local_1c);
      local_28[5] = (uint)param_1;
    }
    else {
      FUN_00002898(DAT_00133068);
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return param_1;
}

