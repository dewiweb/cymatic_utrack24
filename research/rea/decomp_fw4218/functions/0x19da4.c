// rea decompile_all
// name: FUN_00019da4
// address: 0x19da4
// body: available
// range: 0x18f94-0x1917f inclusive
// range: 0x19da4-0x19ed3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1906c to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x190a8 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19124 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19ed0 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019da4(int param_1)

{
  ushort *puVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r1;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar6 = 0xb0000000;
  uVar4 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x12);
  uVar9 = (uint)uVar4;
  if (*(int *)(param_1 + 0x314) == 0) {
    if ((uVar4 & 0x10) != 0) {
      uVar8 = uVar9 & 0xff | 0x80;
      uVar9 = uVar9 & 0xffffff00 | uVar8;
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(char *)(iVar7 + 0x12) = (char)uVar8;
      *(char *)(iVar7 + 0x13) = (char)(uVar4 >> 8);
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
    }
    if ((uVar9 & 4) == 0) {
      bVar10 = (uVar9 & 2) == 0;
      if (bVar10) {
        uVar6 = (uint)*(byte *)(param_1 + 0x388);
      }
      if (bVar10 && uVar6 == 0) {
        *(undefined1 *)(param_1 + 0x388) = 0xff;
        FUN_00018a3c(param_1,0);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(char *)(iVar7 + 0x12) = (char)(uVar9 & 0xfffffff9);
      *(char *)(iVar7 + 0x13) = (char)(uVar9 >> 8);
      cVar2 = *(char *)(param_1 + 0x389);
      bVar10 = cVar2 == -1;
      if (bVar10) {
        cVar2 = *(char *)(param_1 + 0x388);
      }
      if (bVar10 && cVar2 == '\0') {
        FUN_00018a3c(param_1,0,1);
      }
      *(undefined1 *)(param_1 + 0x388) = 0xff;
      *(undefined1 *)(param_1 + 0x389) = 0xff;
      uVar9 = uVar9 & 0xfffffff9;
    }
    if ((uVar9 & 1) != 0) {
      FUN_000189a8(param_1,0,6);
      return;
    }
    return;
  }
  puVar1 = (ushort *)(*(int *)(param_1 + 0x4c8) + 0x12);
  uVar4 = *puVar1;
  uVar6 = (uint)*(byte *)puVar1;
  uVar9 = (uint)uVar4;
  if ((uVar4 & 0x80) != 0) {
    uVar9 = uVar9 & 0xffffff7f;
    iVar7 = *(int *)(param_1 + 0x4c8);
    *(char *)(iVar7 + 0x12) = (char)uVar9;
    *(char *)(iVar7 + 0x13) = (char)(uVar4 >> 8);
    FUN_000189a8(param_1,0,3);
    uVar6 = extraout_r1;
  }
  uVar3 = (undefined1)(uVar9 >> 8);
  bVar5 = (byte)uVar9;
  if ((uVar9 & 0x10) != 0) {
    if ((uVar9 & 0x20) == 0) {
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar7 + 0x12) = bVar5 & 0xef;
      *(undefined1 *)(iVar7 + 0x13) = uVar3;
      FUN_000189a8(param_1,0,8);
      return;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x388);
    if (uVar6 == 0) {
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar7 + 0x12) = bVar5 & 0xef;
      *(undefined1 *)(iVar7 + 0x13) = uVar3;
      FUN_00018a3c(param_1,0,2);
      *(undefined1 *)(param_1 + 0x388) = 0xff;
      return;
    }
  }
  if ((uVar9 & 4) != 0) {
    if ((uVar9 & 0x20) == 0) {
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar7 + 0x12) = bVar5 & 0xfb;
      *(undefined1 *)(iVar7 + 0x13) = uVar3;
      FUN_000189a8(param_1,0,7);
      return;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x388);
    if (uVar6 == 0) {
      iVar7 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar7 + 0x12) = bVar5 & 0xfb;
      *(undefined1 *)(iVar7 + 0x13) = uVar3;
      FUN_00018a3c(param_1,0,1);
      *(undefined1 *)(param_1 + 0x388) = 0xff;
      return;
    }
  }
  bVar10 = (uVar9 & 2) == 0;
  if (bVar10) {
    uVar6 = (uint)*(byte *)(param_1 + 0x388);
  }
  if (bVar10 && uVar6 == 0) {
    FUN_00018a3c(param_1,0);
    *(undefined1 *)(param_1 + 0x388) = 0xff;
    return;
  }
  if ((uVar9 & 1) != 0) {
    FUN_000189a8(param_1,0,6);
    return;
  }
  return;
}

