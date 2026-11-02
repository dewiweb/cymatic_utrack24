// rea decompile_all
// name: FUN_0002d304
// address: 0x2d304
// body: available
// range: 0x2d304-0x2d425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002d23c) */
/* WARNING: Removing unreachable block (ram,0x0002d2a2) */
/* WARNING: Removing unreachable block (ram,0x0002cb38) */
/* WARNING: Removing unreachable block (ram,0x0002d2fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d304(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  bool bVar4;
  
  iVar1 = FUN_00030b90(_DAT_0002d498);
  if (iVar1 != 0) {
    FUN_00029e6c(_DAT_0002d498);
    FUN_00029eac(6,s_MM__DISABLE_PORT_management_mess_0002d5c0);
  }
  iVar1 = *(int *)(unaff_r5 + 0xc);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0x2a),*(undefined1 *)(iVar1 + 0x2b));
  if ((uVar2 == *(ushort *)(*unaff_r4 + 2)) || (uVar2 == DAT_0002d578)) {
    if ((*(byte *)(iVar1 + 0x2e) & 0xf) != 3) {
      FUN_000358f6(*(undefined2 *)(iVar1 + 0x34));
      FUN_000358f6(*(undefined2 *)(iVar1 + 0x1e));
      FUN_0002fef8();
      iVar1 = FUN_00030b90();
      if (iVar1 != 0) {
        uVar3 = FUN_00029e6c();
        FUN_0002c114(uVar3,_DAT_0002d5f4);
        return;
      }
      goto LAB_0002a108;
    }
    FUN_00027070(*(undefined4 *)(*unaff_r4 + 4),0);
    uVar2 = FUN_000358f6(*(undefined2 *)(iVar1 + 0x34));
    unaff_r6 = uVar2 & 0xffff;
    FUN_000358f6(*(undefined2 *)(iVar1 + 0x1e));
    FUN_0002f78c();
    uVar3 = _DAT_0002d498;
    iVar1 = FUN_00030b90(_DAT_0002d498);
    bVar4 = iVar1 == 0;
    if (!bVar4) {
      uVar3 = FUN_00029e6c(uVar3);
      FUN_0002a2ae(uVar3,s___MM__DISABLE_PORT_acknowledge_m_0002d5f6 + 2);
      return;
    }
  }
  else {
    iVar1 = FUN_00030b90();
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    uVar3 = FUN_00029e6c(unaff_r6);
    FUN_0002c114(uVar3,DAT_0002d5f0);
    return;
  }
LAB_0002a108:
  FUN_00030aa4();
  return;
}

