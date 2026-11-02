// rea decompile_all
// name: FUN_000182c0
// address: 0x182c0
// body: available
// range: 0x17e54-0x17f37 inclusive
// range: 0x182c0-0x18437 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17f34 to 0x14b7c FUN_00014b7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000182c0(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *extraout_r2;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  piVar3 = DAT_00018804;
  *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) - (char)param_2;
  uVar2 = *(ushort *)(param_1 + 0x26);
  bVar4 = *(byte *)(param_1 + 0x2e);
  uVar11 = (uint)uVar2 * param_2;
  *piVar3 = param_2 + *piVar3;
  iVar7 = (uint)bVar4 * (uint)uVar2 * 4 + 0x14;
  *(byte *)(param_1 + 0x2e) = bVar4 + (char)param_2;
  uVar5 = uVar11 * 4;
  if (0x80 < uVar5) {
    iVar7 = iVar7 + *(int *)(param_1 + 0x3c);
    *(int *)(DAT_00018808 + 0xc) = *(int *)(DAT_00018808 + 0xc) + 1;
    piVar3 = DAT_0001880c;
    iVar6 = *(int *)(param_1 + 0xc);
    *(int *)(iVar6 + 0x18) = iVar7;
    *(int *)(*piVar3 + *(int *)(iVar6 + 4) * 0x40 + 0xc) = iVar7;
    iVar7 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 0xa0) + (uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20;
    *(int *)(iVar7 + 0x1c) = iVar6;
    *(int *)(*piVar3 + *(int *)(iVar7 + 4) * 0x40 + 8) = iVar6;
    iVar7 = *(int *)(param_1 + 0xc);
    if (*(char *)(iVar7 + 0xc) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x18),uVar5);
    }
    if (*(char *)(iVar7 + 0xd) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x1c),uVar5);
    }
    *(uint *)(*DAT_00018810 + *(int *)(iVar7 + 4) * 4 + 0x400) =
         uVar5 >> *(sbyte *)(iVar7 + 0x20) & 0xffff | *(int *)(iVar7 + 0x14) << 0x10;
    return;
  }
  uVar11 = uVar11 & 0x3fffffff;
  puVar8 = (undefined4 *)(iVar7 + *(int *)(param_1 + 0x3c));
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xa0) + (uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20);
  puVar9 = puVar8;
  if (uVar11 < 0x80000000) {
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    iVar7 = 1;
    if (1 < uVar11 + 1) {
      do {
        puVar8 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        *puVar10 = *puVar9;
        puVar9 = puVar8;
      } while (iVar7 < (int)(uVar11 + 1));
    }
  }
  else {
    do {
      puVar8 = puVar9 + 1;
      uVar11 = uVar11 - 1;
      *puVar10 = *puVar9;
      puVar9 = puVar8;
    } while (uVar11 != 0);
  }
  cVar1 = *(char *)(param_1 + 0x2d);
  if (cVar1 == '\0') {
    FUN_001b714c(&stack0xffffffe8);
    *(byte *)(*(int *)(param_1 + 0xa0) + 0x12) = *(byte *)(*(int *)(param_1 + 0xa0) + 0x12) | 1;
    FUN_001b7160(puVar10);
    *(int *)(DAT_000182ac + 4) = *(int *)(DAT_000182ac + 4) + 1;
    puVar8 = extraout_r2;
  }
  iVar7 = 0;
  if (*(char *)(param_1 + 0x2e) == *(char *)(param_1 + 4)) {
    iVar7 = *(int *)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x2e) = 0;
    bVar4 = *(char *)(param_1 + 0x33) - 1;
    uVar5 = (uint)bVar4;
    uVar11 = 0;
    if (uVar5 != 0) {
      puVar8 = (undefined4 *)0x0;
    }
    *(byte *)(param_1 + 0x33) = bVar4;
    if (uVar5 != 0) {
      do {
        iVar6 = param_1 + (int)puVar8 * 4;
        uVar5 = uVar5 - 1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(iVar6 + 0x40);
      } while (uVar5 != 0);
      uVar11 = (uint)*(byte *)(param_1 + 0x33);
    }
    *(undefined4 *)(param_1 + uVar11 * 4 + 0x3c) = 0;
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    FUN_000182c0(param_1,cVar1);
  }
  if (iVar7 != 0) {
    FUN_00014b7c(iVar7);
    return;
  }
  return;
}

