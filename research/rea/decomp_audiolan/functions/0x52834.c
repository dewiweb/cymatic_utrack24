// rea decompile_all
// name: FUN_00052834
// address: 0x52834
// body: available
// range: 0x52834-0x52b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x52b4c to 0x52444 FUN_00052444 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00052834(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint extraout_r1;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar4 = DAT_00052b50;
  if ((*(char *)(DAT_00052b50 + 1) != '\0') || (*(char *)((int)param_1 + 0x5a) == '\0')) {
    if (*(char *)(DAT_00052b50 + 1) == '\0') {
      uVar6 = 2;
    }
    else {
      uVar6 = 3;
    }
    FUN_00052444(param_1,uVar6,0);
    return;
  }
  if (param_1[6] == 0) {
    uVar9 = (uint)*(byte *)((int)param_1 + 0x55);
    if (uVar9 != 0) {
      if ((param_1[0x14] != param_5) &&
         (FUN_00006158(param_5,uVar9), extraout_r1 != *(byte *)((int)param_1 + 0x56))) {
        return;
      }
      param_1[0x14] = param_5 + uVar9;
    }
    iVar3 = param_1[0x19];
    param_1[0x19] = iVar3 + 1;
    param_1[0x1b] = param_4;
    *(short *)(param_1 + 0x1a) = (short)(iVar3 + 1);
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      iVar3 = param_1[param_1[7] + 3];
      if (iVar3 == 0) {
        return;
      }
      if (1 < *(ushort *)(iVar3 + 0xe)) {
        return;
      }
      iVar8 = *(int *)(iVar3 + 4);
      iVar7 = 0;
      uVar9 = *(ushort *)(iVar4 + 2) + 1 & 0xfffeffff;
      iVar10 = uVar9 + 1;
      *(short *)(iVar4 + 2) = (short)iVar10;
      *(char *)(iVar8 + 0x14) = (char)(uVar9 >> 8);
      *(char *)(iVar8 + 0x15) = (char)((uint)(iVar10 * 0x100) >> 8);
      *(undefined1 *)(iVar8 + 0x1a) = 0;
      iVar10 = 0;
      iVar4 = 5;
      puVar5 = (ushort *)(iVar8 + 0xe);
      *(undefined1 *)(iVar8 + 0x1b) = 0;
      do {
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + (uint)*puVar1;
        iVar10 = iVar10 + (uint)*puVar5;
      } while (iVar4 != 0);
      uVar9 = (iVar7 + iVar10 & 0xffffU) + ((uint)(iVar7 + iVar10) >> 0x10);
      uVar9 = ~(uVar9 + (uVar9 >> 0x10));
      *(char *)(iVar8 + 0x1a) = (char)uVar9;
      *(char *)(iVar8 + 0x1b) = (char)(uVar9 >> 8);
      param_1[6] = *(int *)(iVar3 + 4) + 0x2c;
    }
    else {
      iVar4 = FUN_0019d000(param_1[2],*(undefined2 *)((int)param_1 + 0x5e));
      param_1[6] = iVar4;
      if (iVar4 == 0) {
        return;
      }
    }
    uVar9 = param_1[0x1a];
    *(uint *)param_1[6] =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = param_1[0x1b];
    *(uint *)(param_1[6] + 4) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = param_1[0x1c];
    *(uint *)(param_1[6] + 8) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  if ((char)param_1[0x16] == '\0') {
    (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  }
  uVar2 = *(ushort *)(param_1 + 0x18);
  *(short *)(param_1 + 0x18) = (short)(((uint)uVar2 + param_3) * 0x10000 >> 0x10);
  if ((uint)*(ushort *)((int)param_1 + 0x26) <= ((uint)uVar2 + param_3 & 0xffff)) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      uVar9 = param_1[7] + 1;
      iVar4 = param_1[param_1[7] + 3];
      param_1[7] = uVar9;
      if (2 < uVar9) {
        param_1[7] = 0;
      }
      FUN_001aa408(iVar4);
      FUN_001abc94(1,iVar4);
      FUN_00052444(param_1,0);
    }
    else if ((char)param_1[0x17] == '\0') {
      *(undefined1 *)(param_1[1] + 8) = 0;
      FUN_0019e1b0(param_1[1],param_1[2],param_1 + 0xc,(short)param_1[0xe]);
      FUN_00052444(param_1,1,0);
    }
    else {
      FUN_0019d1e8(param_1[2]);
      FUN_00052444(param_1,3,0);
    }
    param_1[6] = 0;
    return;
  }
  return;
}

