// rea decompile_all
// name: FUN_001a8c68
// address: 0x1a8c68
// body: available
// range: 0x1a8c68-0x1a8e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a8c68(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_20;
  
  *param_2 = 0;
  if ((((param_1 == (int *)0x0) || (param_1[2] == 0)) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0xfffffffe;
  }
  iVar1 = FUN_000034d0();
  iVar2 = FUN_000034d0(param_1[1]);
  iVar3 = FUN_000034d0(param_1[2]);
  local_20 = iVar3 + iVar1 + iVar2 + 0xb;
  if (param_1[3] != 0) {
    iVar1 = FUN_000034d0();
    local_20 = iVar1 + local_20 + 2;
  }
  if (*(code **)s_x2__SIP__s__s___s___s_001a8e10._0_4_ == entry) {
    iVar1 = FUN_0019b388(local_20);
  }
  else {
    iVar1 = (**(code **)s_x2__SIP__s__s___s___s_001a8e10._0_4_)();
  }
  if (iVar1 != 0) {
    iVar2 = FUN_00003318(param_1[2],0x3a);
    iVar3 = param_1[3];
    if (iVar2 == 0) {
      if (iVar3 == 0) {
        FUN_000028d8(iVar1,s_SIP__s__s__s_001a8e48,*param_1,param_1[1],param_1[2]);
      }
      else {
        FUN_000028d8(iVar1,s_SIP__s__s__s__s_001a8e38,*param_1,param_1[1],param_1[2],iVar3);
      }
    }
    else if (iVar3 == 0) {
      FUN_000028d8(iVar1,s_SIP__s__s___s__001a8e28,*param_1,param_1[1],param_1[2]);
    }
    else {
      FUN_000028d8(iVar1,s_x2__SIP__s__s___s___s_001a8e10 + 4,*param_1,param_1[1],param_1[2],iVar3);
    }
    iVar2 = 0;
    piVar6 = param_1 + 5;
    iVar3 = FUN_001a4bc4(piVar6,0);
    while (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_001a4bdc(piVar6,iVar2);
      if (puVar4[1] == 0) {
        iVar3 = FUN_000034d0(*puVar4);
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = FUN_000034d0(*puVar4);
        iVar5 = FUN_000034d0(puVar4[1]);
        iVar3 = iVar3 + iVar5 + 3;
      }
      local_20 = local_20 + iVar3;
      if ((code *)*DAT_001a8e58 == entry) {
        iVar1 = FUN_001ab47c(iVar1,local_20);
      }
      else {
        iVar1 = (*(code *)*DAT_001a8e58)(iVar1);
      }
      iVar3 = FUN_000034d0();
      if (puVar4[1] == 0) {
        FUN_000028d8(iVar3 + iVar1,&DAT_001a8e64,*puVar4);
      }
      else {
        FUN_000028d8(iVar3 + iVar1,s___s__s_001a8e5c,*puVar4);
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_001a4bc4(piVar6,iVar2);
    }
    if (param_1[4] != 0) {
      iVar2 = FUN_000034d0();
      iVar2 = iVar2 + local_20 + 4;
      if ((code *)*DAT_001a8e58 == entry) {
        iVar1 = FUN_001ab47c(iVar1,iVar2);
      }
      else {
        iVar1 = (*(code *)*DAT_001a8e58)(iVar1,iVar2);
      }
      iVar3 = FUN_000034d0();
      FUN_00002904(iVar3 + iVar1,iVar2 - ((iVar3 + iVar1) - iVar1),s___s__001a8e68,param_1[4]);
    }
    *param_2 = iVar1;
    return 0;
  }
  return 0xfffffffc;
}

