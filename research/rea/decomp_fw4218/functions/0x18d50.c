// rea decompile_all
// name: FUN_00018d50
// address: 0x18d50
// body: available
// range: 0x18d50-0x18f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00018d50(int param_1,uint param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x12);
  bVar3 = false;
  uVar7 = (uint)uVar2;
  iVar9 = param_1 + param_2 * 0x24;
  if ((uVar2 & 0x80) != 0) {
    uVar7 = uVar7 & 0xffffff7f;
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(char *)(iVar5 + 0x12) = (char)uVar7;
    *(char *)(iVar5 + 0x13) = (char)(uVar2 >> 8);
    bVar3 = true;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    if (*(char *)(iVar9 + 0x208) == '\0') {
      FUN_00018a3c(param_1,param_2,3);
    }
    else if (*(code **)(iVar9 + 0x210) != entry) {
      (**(code **)(iVar9 + 0x210))(param_2,3,*(undefined4 *)(iVar9 + 0x20c));
    }
  }
  uVar8 = uVar7;
  if ((uVar7 & 2) != 0) {
    uVar8 = uVar7 & 0xfffffffd;
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(char *)(iVar5 + 0x12) = (char)uVar8;
    *(char *)(iVar5 + 0x13) = (char)(uVar7 >> 8);
    bVar3 = true;
  }
  uVar7 = uVar8 & 0xff;
  uVar1 = (undefined1)(uVar8 >> 8);
  if ((uVar8 & 0x20) == 0) {
    if ((uVar8 & 4) == 0) {
      bVar10 = (uVar8 & 1) == 0;
      if (bVar10) {
        uVar7 = (uint)*(byte *)(param_1 + 0x388);
      }
      if (bVar10 && uVar7 == param_2) {
        *(undefined1 *)(param_1 + 0x388) = 0xff;
        bVar3 = true;
        FUN_00018a3c(param_1,param_2,0);
      }
      goto LAB_00018f5c;
    }
    uVar8 = uVar8 & 0xfffffffb;
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(char *)(iVar5 + 0x12) = (char)uVar8;
    *(undefined1 *)(iVar5 + 0x13) = uVar1;
    bVar3 = true;
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + 1;
    if (*(char *)(iVar9 + 0x208) == '\0') {
      FUN_00018a3c(param_1,param_2,2);
      goto LAB_00018f5c;
    }
    pcVar6 = *(code **)(iVar9 + 0x210);
    uVar4 = 2;
  }
  else {
    uVar8 = uVar8 & 0xdf | 0x40;
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(char *)(iVar5 + 0x12) = (char)uVar8;
    *(undefined1 *)(iVar5 + 0x13) = uVar1;
    bVar3 = true;
    if (*(char *)(iVar9 + 0x208) == '\0') {
      FUN_00018a3c(param_1,param_2,1);
      goto LAB_00018f5c;
    }
    pcVar6 = *(code **)(iVar9 + 0x210);
    uVar4 = 1;
  }
  bVar3 = true;
  if (pcVar6 != entry) {
    bVar3 = true;
    (*pcVar6)(param_2,uVar4,*(undefined4 *)(iVar9 + 0x20c));
  }
LAB_00018f5c:
  if ((uVar8 & 1) != 0 || bVar3) {
    return;
  }
  if (*(char *)(iVar9 + 0x208) != '\0') {
    if (*(code **)(iVar9 + 0x210) != entry) {
                    /* WARNING: Could not recover jumptable at 0x00018f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar9 + 0x210))(param_2,0,*(undefined4 *)(iVar9 + 0x20c));
      return;
    }
    return;
  }
  return;
}

