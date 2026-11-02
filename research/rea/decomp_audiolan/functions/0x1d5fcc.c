// rea decompile_all
// name: FUN_001d5fcc
// address: 0x1d5fcc
// body: available
// range: 0x1d5fcc-0x1d6157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d60cc to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001d5fcc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *local_1c0;
  int *local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  param_1[3] = 0;
  local_1c0 = (int *)0x0;
  local_1bc = (int *)0x0;
  local_1ac = 0x100;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_20 = param_2;
  local_1c = param_2;
  piVar1 = (int *)FUN_001a0808(0x14,1);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0x10000;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    iVar2 = FUN_001a0808(1);
    piVar1[3] = iVar2;
    piVar1[4] = iVar2;
    iVar2 = piVar1[1];
    piVar3 = (int *)FUN_0019b388(iVar2 + 0xc);
    piVar3[1] = 0;
    *piVar3 = iVar2;
    piVar3[2] = *piVar1;
    *piVar1 = (int)piVar3;
  }
  local_1c0 = piVar1;
  local_1bc = piVar1;
  local_1b8 = FUN_001d631c(piVar1,local_1ac);
  local_1b0 = local_1b8 + local_1ac;
  local_28 = 0;
  local_24 = 0;
  local_1b4 = local_1b8;
  uVar8 = FUN_001d5e08(&local_1c0,&local_20,param_1);
  piVar1 = local_1bc;
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 == 0) {
    param_1[10] = local_28;
    param_1[0xb] = local_24;
    param_1[7] = param_1[6];
  }
  else {
    iVar4 = param_1[7];
    if (iVar4 - param_1[6] != 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    param_1[7] = iVar4 + -0x10;
    iVar2 = *(int *)(iVar4 + -0x10);
    iVar5 = *(int *)(iVar4 + -0xc);
    iVar6 = *(int *)(iVar4 + -8);
    iVar7 = *(int *)(iVar4 + -4);
    *param_1 = iVar2;
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    param_1[3] = iVar7;
    *(undefined4 *)(iVar4 + -4) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (local_1bc != (int *)0x0) {
    while( true ) {
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        iVar2 = piVar1[2];
      }
      if (iVar4 == 0 || iVar4 == iVar2) break;
      iVar2 = *(int *)(iVar4 + 8);
      FUN_0018a280();
      *piVar1 = iVar2;
      iVar2 = extraout_r1;
    }
    FUN_0019f30c(piVar1[4]);
    FUN_0019f30c(piVar1);
  }
  return param_1;
}

