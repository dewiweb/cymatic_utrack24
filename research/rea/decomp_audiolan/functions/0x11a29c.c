// rea decompile_all
// name: FUN_0011a29c
// address: 0x11a29c
// body: available
// range: 0x11a29c-0x11a47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11a46c to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011a29c(int param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_r2;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  FUN_001179e0();
  if (param_3 == 0) goto LAB_0011a418;
  piVar7 = (int *)(param_1 + 0x58);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  uVar4 = (uint)*(ushort *)(param_1 + 0x5c);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar4 & 1;
    bVar8 = (*(ushort *)(param_1 + 0x5c) & 1) != 0;
    iVar5 = extraout_r2;
    if (bVar8) {
      iVar5 = *piVar7;
    }
    uVar6 = 0;
    if (bVar8) {
      do {
        if (*(int *)(iVar5 + uVar6 * 4) == param_3) goto LAB_0011a348;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar2);
    }
  }
  if (uVar2 < uVar4) {
    do {
      uVar6 = uVar2;
      if (*(int *)(*piVar7 + uVar2 * 4) == param_3) goto LAB_0011a348;
      if (*(int *)(*piVar7 + uVar2 * 4 + 4) == param_3) {
        uVar6 = uVar2 + 1;
        goto LAB_0011a348;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar4);
  }
LAB_0011a350:
  if (*(ushort *)(param_1 + 0x5e) <= uVar4) {
    puVar3 = (undefined4 *)FUN_0016d774((uint)*(ushort *)(param_1 + 0x5e) * 4 + 0x28,DAT_0011a480);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0011a410;
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)(param_1 + 0x5c);
      if (uVar1 != 0) {
        uVar4 = uVar1 & 1;
        bVar8 = (uVar1 & 1) != 0;
        if (bVar8) {
          *puVar3 = *(undefined4 *)*piVar7;
        }
        uVar2 = (uint)bVar8;
        if (uVar4 < *(ushort *)(param_1 + 0x5c)) {
          do {
            uVar4 = uVar4 + 2;
            puVar3[uVar2] = *(undefined4 *)(*piVar7 + uVar2 * 4);
            puVar3[uVar2 + 1] = *(undefined4 *)(*piVar7 + (uVar2 + 1) * 4);
            uVar2 = uVar2 + 2;
          } while ((int)uVar4 < (int)(uint)*(ushort *)(param_1 + 0x5c));
        }
      }
      FUN_0016d758(*piVar7);
    }
    *piVar7 = (int)puVar3;
    *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 10;
  }
  *(int *)(*piVar7 + (uint)*(ushort *)(param_1 + 0x5c) * 4) = param_3;
  *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + 1;
  goto LAB_0011a410;
LAB_0011a348:
  if ((int)uVar6 < 0) goto LAB_0011a350;
LAB_0011a410:
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x50);
LAB_0011a418:
  param_2 = *(ushort *)(param_1 + 0x60) | param_2;
  *(ushort *)(param_1 + 0x60) = param_2;
  FUN_00116ff0(*(int *)(param_1 + 0x24) + 0x1e0,param_1 + 100,DAT_0011a488,param_2,0,0,0,0,
               DAT_0011a484);
  FUN_001179d0(param_1);
  return;
}

