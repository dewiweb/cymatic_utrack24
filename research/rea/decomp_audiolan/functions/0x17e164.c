// rea decompile_all
// name: FUN_0017e164
// address: 0x17e164
// body: available
// range: 0x17e164-0x17e27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17e206 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0017e164(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = *(uint **)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    FUN_0019e4f8(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)FUN_0019c794(0xc);
    if (puVar4 == (uint *)0x0) {
      return 0xfffffffe;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(uint **)(param_1 + 0x28) = puVar4;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = 0;
    *(undefined2 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
  }
  puVar2 = (undefined1 *)
           (((uint)*(byte *)(*(int *)(param_1 + 0x28) + 9) +
             (*(ushort *)(param_1 + 0x37) & 0xff |
             (uint)(DAT_0017e27c + *(ushort *)(param_1 + 0x37)) & 0xff00) & 0xffff) + DAT_0017e280);
  if (puVar2 < DAT_0017e27c) {
    puVar2 = puVar2 + 0xfe00;
  }
  if (DAT_0017e284 < puVar2) {
    puVar2 = &DAT_ffff0200 + (int)puVar2;
  }
  if ((undefined1 *)0xfdff < puVar2 + DAT_0017e288) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0017e2ac,
                 s____AUTOIP_address_not_in_range_0017e28d + 3,0xd5,_DAT_0017e28c);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  *puVar4 = (uint)puVar2 >> 0x18 | ((uint)puVar2 & 0xff0000) >> 8 | ((uint)puVar2 & 0xff00) << 8 |
            (int)puVar2 << 0x18;
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(iVar5 + 4) = 1;
  *(undefined1 *)(iVar5 + 5) = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 9);
  }
  uVar1 = FUN_0016dbc8(((uint)*(byte *)(param_1 + 0x37) | (uint)*(byte *)(param_1 + 0x38) << 0x18 |
                       (uint)*(byte *)(param_1 + 0x36) << 0x10 |
                       (uint)*(byte *)(param_1 + 0x35) << 8) + uVar3);
  *(undefined2 *)(iVar5 + 6) = uVar1;
  if (10 < *(byte *)(iVar5 + 9)) {
    *(undefined2 *)(iVar5 + 6) = 600;
  }
  return 0;
}

