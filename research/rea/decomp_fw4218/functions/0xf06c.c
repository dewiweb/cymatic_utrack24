// rea decompile_all
// name: FUN_0000f06c
// address: 0xf06c
// body: available
// range: 0xf06c-0xf3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000f06c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_30;
  int *local_2c;
  
  iVar3 = param_1[2];
  FUN_001f00bc();
  if ((char)param_1[9] != '\x02') goto LAB_0000f0b0;
  if ((char)param_1[0xb] != '\0') goto LAB_0000f0c8;
  cVar1 = (char)param_1[3];
  if (cVar1 == '\0') {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,0);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000f0b0;
  }
  iVar4 = FUN_0000afa8(param_1 + 1,param_2,param_3);
  if (iVar4 == 0) goto LAB_0000f0b0;
  iVar4 = param_1[7];
  if (*(int *)(iVar4 + 4) == 0) goto LAB_0000f0b0;
  if ((*(int *)(iVar4 + *(int *)(iVar4 + 4) * 0x14) == 1) &&
     (iVar9 = FUN_0000ab20(param_1 + 1), iVar9 == 0xff)) {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000f0b0;
  }
  if (param_1[0xe] < 0) goto LAB_0000f0b0;
  uVar5 = 0;
  if (*(int *)(iVar4 + 4) != 0) {
    do {
      iVar8 = iVar4 + uVar5 * 0x14;
      iVar9 = *(int *)(iVar8 + 0xc);
      uVar5 = uVar5 + 1;
      bVar10 = iVar9 != 4;
      if (bVar10) {
        iVar9 = *(int *)(iVar8 + 0x14);
      }
      if (bVar10 && iVar9 != 4) {
        iVar9 = param_1[0xc];
      }
      else {
        iVar9 = param_1[0xd];
      }
      *(int *)(iVar8 + 8) = iVar9;
    } while (uVar5 < *(uint *)(iVar4 + 4));
  }
  if ((param_1[7] != 0) && (*(char *)(param_1[7] + 0x65) == '\0')) {
    *(undefined1 *)(iVar4 + 0xb2) = *(undefined1 *)((int)param_1 + 0x332);
  }
  uVar6 = FUN_0000a2e8(param_1 + 1);
  piVar7 = (int *)FUN_0000973c(param_1[2],uVar6);
  uVar6 = FUN_0000a2f0(param_1 + 1);
  local_30 = _DAT_0000e9d4;
  local_2c = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc0))();
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,&local_30,uVar6);
  FUN_00203b04(&local_30);
  FUN_000b5ea4(param_1);
  if (cVar1 == '\x02') {
LAB_0000f2cc:
    *(undefined1 *)(iVar4 + 0xd9) = 1;
  }
  else if (cVar1 == '\x04') {
    uVar2 = 2;
LAB_0000f2c4:
    *(undefined1 *)(iVar4 + 0xd9) = uVar2;
  }
  else {
    if (cVar1 == '\b') goto LAB_0000f2cc;
    if (cVar1 == '\n') {
      uVar2 = 3;
      goto LAB_0000f2c4;
    }
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined1 *)(iVar4 + 0xd9));
  uVar5 = 0;
  if (*(uint *)(iVar4 + 4) != 0) {
    do {
      iVar9 = iVar4 + uVar5 * 0x14;
      bVar10 = *(int *)(iVar9 + 0xc) == 8;
      if (!bVar10) {
        iVar9 = *(int *)(iVar9 + 0x14);
      }
      if (bVar10 || iVar9 == 8) {
        (**(code **)(*param_1 + 0x1c4))(param_1);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar4 + 4));
  }
  iVar9 = FUN_0000b8fc(param_1 + 1);
  if (iVar9 == 0) {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    iVar4 = FUN_001df75c(iVar4);
    if (iVar4 == 0) {
      iVar4 = FUN_001df380(param_1[7]);
      param_1[0xd0] = iVar4;
      *(undefined1 *)(param_1 + 0xb) = 1;
LAB_0000f0c8:
      FUN_001f06d4(iVar3 + 0x118);
      return 1;
    }
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
LAB_0000f0b0:
  FUN_001f06d4(iVar3 + 0x118);
  return 0;
}

