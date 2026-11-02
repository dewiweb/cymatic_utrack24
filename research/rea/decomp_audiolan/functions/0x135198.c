// rea decompile_all
// name: FUN_00135198
// address: 0x135198
// body: available
// range: 0x135198-0x13532f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13531c to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135198(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r3;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *(int *)(param_1 + 0x24);
  FUN_001a0700(iVar8 + 0x14);
  if (param_2 == 0) goto LAB_00135314;
  piVar7 = (int *)(param_1 + 0x11c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x110);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  uVar5 = (uint)*(ushort *)(param_1 + 0x120);
  if (uVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar5 & 1;
    bVar9 = (*(ushort *)(param_1 + 0x120) & 1) != 0;
    iVar6 = extraout_r3;
    if (bVar9) {
      iVar6 = *piVar7;
    }
    uVar2 = 0;
    if (bVar9) {
      do {
        if (*(int *)(iVar6 + uVar2 * 4) == param_2) goto LAB_00135244;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar4);
    }
  }
  uVar2 = uVar4;
  if (uVar2 < uVar5) {
    do {
      if (*(int *)(*piVar7 + uVar2 * 4) == param_2) goto LAB_00135244;
      if (*(int *)(*piVar7 + uVar2 * 4 + 4) == param_2) {
        uVar2 = uVar2 + 1;
        goto LAB_00135244;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar5);
  }
LAB_0013524c:
  if (*(ushort *)(param_1 + 0x122) <= uVar5) {
    puVar3 = (undefined4 *)FUN_0016d774((uint)*(ushort *)(param_1 + 0x122) * 4 + 0x28,DAT_00135330);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0013530c;
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)(param_1 + 0x120);
      if (uVar1 != 0) {
        uVar5 = uVar1 & 1;
        bVar9 = (uVar1 & 1) != 0;
        if (bVar9) {
          *puVar3 = *(undefined4 *)*piVar7;
        }
        uVar4 = (uint)bVar9;
        if (uVar5 < *(ushort *)(param_1 + 0x120)) {
          do {
            uVar5 = uVar5 + 2;
            puVar3[uVar4] = *(undefined4 *)(*piVar7 + uVar4 * 4);
            puVar3[uVar4 + 1] = *(undefined4 *)(*piVar7 + (uVar4 + 1) * 4);
            uVar4 = uVar4 + 2;
          } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0x120));
        }
      }
      FUN_0016d758(*piVar7);
    }
    *piVar7 = (int)puVar3;
    *(short *)(param_1 + 0x122) = *(short *)(param_1 + 0x122) + 10;
  }
  *(int *)(*piVar7 + (uint)*(ushort *)(param_1 + 0x120) * 4) = param_2;
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + 1;
  goto LAB_0013530c;
LAB_00135244:
  if ((int)uVar2 < 0) goto LAB_0013524c;
LAB_0013530c:
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x114);
LAB_00135314:
  FUN_001a0d18(iVar8 + 0x14);
  return;
}

