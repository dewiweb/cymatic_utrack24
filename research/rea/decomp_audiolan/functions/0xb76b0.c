// rea decompile_all
// name: FUN_000b76b0
// address: 0xb76b0
// body: available
// range: 0xb76b0-0xb792f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b76b0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [80];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  piVar1 = param_1 + 0x61;
  iVar2 = FUN_00157ac8();
  if (((iVar2 != 0) && (iVar3 = FUN_0015750c(param_1 + 0x66,param_3), iVar3 != 0)) && (param_4 == 0)
     ) {
    return 0;
  }
  iVar3 = FUN_00157450(param_3,*(undefined4 *)(param_2 + 0xc));
  uVar6 = DAT_000b7930;
  if (iVar3 == 0) {
LAB_000b77f0:
    FUN_000028a4(uVar6);
  }
  else {
    if (param_1[0x74] == 0) {
      return 2;
    }
    uVar4 = (**(code **)(*param_1 + 0x34))(param_1,1);
    if (param_1[0x74] != 0) {
      uStack_2c = 0;
      uStack_30 = DAT_000b7934;
      iVar3 = FUN_0008ab80(param_1,param_1[0x74],&uStack_30);
      uVar6 = DAT_000b7938;
      if (iVar3 == 0) goto LAB_000b77f0;
    }
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1,1);
    if (iVar3 != 0) {
      piVar7 = *(int **)(param_1[0x74] + 0x164);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x30))(piVar7,0);
        (**(code **)(*piVar7 + 0x14))(piVar7);
      }
      iVar3 = FUN_0003778c();
      uVar5 = 0;
      if (iVar3 != 0) {
        uVar5 = FUN_000377cc();
      }
      if (iVar2 == 0) {
        uVar5 = (uint)*(byte *)((int)param_1 + 0xf29);
      }
      if (iVar2 == 0 && uVar5 == 0) {
        iVar2 = *(int *)(param_2 + 0xc);
        if (param_1[100] != iVar2) {
          FUN_000872a8(piVar1,iVar2);
          iVar3 = FUN_000872b0(piVar1);
          if (iVar3 == 0) {
            thunk_FUN_000028a4(_DAT_000b793c);
          }
          iVar3 = (**(code **)(*param_1 + 0x60))(param_1,1,iVar2);
          if (iVar3 == 0) {
            return 2;
          }
          FUN_000028a4(s__________________________________000b793f + 1);
          FUN_000028a4(s_>>_setSampleRate__set_to__d_000b796c,iVar2);
          FUN_000028a4(s__________________________________000b793f + 1);
        }
        FUN_00087b9c(piVar1,param_2);
        FUN_000872b0(piVar1);
      }
      FUN_00084558(param_1 + 0x66,param_3);
      FUN_000d9c50(auStack_40);
      FUN_0008b520(param_1,auStack_40,6,param_1[100]);
      FUN_000cae8c(auStack_a0,param_1 + 0x60,auStack_40,0);
      iVar2 = FUN_0008ab80(param_1,param_1[0x74],auStack_a0);
      uVar6 = DAT_000b798c;
      if (iVar2 == 0) {
        FUN_000028a4(DAT_000b7990);
      }
      else {
        iVar2 = FUN_000b84e0(param_1,uVar4);
        if (iVar2 != 0) {
          auStack_a0[0] = uVar6;
          FUN_00085a08(auStack_90);
          FUN_000d9c80(auStack_40);
          return 1;
        }
      }
      auStack_a0[0] = uVar6;
      FUN_00085a08(auStack_90);
      FUN_000d9c80(auStack_40);
    }
  }
  return 2;
}

