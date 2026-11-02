// rea decompile_all
// name: FUN_0012d9c4
// address: 0x12d9c4
// body: available
// range: 0x12d9c4-0x12dac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0012d9c4(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  uint local_18;
  
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0x12dacc;
  uStack_20 = param_1;
  puStack_1c = param_2;
  local_18 = param_3;
  if (param_3 != 0) {
    iVar1 = FUN_00003d18(*param_2,&DAT_0012dad4);
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else {
      iVar1 = FUN_00003d18(*param_2,&DAT_0012dad8);
      if (iVar1 == 0) {
        uVar6 = 1;
      }
      else {
        uVar4 = *param_2;
      }
    }
    if (1 < local_18) {
      iVar1 = FUN_00003d18(param_2[1],&DAT_0012dad4);
      if (iVar1 == 0) {
        uVar5 = 1;
      }
      else {
        iVar1 = FUN_00003d18(param_2[1],&DAT_0012dad8);
        if (iVar1 == 0) {
          uVar6 = 1;
        }
        else {
          uVar4 = param_2[1];
        }
      }
    }
    if (2 < local_18) {
      uVar4 = param_2[2];
    }
  }
  local_54 = (int *)0x0;
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  piVar3 = (int *)*_DAT_0012dadc;
  uVar2 = FUN_00201f28(auStack_38,0);
  uVar2 = FUN_001aaf10(auStack_48,uVar4,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,uVar2,&local_54);
  FUN_001aafac(auStack_48);
  FUN_00201f54(auStack_38);
  uVar2 = DAT_0012db08;
  if (iVar1 != 0) {
    if (local_54 != (int *)0x0) {
      FUN_001f00bc();
      (**(code **)(*local_54 + 0x38))(local_54,1,uVar5,uVar6,0,0,0);
      FUN_001f06d4(uVar2);
    }
    if (local_54 != (int *)0x0) {
      FUN_000f0fa8();
    }
    return 0;
  }
  FUN_00002898(s____Could_NOT_retrieve_path___s__f_0012dadd + 3,uVar4);
  if (local_54 != (int *)0x0) {
    FUN_000f0fa8();
  }
  return 1;
}

