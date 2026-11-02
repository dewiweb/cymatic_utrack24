// rea decompile_all
// name: FUN_00116aec
// address: 0x116aec
// body: available
// range: 0x116aec-0x116c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00116aec(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_34;
  byte local_30 [16];
  undefined1 auStack_20 [20];
  
  piVar6 = (int *)*param_2;
  uVar5 = DAT_00116c78;
  if (param_2[1] - (int)piVar6 >> 2 == 2) {
    if (*(int *)(*piVar6 + -4) != 4) {
      FUN_00002898(DAT_00116c7c);
      return 4;
    }
    iVar10 = 0;
    uVar1 = 0;
    uVar4 = DAT_00116c88;
    if (*(int *)(piVar6[1] + -4) != 0) {
      do {
        uVar7 = (uint)*(byte *)(*(int *)(*param_2 + 4) + uVar1);
        uVar8 = uVar7 - 0x30;
        if (9 < uVar8) {
          if (uVar7 - 0x61 < 6) {
            uVar8 = uVar7 - 0x57;
          }
          else {
            uVar5 = DAT_00116c84;
            if (5 < uVar7 - 0x41) goto LAB_00116c54;
            uVar8 = uVar7 - 0x37;
          }
        }
        if ((uVar1 & 1) == 0) {
          local_30[iVar10] = (byte)((uVar8 & 0xff) << 4);
        }
        else {
          pbVar9 = local_30 + iVar10;
          iVar10 = iVar10 + 1;
          *pbVar9 = (byte)uVar8 | *pbVar9;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(*(int *)(*param_2 + 4) + -4));
      if (0 < iVar10) {
        local_34 = 0x10;
        uVar12 = FUN_001db914(*(undefined4 *)*param_2,auStack_20,&local_34);
        bVar11 = (int)uVar12 == 0;
        iVar3 = (int)((ulonglong)uVar12 >> 0x20);
        if (bVar11) {
          iVar3 = local_34;
        }
        if (bVar11 && iVar3 == iVar10) {
          for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
          }
          iVar3 = FUN_00003658(local_30,auStack_20,iVar10);
          if (iVar3 == 0) {
            return 1;
          }
        }
        iVar10 = FUN_001f4654(*(undefined4 *)*param_2,local_30,iVar10);
        uVar4 = DAT_00116c80;
        if (iVar10 == 0) {
          return 1;
        }
      }
    }
    FUN_00002898(uVar4);
  }
  else {
LAB_00116c54:
    FUN_00002898(uVar5);
  }
  return 4;
}

