// rea decompile_all
// name: FUN_00218a08
// address: 0x218a08
// body: available
// range: 0x218a08-0x218bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00218a08(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  
  iVar5 = *(int *)(param_2 + 0x10);
  piVar1 = (int *)FUN_0022c70c(param_2);
  iVar6 = 1;
  iVar3 = *piVar1;
  while (iVar3 != 0) {
    uVar2 = FUN_0020b6d8(iVar3);
    uVar4 = FUN_0022c388(auStack_34,param_3);
    iVar6 = FUN_0022dccc(param_2 + 0x19,uVar4,uVar2);
    iVar5 = iVar3;
    if (iVar6 == 0) {
      piVar1 = (int *)FUN_0020b700(iVar3);
      iVar3 = *piVar1;
    }
    else {
      piVar1 = (int *)FUN_0020b6f0(iVar3);
      iVar3 = *piVar1;
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    FUN_00217a40(&local_30,param_2,iVar5);
    if (iVar6 != 0) {
      FUN_00217e78(auStack_34,param_2);
      iVar3 = FUN_0022466c(&local_30,auStack_34);
      if (iVar3 != 0) {
        FUN_00218cb0(&local_38,param_2,0,iVar5,param_3);
        local_3c = 1;
        uVar2 = FUN_00238d80(param_1,&local_38,&local_3c);
        return uVar2;
      }
      FUN_00209968(&local_30);
    }
    uVar2 = FUN_0022c388(auStack_28,param_3);
    uVar4 = FUN_0020b6d8(local_30);
    iVar3 = FUN_0022dccc(param_2 + 0x19,uVar4,uVar2);
    if (iVar3 == 0) {
      local_2c = 0;
      uVar2 = FUN_00238d80(param_1,&local_30,&local_2c);
    }
    else {
      FUN_00218cb0(auStack_34,param_2,0,iVar5,param_3);
      local_38 = 1;
      uVar2 = FUN_00238d80(param_1,auStack_34,&local_38);
    }
  }
  else {
    FUN_00218cb0(auStack_34,param_2,0,iVar5,param_3);
    local_38 = 1;
    uVar2 = FUN_00238d80(param_1,auStack_34,&local_38);
  }
  return uVar2;
}

