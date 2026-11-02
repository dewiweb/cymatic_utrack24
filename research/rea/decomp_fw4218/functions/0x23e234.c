// rea decompile_all
// name: FUN_0023e234
// address: 0x23e234
// body: available
// range: 0x23e234-0x23e40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023e234(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint local_30;
  int *piStack_2c;
  uint local_28;
  
  local_28 = param_2;
  piStack_2c = param_1;
  puVar2 = &local_30;
  if (DAT_0023e410 < param_2) {
    local_30 = DAT_0023e410;
    FUN_00173800(8,DAT_0023e414);
  }
  uVar10 = param_1[2] - *param_1;
  iVar11 = (int)((longlong)(int)uVar10 * (longlong)DAT_0023e418 + ((ulonglong)uVar10 << 0x20) >>
                0x20);
  if (local_28 <= (uint)((iVar11 >> 4) - (iVar11 >> 0x1f))) {
    return;
  }
  uVar10 = param_1[1] - *param_1;
  iVar11 = (int)((longlong)(int)uVar10 * (longlong)DAT_0023e418 + ((ulonglong)uVar10 << 0x20) >>
                0x20);
  uVar10 = (iVar11 >> 4) - (iVar11 >> 0x1f);
  local_30 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
  if (local_30 < uVar10 + 1) {
    local_30 = uVar10 + 1;
  }
  if (local_30 <= local_28) {
    puVar2 = &local_28;
  }
  uVar10 = *puVar2;
  puVar1 = (undefined4 *)FUN_00173860(uVar10 * 0x1c,0);
  iVar4 = DAT_0023e41c;
  iVar6 = param_1[1];
  puVar5 = puVar1;
  for (iVar11 = *param_1; iVar11 != iVar6; iVar11 = iVar11 + 0x1c) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0xff;
      puVar5[5] = 0;
      puVar5[4] = iVar4;
      *(undefined1 *)(puVar5 + 6) = 0xff;
      FUN_00148a10(puVar5,iVar11);
    }
    puVar5 = puVar5 + 7;
  }
  piVar9 = (int *)param_1[1];
  iVar11 = DAT_0023e418;
  for (piVar7 = (int *)*param_1; DAT_0023e418 = iVar11, piVar7 != piVar9; piVar7 = piVar7 + 7) {
    piVar7[4] = iVar4;
    FUN_001eecc8(piVar7[5]);
    puVar8 = (undefined4 *)piVar7[1];
    for (puVar5 = (undefined4 *)*piVar7; puVar5 != puVar8; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5);
    }
    FUN_00173a54(*piVar7,piVar7[2] - *piVar7 >> 4,0);
    iVar11 = DAT_0023e418;
  }
  uVar3 = param_1[2] - *param_1;
  iVar4 = (int)((longlong)(int)uVar3 * (longlong)iVar11 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  FUN_00173a54(*param_1,(iVar4 >> 4) - (iVar4 >> 0x1f),0);
  iVar4 = *param_1;
  *param_1 = (int)puVar1;
  iVar11 = (int)((longlong)(param_1[1] - iVar4) * (longlong)iVar11 +
                 ((ulonglong)(uint)(param_1[1] - iVar4) << 0x20) >> 0x20);
  param_1[1] = (int)(puVar1 + ((iVar11 >> 4) - (iVar11 >> 0x1f)) * 7);
  param_1[2] = (int)(puVar1 + uVar10 * 7);
  return;
}

