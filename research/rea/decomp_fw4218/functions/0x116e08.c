// rea decompile_all
// name: FUN_00116e08
// address: 0x116e08
// body: available
// range: 0x116e08-0x116f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00116e08(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint local_30 [3];
  int local_24 [2];
  uint local_1c [3];
  
  iVar1 = param_2[1] - *param_2 >> 2;
  if (iVar1 == 1) {
    iVar1 = FUN_000466b0(*(undefined4 *)*param_2,local_30);
    if (iVar1 != 0) {
      FUN_00046b8c(local_30[0]);
      return 1;
    }
    iVar1 = FUN_00048b88(*(undefined4 *)*param_2,&DAT_00116f84);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = *(int *)*param_2;
    uVar2 = DAT_00116f88;
  }
  else {
    uVar2 = DAT_00116f80;
    if (iVar1 == 2) {
      local_24[0] = DAT_00116f8c;
      iVar1 = FUN_00048ba0(*(undefined4 *)*param_2,local_24);
      if (iVar1 == 0) {
        iVar1 = FUN_00048b88(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
        if (iVar1 != 0) goto LAB_00116f50;
        uVar4 = *(undefined4 *)*param_2;
        uVar6 = ((undefined4 *)*param_2)[1];
        uVar2 = DAT_00116f94;
      }
      else {
        piVar7 = (int *)(*param_2 + 4);
        uVar3 = *(uint *)(local_24[0] + -4);
        if (uVar3 == *(uint *)(*piVar7 + -4)) {
          local_30[0] = uVar3;
          local_1c[0] = *(uint *)(*piVar7 + -4);
          puVar5 = local_30;
          if (*(uint *)(*piVar7 + -4) < uVar3) {
            puVar5 = local_1c;
          }
          iVar1 = FUN_00003658(local_24[0],*piVar7,*puVar5);
          if ((iVar1 == 0) && (*(int *)(local_24[0] + -4) == *(int *)(*piVar7 + -4)))
          goto LAB_00116f50;
        }
        iVar1 = FUN_00048c38(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
        if (iVar1 != 0) {
LAB_00116f50:
          FUN_002329f0(local_24);
          return 1;
        }
        uVar4 = *(undefined4 *)*param_2;
        uVar6 = ((undefined4 *)*param_2)[1];
        uVar2 = DAT_00116f90;
      }
      FUN_00002898(uVar2,uVar4,uVar6);
      FUN_002329f0(local_24);
      return 4;
    }
  }
  FUN_00002898(uVar2,iVar1);
  return 4;
}

