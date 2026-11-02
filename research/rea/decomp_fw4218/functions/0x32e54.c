// rea decompile_all
// name: FUN_00032e54
// address: 0x32e54
// body: available
// range: 0x32e54-0x32f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00032d8c) */
/* WARNING: Removing unreachable block (ram,0x00032df2) */
/* WARNING: Removing unreachable block (ram,0x00032688) */
/* WARNING: Removing unreachable block (ram,0x00032e4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032e54(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  bool bVar4;
  
  iVar1 = FUN_000366e0(_DAT_00032fe8);
  if (iVar1 != 0) {
    FUN_0002f9bc(_DAT_00032fe8);
    FUN_0002f9fc(6,s_MM__DISABLE_PORT_management_mess_00033110);
  }
  iVar1 = *(int *)(unaff_r5 + 0xc);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0x2a),*(undefined1 *)(iVar1 + 0x2b));
  if ((uVar2 == *(ushort *)(*unaff_r4 + 2)) || (uVar2 == DAT_000330c8)) {
    if ((*(byte *)(iVar1 + 0x2e) & 0xf) != 3) {
      FUN_0003b6a2(*(undefined2 *)(iVar1 + 0x34));
      FUN_0003b6a2(*(undefined2 *)(iVar1 + 0x1e));
      FUN_00035a48();
      iVar1 = FUN_000366e0();
      if (iVar1 != 0) {
        uVar3 = FUN_0002f9bc();
        FUN_00031c64(uVar3,_DAT_00033144);
        return;
      }
      goto LAB_0002fc58;
    }
    FUN_0002cbe0(*(undefined4 *)(*unaff_r4 + 4),0);
    uVar2 = FUN_0003b6a2(*(undefined2 *)(iVar1 + 0x34));
    unaff_r6 = uVar2 & 0xffff;
    FUN_0003b6a2(*(undefined2 *)(iVar1 + 0x1e));
    FUN_000352dc();
    uVar3 = _DAT_00032fe8;
    iVar1 = FUN_000366e0(_DAT_00032fe8);
    bVar4 = iVar1 == 0;
    if (!bVar4) {
      uVar3 = FUN_0002f9bc(uVar3);
      FUN_0002fdfe(uVar3,s___MM__DISABLE_PORT_acknowledge_m_00033145 + 3);
      return;
    }
  }
  else {
    iVar1 = FUN_000366e0();
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    uVar3 = FUN_0002f9bc(unaff_r6);
    FUN_00031c64(uVar3,DAT_00033140);
    return;
  }
LAB_0002fc58:
  FUN_000365f4();
  return;
}

