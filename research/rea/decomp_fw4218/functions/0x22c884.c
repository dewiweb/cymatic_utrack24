// rea decompile_all
// name: FUN_0022c884
// address: 0x22c884
// body: available
// range: 0x22c884-0x22ca5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0022c884(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0022cba0(param_1);
  switch(uVar1) {
  case 0:
    FUN_00226624(param_2);
    break;
  case 1:
    FUN_002265e4(param_2,0);
    break;
  case 2:
    FUN_002265e4(param_2,1);
    break;
  case 3:
    FUN_00226360(param_2);
    for (puVar3 = (undefined4 *)*param_1; (undefined4 *)(*param_1 + param_1[1] * 0x20) != puVar3;
        puVar3 = puVar3 + 8) {
      FUN_002266dc(param_2,*puVar3,puVar3[1],0);
      FUN_0022c884(puVar3 + 4,param_2);
    }
    FUN_00226878(param_2,param_1[1]);
    break;
  case 4:
    FUN_00226308(param_2);
    for (iVar2 = *param_1; *param_1 + param_1[1] * 0x10 != iVar2; iVar2 = iVar2 + 0x10) {
      FUN_0022c884(iVar2,param_2);
    }
    FUN_00226748(param_2,param_1[1]);
    break;
  case 5:
    FUN_002266dc(param_2,*param_1,param_1[1],0);
    break;
  case 6:
    iVar2 = FUN_0022c870(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_0022caf8(param_1);
      if (iVar2 == 0) {
        uVar4 = FUN_0022cbb0(param_1);
        if ((int)uVar4 == 0) {
          uVar4 = FUN_0022cbf8(param_1);
          uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((int)uVar4 == 0) {
            FUN_002266a8(param_2,uVar1,*param_1,param_1[1]);
          }
          else {
            FUN_00226714(param_2,uVar1,*param_1,param_1[1]);
          }
        }
        else {
          FUN_00226674(param_2,(int)((ulonglong)uVar4 >> 0x20),*param_1,param_1[1]);
        }
      }
      else {
        FUN_00226648(param_2,*param_1);
      }
    }
    else {
      FUN_002265b8(param_2,*param_1);
    }
  }
  return param_1;
}

