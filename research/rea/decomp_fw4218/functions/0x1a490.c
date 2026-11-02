// rea decompile_all
// name: FUN_0001a490
// address: 0x1a490
// body: available
// range: 0x1a490-0x1a5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a5c8 to 0x12bfc FUN_00012bfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a490(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar6 = *(uint *)(param_1 + 0x118);
  iVar9 = *param_2;
  uVar8 = (uint)*(ushort *)(param_2 + 1);
  *DAT_0001a5cc = uVar6;
  uVar2 = *(uint *)(iVar9 + 4);
  uVar4 = uVar2 - *(ushort *)(param_1 + 0x152);
  uVar5 = *(ushort *)(param_1 + 0x152) + uVar2;
  *DAT_0001a5d0 = uVar5;
  *DAT_0001a5d4 = uVar4;
  if (uVar5 < uVar4) {
    if (uVar6 <= uVar5 || uVar4 <= uVar6) goto LAB_0001a538;
  }
  else if (uVar4 <= uVar6 && uVar6 <= uVar5) goto LAB_0001a538;
  if (*(int *)(param_1 + 0x128) != 0) {
    local_30 = 2;
    local_2f = 0;
    local_2e = 0;
    local_2d = 2;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_001b2acc(*(undefined4 *)(param_1 + 0x128),&local_30);
  }
  *DAT_0001a5d8 = *DAT_0001a5d8 + 1;
  uVar6 = uVar2;
LAB_0001a538:
  *(uint *)(param_1 + 0x118) = uVar6 + uVar8;
  iVar3 = FUN_0001275c(*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140,uVar6);
  if (iVar3 != 0) {
    iVar7 = iVar9 + 0x14;
    while( true ) {
      uVar1 = *(ushort *)(param_1 + 0x132);
      uVar6 = 0;
      do {
        *(int *)(iVar3 + uVar6 * 4) = *(int *)(iVar7 + uVar6 * 4) << 8;
        uVar6 = uVar6 + 1 & 0xfffeffff;
      } while (uVar6 < uVar1);
      uVar8 = uVar8 - 1 & 0xffff;
      if (uVar8 == 0) break;
      iVar7 = iVar7 + (uint)*(ushort *)(param_1 + 0x12e) * 4;
      iVar3 = FUN_00012898(*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140);
    }
  }
  FUN_00012bfc(iVar9);
  return;
}

