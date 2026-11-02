// rea decompile_all
// name: FUN_00070260
// address: 0x70260
// body: available
// range: 0x70260-0x703e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00070260(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int local_28;
  
  iVar2 = *param_1;
  local_28 = param_4;
  FUN_001a0700();
  iVar3 = FUN_001d8eb0(param_1 + 10,param_2);
  bVar9 = iVar3 == 0;
  if (bVar9) {
    iVar3 = param_1[3];
  }
  if (bVar9 && iVar3 == param_3) {
    FUN_001a0d18(iVar2);
    return 1;
  }
  if (param_4 == 0) {
    iVar3 = FUN_00041c14(param_1[7],&local_28);
    if (iVar3 == 0) {
      FUN_000028a4(s_ERROR__OutputChannel__Could_NOT_o_000703f0);
    }
    else {
      iVar3 = FUN_00042a98(local_28,s_ManualSDP_000703e4,param_2);
      if (iVar3 == 0) {
        FUN_000028a4(s_ERROR__OutputChannel__Could_NOT_s_00070430);
      }
      iVar4 = FUN_00043514(local_28,s_ManualSDPChannel_00070468,param_3);
      if (iVar4 == 0) {
        FUN_000028a4(s___ERROR__OutputChannel__Could_NO_00070482 + 2);
        FUN_00041dd4(local_28);
      }
      else {
        FUN_00041dd4(local_28);
        if (iVar3 != 0) goto LAB_0007034c;
      }
    }
    FUN_001a0d18(iVar2);
    return 0;
  }
LAB_0007034c:
  FUN_001da458(param_1 + 10,param_2);
  param_1[3] = param_3;
  FUN_001a0d18(iVar2);
  iVar3 = *param_1;
  piVar6 = *(int **)(iVar3 + 0x24);
  uVar7 = *DAT_0007047c;
  uVar8 = DAT_0007047c[1];
  puVar5 = (undefined4 *)FUN_001a0808(0x18,1);
  uVar1 = _DAT_00070480;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[5] = param_1;
    puVar5[4] = iVar3;
    *puVar5 = uVar1;
    puVar5[1] = piVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
  }
  (**(code **)(*piVar6 + 0x2c))(piVar6,puVar5,0xffffffff);
  return 1;
}

