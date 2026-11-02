// rea decompile_all
// name: FUN_00175334
// address: 0x175334
// body: available
// range: 0x175334-0x17544b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17540c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00175334(int *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int local_30;
  int *local_2c;
  int *piStack_24;
  uint *puStack_20;
  uint local_1c;
  int local_18;
  
  piStack_24 = param_1;
  puStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((*param_2 != 0) && (param_4 != 0)) {
    uVar1 = FUN_00003738();
    if (uVar1 == 0) {
      if ((*param_2 & local_1c) != 0) {
        FUN_0017544c(*(undefined4 *)(*param_2 & 0xffffffe0),*param_1);
      }
      *param_1 = 0;
      *param_2 = *param_2 & ~local_1c;
      return 1;
    }
    if (*param_1 != 0) {
      uVar5 = *param_2 & local_1c;
      uVar2 = FUN_00003738();
      if (uVar5 == 0) {
        if (uVar1 <= uVar2) goto LAB_00175378;
      }
      else if ((uVar1 <= uVar2) && ((uVar2 < 0x20 || (uVar2 - uVar1 < uVar2 >> 1)))) {
LAB_00175378:
        FUN_000039e0(*param_1,local_18,uVar1 + 1);
        return 1;
      }
    }
    local_2c = *(int **)(*param_2 & 0xffffffe0);
    iVar4 = local_2c[1];
    uVar2 = uVar1 + 8 & 0xfffffffc;
    uVar5 = iVar4 + uVar2;
    if (uVar5 < 0x1001) {
      local_2c[1] = uVar5;
      local_30 = *local_2c;
      puVar3 = (undefined2 *)(*local_2c + iVar4 + 0x18);
    }
    else {
      puVar3 = (undefined2 *)FUN_001754c4(local_2c,uVar2,&local_30);
    }
    if (puVar3 != (undefined2 *)0x0) {
      uVar5 = (int)puVar3 + (-0x18 - local_30);
      if ((0xffff < uVar5) ||
         ((*puVar3 = (short)uVar5, 0xffff < uVar2 &&
          ((*(uint *)(local_30 + 0x10) != uVar2 || (uVar5 != 0)))))) goto LAB_0017540c;
      if (0xffff < uVar2) {
        uVar2 = 0;
      }
      puVar3[1] = (short)uVar2;
      puVar3 = puVar3 + 2;
      if (puVar3 != (undefined2 *)0x0) {
        FUN_000039e0(puVar3,local_18,uVar1 + 1);
        if ((*param_2 & local_1c) != 0) {
          FUN_0017544c(local_2c,*param_1);
        }
        *param_1 = (int)puVar3;
        *param_2 = *param_2 | local_1c;
        return 1;
      }
    }
    return 0;
  }
LAB_0017540c:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

