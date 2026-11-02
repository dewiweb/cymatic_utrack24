// rea decompile_all
// name: FUN_000704c4
// address: 0x704c4
// body: available
// range: 0x704c4-0x705f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000704c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  
  iVar2 = *param_1;
  local_28 = param_4;
  FUN_001a0700();
  iVar3 = FUN_001d8eb0(param_1 + 8,param_2);
  if (iVar3 == 0) {
    FUN_001a0d18(iVar2);
    return 1;
  }
  iVar3 = FUN_00041c14(param_1[7],&local_28);
  if (iVar3 == 0) {
    FUN_000028a4(s___ERROR__OutputChannel__Could_NO_0007060e + 2);
  }
  else {
    iVar3 = FUN_00042a98(local_28,s_User_OutputName_000705f8,param_2);
    if (iVar3 != 0) {
      FUN_00041dd4(local_28);
      FUN_001da458(param_1 + 8,param_2);
      FUN_001a0d18(iVar2);
      iVar2 = *param_1;
      piVar5 = *(int **)(iVar2 + 0x24);
      uVar6 = *DAT_00070608;
      uVar7 = DAT_00070608[1];
      puVar4 = (undefined4 *)FUN_001a0808(0x18,1);
      uVar1 = _DAT_0007060c;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[5] = param_1;
        puVar4[4] = iVar2;
        *puVar4 = uVar1;
        puVar4[1] = piVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar7;
      }
      (**(code **)(*piVar5 + 0x2c))(piVar5,puVar4,0xffffffff);
      return 1;
    }
    FUN_000028a4(s_ERROR__OutputChannel__Could_NOT_s_00070650);
    FUN_00041dd4(local_28);
  }
  FUN_001a0d18(iVar2);
  return 0;
}

