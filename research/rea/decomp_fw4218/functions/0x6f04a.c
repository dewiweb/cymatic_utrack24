// rea decompile_all
// name: FUN_0006f04a
// address: 0x6f04a
// body: available
// range: 0x6f04a-0x6f0ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0006f04a(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_001a2920(&iStack_20,param_1 + 0x11c);
  local_18 = *(undefined4 **)(param_1 + 0x15c);
  do {
    local_18 = (undefined4 *)*local_18;
    local_14 = *(undefined4 *)(param_1 + 0x15c);
    iVar1 = FUN_0022d8ec(&local_18,&local_14);
    if (iVar1 == 0) {
      if (param_2 == -1) {
LAB_0006f0a0:
        if (*(int *)(param_1 + 0x170) != 0) {
          FUN_00120df4();
          *(undefined4 *)(param_1 + 0x170) = 0;
        }
      }
      else {
        if (param_2 == 0) {
          if ((*(int *)(param_1 + 0x16c) == 0) ||
             (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x16c))) break;
          if (*(int *)(param_1 + 0x170) != 0) {
            FUN_00120df4();
          }
          uVar2 = *(undefined4 *)(param_1 + 0x16c);
        }
        else {
          if (param_2 != 1) goto LAB_0006f0a0;
          if ((*(int *)(param_1 + 0x168) == 0) ||
             (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x168))) break;
          if (*(int *)(param_1 + 0x170) != 0) {
            FUN_00120df4();
          }
          uVar2 = *(undefined4 *)(param_1 + 0x168);
        }
        *(undefined4 *)(param_1 + 0x170) = uVar2;
        FUN_0012100c(uVar2,param_1);
      }
      break;
    }
    iVar1 = (**(code **)(*(int *)local_18[2] + 8))((int *)local_18[2],param_2);
  } while (iVar1 != 0);
  FUN_001a2938(&iStack_20);
  return CONCAT44(iStack_1c,iStack_20);
}

