// rea decompile_all
// name: FUN_0000ebc0
// address: 0xebc0
// body: available
// range: 0xebc0-0xef3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000ebc0(int *param_1,undefined4 param_2,undefined4 param_3)

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
  char local_30 [4];
  int *local_2c;
  
  iVar3 = param_1[2];
  FUN_001a0700();
  if ((char)param_1[9] != '\x02') goto LAB_0000ec04;
  if ((char)param_1[0xb] != '\0') goto LAB_0000ec1c;
  cVar1 = (char)param_1[3];
  if (cVar1 == '\0') {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,0);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000ec04;
  }
  iVar4 = FUN_0000aafc(param_1 + 1,param_2,param_3);
  if (iVar4 == 0) goto LAB_0000ec04;
  iVar4 = param_1[7];
  if (*(int *)(iVar4 + 4) == 0) goto LAB_0000ec04;
  if ((*(int *)(iVar4 + *(int *)(iVar4 + 4) * 0x14) == 1) &&
     (iVar9 = FUN_0000a674(param_1 + 1), iVar9 == 0xff)) {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000ec04;
  }
  if (param_1[0xe] < 0) goto LAB_0000ec04;
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
  uVar6 = FUN_00009e3c(param_1 + 1);
  piVar7 = (int *)FUN_00009290(param_1[2],uVar6);
  uVar6 = FUN_00009e44(param_1 + 1);
  local_30[0] = s________OutputDataStrmRun_0000e525[3];
  local_30[1] = s________OutputDataStrmRun_0000e525[4];
  local_30[2] = s________OutputDataStrmRun_0000e525[5];
  local_30[3] = s________OutputDataStrmRun_0000e525[6];
  local_2c = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc0))();
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,local_30,uVar6);
  FUN_001bb864(local_30);
  FUN_0008d9ac(param_1);
  if (cVar1 == '\x02') {
LAB_0000ee20:
    *(undefined1 *)(iVar4 + 0xd9) = 1;
  }
  else if (cVar1 == '\x04') {
    uVar2 = 2;
LAB_0000ee18:
    *(undefined1 *)(iVar4 + 0xd9) = uVar2;
  }
  else {
    if (cVar1 == '\b') goto LAB_0000ee20;
    if (cVar1 == '\n') {
      uVar2 = 3;
      goto LAB_0000ee18;
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
  iVar9 = FUN_0000b450(param_1 + 1);
  if (iVar9 == 0) {
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    iVar4 = FUN_0018e99c(iVar4);
    if (iVar4 == 0) {
      iVar4 = FUN_0018e5c0(param_1[7]);
      param_1[0xd0] = iVar4;
      *(undefined1 *)(param_1 + 0xb) = 1;
LAB_0000ec1c:
      FUN_001a0d18(iVar3 + 0x118);
      return 1;
    }
    piVar7 = (int *)param_1[0xf];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1,2);
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
LAB_0000ec04:
  FUN_001a0d18(iVar3 + 0x118);
  return 0;
}

