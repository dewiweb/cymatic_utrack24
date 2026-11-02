// rea decompile_all
// name: FUN_0003b9d4
// address: 0x3b9d4
// body: available
// range: 0x3b9d4-0x3bc3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003b9d4(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_40;
  int local_3c;
  int *local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  int iStack_20;
  int *local_1c;
  int local_18;
  
  local_3c = 0;
  local_38[0] = &local_3c;
  local_18 = param_3;
  local_1c = param_2;
  iStack_20 = param_1;
  for (piVar3 = *(int **)(&DAT_00001fb8 + param_1); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if (((piVar3[0x21] == *DAT_0003bc40) || (piVar3[0x24] == *DAT_0003bc44)) ||
       ((piVar3[0x25] == *DAT_0003bc48 &&
        (((piVar3[0x26] == DAT_0003bc48[1] && (piVar3[0x27] == DAT_0003bc48[2])) &&
         (piVar3[0x28] == DAT_0003bc48[3])))))) {
      *(undefined1 *)((int)piVar3 + 0x7f) = 0;
    }
    else if ((*(char *)((int)piVar3 + 0x7f) != '\0') && (piVar3[0x21] == local_18)) {
      if (*local_1c == 4) {
        if (piVar3[0x24] == local_1c[1]) goto LAB_0003ba84;
      }
      else if (((*local_1c == 6) && (piVar3[0x25] == local_1c[1])) &&
              ((piVar3[0x26] == local_1c[2] &&
               ((piVar3[0x27] == local_1c[3] && (piVar3[0x28] == local_1c[4])))))) {
LAB_0003ba84:
        piVar3[0x21] = 0;
        *(undefined1 *)((int)piVar3 + 0x7f) = 0;
        puVar1 = DAT_0003bc50;
        piVar3[0x24] = *DAT_0003bc4c;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        piVar3[0x25] = *puVar1;
        piVar3[0x26] = uVar5;
        piVar3[0x27] = uVar6;
        piVar3[0x28] = uVar7;
        if ((piVar3[0x29] == 0) && (local_38[0] != piVar3 + 0x29)) {
          piVar3[0x2a] = 0xffffffff;
          *local_38[0] = (int)piVar3;
          local_38[0] = piVar3 + 0x29;
        }
      }
    }
  }
  FUN_0001a888(param_1,local_3c,local_38,local_18);
  if (local_3c == 0) {
    return;
  }
  local_30 = param_1 + DAT_0003bc54;
  local_2c = param_1 + DAT_0003bc58;
  local_28 = param_1 + DAT_0003bc5c;
  iVar8 = param_1 + DAT_0003bc60;
  iVar9 = param_1 + DAT_0003bc64;
LAB_0003bae6:
  local_40 = local_30;
  FUN_0002369c(iVar9,*DAT_0003bc6c,*DAT_0003bc68);
  while (iVar2 = local_3c, local_3c != 0) {
    if (*(int *)(local_3c + 0xa8) == 0) goto LAB_0003bb70;
    if ((*(byte *)(local_3c + 4) & 0x32) != 0) {
      *(ushort *)(local_3c + 8) = *(ushort *)(local_3c + 8) | 0x8000;
    }
    if (((*(short *)(iVar8 + 0x1a) != 0) || (*(short *)(iVar8 + 0x1c) != 0)) ||
       (iVar4 = DAT_0003bc70, *(short *)(iVar8 + 0x1e) != 0)) {
      iVar4 = 0x5a0;
    }
    iVar4 = FUN_000392b0(iVar9,local_40,local_2c,local_3c + 4,*(undefined4 *)(local_3c + 0xc),
                         iVar4 + param_1 + DAT_0003bc54);
    *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0x7fff;
    if ((iVar4 == 0) && (iVar4 = local_40, *(short *)(iVar8 + 0x1a) != 0)) goto LAB_0003bbfe;
    local_40 = iVar4;
    local_3c = *(int *)(iVar2 + 0xa4);
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined1 *)(iVar2 + 0x7c) = 1;
  }
  goto LAB_0003bc0c;
LAB_0003bbfe:
  while ((local_3c != 0 && (*(int *)(local_3c + 0xa8) == 0))) {
LAB_0003bb70:
    iVar2 = local_3c;
    if ((*(byte *)(local_3c + 4) & 0x32) != 0) {
      *(ushort *)(local_3c + 8) = *(ushort *)(local_3c + 8) | 0x8000;
    }
    if (((*(short *)(iVar8 + 0x1a) != 0) || (*(short *)(iVar8 + 0x1c) != 0)) ||
       (iVar4 = DAT_0003bc70, *(short *)(iVar8 + 0x1e) != 0)) {
      iVar4 = 0x5a0;
    }
    iVar4 = FUN_000392b0(iVar9,local_40,local_28,local_3c + 4,*(undefined4 *)(local_3c + 0xc),
                         iVar4 + param_1 + DAT_0003bc54);
    *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0x7fff;
    if ((iVar4 == 0) || (local_40 = iVar4, *(short *)(iVar8 + 0x1a) == 0)) {
      if ((*(byte *)(iVar2 + 4) & 0x32) != 0) {
        *(int *)(iVar2 + 0x84) = *DAT_0003bc40;
      }
    }
    else {
      *(undefined1 *)(iVar2 + 0x7c) = 1;
    }
    local_3c = *(int *)(iVar2 + 0xa4);
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
  }
LAB_0003bc0c:
  if (*(short *)(iVar8 + 0x1a) != 0) {
    FUN_0019569c(param_1,iVar9,local_40,local_18,0,local_1c,*DAT_0003bc74,0,0);
  }
  if (local_3c == 0) {
    return;
  }
  goto LAB_0003bae6;
}

