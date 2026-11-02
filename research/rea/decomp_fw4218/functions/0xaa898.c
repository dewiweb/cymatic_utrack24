// rea decompile_all
// name: FUN_000aa898
// address: 0xaa898
// body: available
// range: 0xaa898-0xaaa1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000aa898(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piStack_30;
  undefined4 uStack_2c;
  
  piStack_30 = param_3;
  uStack_2c = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  piVar2 = (int *)(**(code **)(*param_3 + 0x44))(param_3);
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x4e0) == param_2) {
      iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2);
      iVar3 = iVar3 + -0xb210;
      if (iVar3 == 0) {
        iVar3 = FUN_000943b4(uVar1);
      }
      else if (iVar3 == 1) {
        iVar3 = FUN_00093374(uVar1);
      }
      else if (iVar3 == 2) {
        iVar3 = FUN_00093358(uVar1);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c8);
      if ((iVar3 == param_2) && (iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2), iVar3 == 0xc010)) {
        uVar4 = (**(code **)(*piVar2 + 0xe8))(piVar2);
        uVar4 = uVar4 & 0xfff;
        (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
        uVar5 = FUN_0022e20c(param_1 + 0x810);
        if (uVar4 < uVar5) {
          FUN_00171e90(&piStack_30);
          uVar6 = FUN_0023b208(param_1 + 0x810,uVar4);
          FUN_000acd2c(param_1,uVar6,&piStack_30);
          uVar6 = FUN_0023b208(param_1 + 0x810,uVar4);
          FUN_00092a18(uVar1,uVar6);
          FUN_00171ea4(&piStack_30);
        }
        iVar3 = (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
      }
    }
  }
  return iVar3;
}

